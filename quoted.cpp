#include <iostream>
#include <string>
#include <iomanip>

int main(int argc, char ** argv)
{
    std::string s = "welcome to C++14.";
    std::cout << s << std::endl;
    std::cout << std::quoted(s) << std::endl;

    return 0;
}