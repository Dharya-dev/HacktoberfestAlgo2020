#include <Windows.h>
#include <iostream>
#include <bitset>
#include <string>

void stringToBinary()
{
    std::cout << "Enter a text to convert to binary: ";

    std::string input{};

    std::cin >> input;

    for (auto i = 0; i < input.size(); ++i)
    {
        std::cout << std::bitset<8> ( input.c_str()[i] ) << std::endl;
    }
}


int main()
{
    stringToBinary();

    system("pause");
    return 0;
}