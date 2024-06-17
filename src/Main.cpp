/*
 * @Description  :
 * @Version      : V1.0.0
 * @Author       : 雨翀 孙 milkandpotato@outlook.com
 * @Date         : 2024-05-02 16:34:31
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-06-17 19:59:59
 * @FilePath: /helloWorld/src/Main.cpp
 * Copyright 2024 Marvin, All Rights Reserved.
 * 2024-05-02 16:34:31
 */

// 预编译头文件加载
#include "../include/pch.hpp"

#include "../include/Entity.h"
#include "../include/NumberUtils.hpp"
#include "../include/Player.h"
#include "../include/ThreadTest.hpp"
#include <iostream>
#include <tuple>

// 函数指针
void ForEach(std::vector<int> &array, void (*func)(int)) {
  for (int value : array) {
    func(value);
  }
}
void PrintInt(int value) { std::cout << "value:" << value << std::endl; }

struct TestEntity {
  int x, y;
};

std::tuple<std::string, int> getTuple() { return {"zhangsan", 14}; };

int main() {
  /* std::cout << __cplusplus << std::endl;
  int a = glfwInit();
  std::cout << a << std::endl; */

  {
    int a;
    a = 5;
    int *b = new int(6);
    Log(a);
    Log(b);

    // 静态数组
    std::array<int, 5> data = {1, 2, 3, 4, 5};
    // 函数指针
    std::vector<int> funcArray = {0, 2, 4, 6, 8};
    ForEach(funcArray, PrintInt);
    // lambda
    // 第一种用法
    std::for_each(data.begin(), data.end(), [](int value) { Log(value); });
    // 第二种用法
    auto findNumber = std::find_if(funcArray.begin(), funcArray.end(),
                                   [](int value) { return value > 5; });
    std::cout << *findNumber << std::endl;
  }

  // 线程的使用
  // {
  //   bool is_Finished = false;
  //   std::thread worker(doWorkTest, std::ref(is_Finished));
  //   std::cin.get();
  //   is_Finished = true;
  //   std::cout << "Finished..." << std::endl;

  //   worker.join();
  //   std::cin.get();
  // }

  // 定时器的使用
  //  {
  //    std::thread worker(TimerTest);
  //    worker.join();
  //    std::cin.get();
  //  }

  // C++的多维数组
  // {
  //   // 二维数组
  //   // 创建了5*5个数组，将会被分配在内存的25个区域
  //   int **a2d = new int *[5];
  //   for (int i = 0; i < 5; i++)
  //   {
  //     a2d[i] = new int[5];
  //   }

  //   // 二维数组（优化版）
  //   // 创建了一个数组array指向一个长度为5*5的数组
  //   // 这个在内存分配上是在同一个内存块上,避免了内存碎片
  //   int *array = new int[5 * 5];
  //   for (int i = 0; i < 5; i++)
  //   {
  //     for (int j = 0; j < 5; j++)
  //     {
  //       array[j + i * 5] = 2;
  //     }
  //   }

  //   // 删除数组
  //   // 不能直接使用delete[][]去删除二维数组
  //   // delete[][] a2d;
  //   for (int i = 0; i < 5; i++)
  //   {
  //     delete[] a2d[i];
  //   }
  //   delete[] a2d;
  // }

  // 排序
  // {
  //   std::string output = "";

  //   std::vector<int> array = {2, 5, 4, 7, 1};
  //   std::sort(array.begin(), array.end()); // 一般排序
  //   std::string decrease = vector2String(std::ref(array));
  //   std::cout << decrease << std::endl;
  //   //使用自定义函数进行降序排列
  //   std::sort(array.begin(), array.end(), [](int a, int b)
  //             { return a > b; });
  //   std::string increase = vector2String(std::ref(array));
  //   std::cout << vector2String(std::ref(array)) << std::endl;

  //   std::cin.get();
  // }

  // 类型双关
  {
    TestEntity e = {1, 2};
    std::cout << &e << std::endl; // 获取到e的内存地址
    std::cout << (int *)&e << std::endl; // 将e的内存地址识别为int类型的内存地址
    std::cout << *(int *)&e
              << std::endl; // 解析转换后的内存地址，其实地址的内容为x的值
    std::cout
        << *((int *)&e + 1)
        << std::
               endl; // 在x的起始地址上添加平移一个int的长度，也就是4个字节，得到y的值的地址
  }

  // Union
  {
    struct objA {
      int x;
      float y;
    };

    struct objB {
      // union里面的数据共用一个内存地址
      union {
        struct {
          int x, y, z, w;
        };
        struct {
          objA a, b;
        };
      };
    };

    objB b = {1, 2, 3, 4};
    std::cout << "===============Union================" << std::endl;
    std::cout << &b.x << "," << &b.y << std::endl;
    std::cout << &b.a << std::endl;
  }

  // 构造函数的虚函数
  {
    std::cout << "===============Virtual Destructor================"
              << std::endl;
    class a {
    public:
      a() { std::cout << "a created!" << std::endl; };
      // 将析构函数变成虚析构函数之后，相当于给b添加了一个析构函数
      virtual ~a() { std::cout << "a destroyed!" << std::endl; };
    };

    class b : public a {
    public:
      b() {
        std::cout << "b created!" << std::endl;
        array = new int[5];
      };
      ~b() {
        std::cout << "b destroyed!" << std::endl;
        delete[] array;
      };

    private:
      int *array;
    };

    std::cout << "=====>A" << std::endl;
    a *testA = new a();
    delete testA;
    std::cout << "=====>B" << std::endl;
    b *testB = new b();
    delete testB;
    std::cout << "=====>C" << std::endl;
    a *testC = new b();
    delete testC; // delete C
                  // 的时候，调用了a和b的构造函数，但是只调用了a的析构函数，delete[]
                  // array未执行
  }

  // 类型转换
  {
    // 类型转换总共有四种
    // 1.static_cast
    // 2.dynamic_cast
    // 3.reinterpret_cast
    // 4.const_cast

    std::cout << "===============Type Cast================" << std::endl;
    double a = 5.35;
    double value = (int)a + 5;
    double value2 = static_cast<int>(a) + 5;
    std::cout << value << std::endl;
    std::cout << value2 << std::endl;
  }

  // 动态转换
  {
    class Enemy : public Entity {};
    Entity *entity = new Entity();
    Player *player = new Player("zhangsan");

    std::cout << "===============dynamic Cast================" << std::endl;
    Entity *playerEntity = dynamic_cast<Entity *>(player);
    std::cout << "playerEntity:" << playerEntity << std::endl;

    Enemy *enemyEntity = dynamic_cast<Enemy *>(playerEntity);
    std::cout << "enemyEntity:" << enemyEntity << std::endl;
  }

  // 结构化绑定（在C++17以后的版本生效）
  {
    std::cout <<"===============struct binding================" << std::endl;
    auto [name,age] = getTuple();
    std::cout << "name:" << name << std::endl;
    std::cout << "age:" << age << std::endl;
  }
}