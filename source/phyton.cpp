#include <iostream>
#include <string.h>

#define SPACE " "

int main(int argc, char const *argv[])
{
    std::string fileName, params;
    for (int i = 1; i < argc; i++)
    {
        if (argv[i] == argv[1]) {
            fileName = argv[1];
        }
        else {
            params += SPACE+(std::string)argv[i];
        }
    }
    std::string startPrefix = "python";
    std::string command = startPrefix + SPACE + fileName + params;
    system(command.c_str());
    return 0;
}
