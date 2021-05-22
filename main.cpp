#include "include/Vector.h"
#include "include/String2.h"
#include <string>

int main(int argc, char const *argv[])
{
    Vector math;
    // add numbers
    std::cout << math.sum(5, 6) << std::endl;
    std::cout << math.sum(6, 3.654) << std::endl;
    std::cout << math.sum(3.654, 6) << std::endl;
    std::cout << math.sum(3.654L, 6.45L) << std::endl;
    std::cout << math.sum(3L, 6L) << std::endl;
    std::cout << math.sum(7.5f, 5.5f) << std::endl;

    // multiply numbers
    std::cout << math.multiply(2.4, 6.4) << std::endl;
    std::cout << math.multiply(2.4f, 6.4f) << std::endl;
    std::cout << math.multiply(4.8L, 7.6L) << std::endl;
    std::cout << math.multiply(4L, 7L) << std::endl;
    std::cout << math.multiply(4, 7) << std::endl;

    // subtraction numbers
    std::cout << math.subtract(4, 7) << std::endl;
    std::cout << math.subtract(4.f, 7.f) << std::endl;
    std::cout << math.subtract(4L, 7L) << std::endl;
    std::cout << math.subtract(4.6L, 7.5L) << std::endl;
    std::cout << math.subtract(5.43, 7.432) << std::endl;

    // divide numbers
    std::cout << math.divide(5, 4) << std::endl;
    std::cout << math.divide(5L, 4L) << std::endl;
    std::cout << math.divide(5.0L, 4.0L) << std::endl;
    std::cout << math.divide(5.0, 4.0) << std::endl;
    std::cout << math.divide(10.f, 5.f) << std::endl;
    std::cout << math.divide(10.f, 0.f) << std::endl;

    // copy assingment objects
    math.x = 3;
    math.y = 5;
    Vector mathB;
    mathB = math;
    std::cout << mathB.x << std::endl;
    std::cout << mathB.y << std::endl;

    mathB.x = 10;
    mathB.y = 20;

    Vector mathC;
    mathC = mathB;
    std::cout << mathC.x << std::endl;
    std::cout << mathC.y << std::endl;

    String2<int> str(2);
    str.hello();

    String2<std::string> str2("Hello from String Class Template");
    str2.hello();

    return 0;
}
