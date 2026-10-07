#include <iostream>

double fahrenheitACelsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

int main() {
    double f = 98.6;
    std::cout << f << " F = " << fahrenheitACelsius(f) << " C" << std::endl;
    return 0;
}