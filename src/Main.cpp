#include "../include/pch.hpp"

#include "../include/Random.hpp"

void printIntValue(const int& value){
    std::cout << "lvalue:" << value << std::endl;
}
void printIntValue(int&& value){
    std::cout << "rvalue:" << value << std::endl;
}

int main(){
    //单例模式
    {
        std::cout << CustomRandom::Random::getRandomString() << std::endl;
    }
    //左值和右值
    {
        //左值：左值指向内存位置，并且允许通过其地址访问这些位置
        //右值：右值是不能通过地址访问的表达式，通常是临时的值，它们不持久存在。
        int a = 10; //这里a是左值，10是右值
        int b = 11;
        int c = a+b;

        printIntValue(c);
        printIntValue(a+b);
    }
}