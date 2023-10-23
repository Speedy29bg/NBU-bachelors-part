// Задача 1. Съставете С++ конзолна програма, чрез която да изведете 
// трите си имена на екрана.
#include <iostream>
#include <string>
#include <vector>
int main()
{
    // with user input

    // std::vector<std::string> names;
    // std::string temp;
    // for (int i = 0; i < 3;i++)
    // {
    //     std::getline(std::cin, temp);
    //     names.push_back(temp);
    // }

    // for (int i = 0; i < 3;i++)
    // {
    //     std::cout << names[i] << std::endl;
    // }

    //------------------------------------
    
    //without user input
    const std::string firstName  = "Georgi";
    const std::string secondName = "Rumenov";
    const std::string lastName   = "Iliev";

    std::cout << firstName << " " << secondName << " " << lastName << std::endl;

    return 0;
}