#pragma once
#include <string>
#include <unordered_set>

class StringParser
{
public:
    StringParser() = default;
    size_t countUniqueWords(const std::string& str);
private:
    std::unordered_set<std::string> _uniqueWords;
};

/*Left the definition of the function in the header file for easier connection for the unit tests. 
To divide the logic into a .h and .cpp file it was necessary to create a library 
and then use it in both projects. I think that these efforts are unnecessary for the current task*/
inline size_t StringParser::countUniqueWords(const std::string& str)
{
    auto word = std::string();

    for (auto i : str)
    {
        if (i != ' ')
        {
            word += i;
        }
        else if (!word.empty())
        {
            _uniqueWords.insert(word);
            word = "";
        }
    }
    /*to handle the last word,if there now trailing space*/
    if (!word.empty())
    {
        _uniqueWords.insert(word);
    }
    return _uniqueWords.size();
}
