#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string buffer;
    std::getline(std::cin, buffer);
    std::stringstream buffer_stream(buffer);

    double a, b, result;
    char oper;

    buffer_stream >> a >> oper >> b;

    if (oper == '+') {
        result = a + b;
    }
    else if (oper == '-') {
        result = a - b;
    }
    else if (oper == '*') {
        result = a * b;
    }
    else if (oper == '/') {
        if (b == 0) {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 1;
        }
        result = a / b;
    }
    else {
        std::cerr << "Wrong operator!";
        return 1;
    }

    std::cout << "Result: " << result;

    return 0;

}
