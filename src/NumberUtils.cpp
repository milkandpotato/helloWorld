#include "../include/NumberUtils.hpp"

std::string vector2String(const std::vector<int> &array){
    std::string response = "";
    for (int i = 0; i < array.size(); i++)
    {
        response.append(std::to_string(array[i]));
        if (i != vec.size() - 1) {
            response.append(", ");
        }
    }
    return response;
}