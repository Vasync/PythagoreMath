#include <cmath>
#include <iostream>
#include <iomanip>

/**
 * @param math pthagore function
 */
double tinhPythagore(double a, double b) {
    double c = std::sqrt(std::pow(a, 2) + std::pow(b, 2));
    return c;
}

int main() {
    /**
    *  @var
    */
    double a;
    double b;
    std::cout << "input x: ";
    std::cin >> a;
    
    std::cout << "input y: ";
    std::cin >> b;
    double c = tinhPythagore(a, b);

    std::cout << "x = " << a << " and y = " << b << ", result pythagore = " << std::fixed << std::setprecision(2) << c << std::endl;

    return 0;
}
