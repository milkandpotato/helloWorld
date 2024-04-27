/*
 * @Description  : 
 * @Version      : V1.0.0
 * @Author       : 雨翀 孙 milkandpotato@outlook.com
 * @Date         : 2024-04-27 15:09:50
 * @LastEditors  : 雨翀 孙 milkandpotato@outlook.com
 * @LastEditTime : 2024-04-27 16:16:43
 * @FilePath     : Main.cpp
 * Copyright 2024 Marvin, All Rights Reserved. 
 * 2024-04-27 15:09:50
 */
#include <array>
#include <stdlib.h>

#include "../include/Player.h"

//重载了<<（左移运算符）
std::ostream &operator<<(std::ostream &stream, Player &player)
{
  stream << player.GetX() << "," << player.GetY();
  return stream;
}

int main()
{
    //实体类创建
    // logger.Info("Hello!");
    // logger.Warning("Hello!");
    // logger.Error("Hello!");

    //C++的继承
    //构造函数先执行父类的构造函数，然后再执行子类的构造函数
    Entity* entity = new Player("player1");
    entity->GetLogger().Info((*entity).GetName());
    delete entity;
    Player* player = new Player("player2");
    player->GetLogger().Info(player->GetName());
    delete player;

    //数组
    /*int count = 5;
    int *array_1 = new int[5];  // 原始声明
    std::array<int, 5> array_2; // C++11 声明
    for (int i = 0; i < count; i++)
    {
      array_1[i] = 2;
      array_2[i] = 3;
    }
    std::cout << array_1 << std::endl;*/
    // std::cout << array_2.at(1) << std::endl;

    //字符串字面量的使用
    /*const char *name = "syc";
    const char* otherName = R"(
    List1
    List2
    )";
    std::cout << otherName << std::endl;
    */

    //创建对象的两种方式
    Player player3("player3"); //在栈上创建，在函数执行完成之后自动销毁
    Player* player4 = new Player("player4");//在堆上创建，会一直存在直到手动delete
    std::cout << player3.GetName() << std::endl; //输出玩家1的名称
    std::cout << player4->GetName() << std::endl; //输出玩家2的名称
    delete player4;//删除创建的player4对象，释放内存

    //隐式转换
    std::string playerName = "player5"; //定义了一个string
    Player player5 = playerName; //在将string传给对象时，隐式执行了Player(std::string name)这个构造函数
    //使用带有explicit关键字的构造函数
    Player player6(2.1,3.5);
    player6.SetName("player6");
    Player player7(6.92,3.27);
    player7.SetName("player7");
    Player player8 = player6 + player7;
    std::cout << player8 << std::endl;

    //指针的逆向引用和引用的指向的区别
    Player player9(9);
    player9.SetName("player9");
    //创建指针
    Player* point = &player9;
    //指针的逆向引用
    player9.GetLogger().Info((*point).GetName());
    player9.GetLogger().Info(point->GetName());

    //程序结束，delete player3,logger,delete时先处理子类的析构函数，再处理父类的析构函数
    std::cin.get();
}