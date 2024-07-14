using namespace std;
#include <cmath>
#include <iostream>
#include <iomanip>

/**
 * @param math pthagore function
 */
double tinhPythagore(double a, double b) {
    double c = sqrt(pow(a, 2) + pow(b, 2));
    return c;
}

int main() {
    /**
    *  @var
    */
    double a;
    double b;
    cout << "input x: ";
    cin >> a;
    
    cout << "input y: ";
    cin >> b;
    double c = tinhPythagore(a, b);

    cout << "x = " << a << " and y = " << b << ", result pythagore = " << std::fixed << std::setprecision(2) << c << std::endl;

    return 0;
}
