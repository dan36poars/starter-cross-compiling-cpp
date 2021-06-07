#include "include/Vector.h"
#include "include/String2.h"

int main(int argc, char const *argv[])
{
    Vector vec1;
    String2<std::string> welcome("Daniel");
    std::cout << "Hello, World" << std::endl;
    welcome.hello();
    return 0;
}
