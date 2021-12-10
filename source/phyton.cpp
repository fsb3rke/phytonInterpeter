#include <iostream>
#include <string.h>
int main(int argc, char const *argv[])
{
    std::string fileName = "";
    std::string args = "";
    std::string space = " ";
    for (int i = 0; i <= argc; i++)
    {
        if (argv[i] == argv[0]) {}
        else if (argv[i] == argv[1]) {
            fileName = argv[1];
        }
        else {
            args += space+argv[i];
        }
    }
    std::string pythonStart = "python ";
    std::string command = pythonStart+fileName+args;
    system(command.c_str());
    return 0;
}
