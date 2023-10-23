// Задача 2. Съставете С++ конзолна програма, чрез която да изведете на 
// екрана, в кой университет учите и по каква програма се обучавате.
#include <iostream>
#include <string>
#include <vector>

int main ()
{
    // with user input

    // std::string uni;
    // std::string spec;

    // std::getline(std::cin, uni);
    // std::getline(std::cin, spec);

    //------------------------------------
    // without user input
    const std::string uni  = "NBU";
    const std::string spec = "Informatics";

    std::cout << uni << " " << spec;
    return 0;
}