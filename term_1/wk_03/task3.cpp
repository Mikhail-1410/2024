#include <iostream>
#include <cmath>

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 2; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

double maclaurin_sin(double x, int max_iter = 100, double tolerance = 1e-10) {
    while (x > M_PI) {
        x -= M_PI;
    }
    
    while (x < 0) {
        x += M_PI; 
    }
    double sum = 0.0;
    double term;
    int n = 0;
    
    do {
        term = pow(-1, n) * pow(x, 2 * n + 1) / factorial(2 * n + 1);
        sum += term;
        ++n;
    } while (fabs(term) > tolerance && n < max_iter);
    
    return sum;
}

int main() {
    double x;
    std::cout << "Введите x для вычисления sin(x) через ряд Маклорена: ";
    std::cin >> x;

    double result = maclaurin_sin(x);
    std::cout << "Результат sin(" << x << ") через ряд Маклорена: " << result << std::endl;
    std::cout << "Истинное значение sin(" << x << "): " << sin(x) << std::endl;

    return 0;
}
