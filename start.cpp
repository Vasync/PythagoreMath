#include <cmath>
#include <bits/stdc++.h>>
#include <iomanip>
#define ll long long
using namespace std;

/**
 * @param math pthagore function
 */

double pow_new(double a, double b){
    ll sum = 1;
    for(ll i = 0; i < b; i++){
        sum *= a;
    }
    return sum;
}

double tinhPythagore(double a, double b) {
    double c = sqrt(pow_new(a, 2) + pow_new(b, 2));
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
