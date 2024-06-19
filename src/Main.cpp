#include "../include/pch.hpp"

#include "../include/Random.hpp"

int main(){
    //单例模式
    {
        std::cout << CustomRandom::Random::getRandomString() << std::endl;
    }
}