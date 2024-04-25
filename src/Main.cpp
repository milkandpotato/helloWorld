#include "../include/Log.h"
#include "../include/Math.h"
#include "Entity.cpp"
#include "Logger.cpp"
#include <array>
#include <stdlib.h>

int main()
{
    Logger logger;

    //实体类创建
    logger.Info("Hello!");
    logger.Warning("Hello!");
    logger.Error("Hello!");

    //C++的继承
    //构造函数先执行父类的构造函数，然后再执行子类的构造函数
    Entity* entity = new Player("player1");
    logger.Info((*entity).GetName());
    delete entity;
    Player* player = new Player("player2");
    logger.Info(player->GetName());
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

    //程序结束，delete player3,logger,delete时先处理子类的析构函数，再处理父类的析构函数
    std::cin.get();
}