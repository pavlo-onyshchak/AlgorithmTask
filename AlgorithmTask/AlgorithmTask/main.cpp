#include <iostream>
#include "StringParser.h"

int main()
{
    StringParser parser;
    std::string input;
    while (std::getline(std::cin, input))
    {
        std::cout << "Count of unique words : " << parser.countUniqueWords(input) << std::endl;
    }
    return 1;
}
