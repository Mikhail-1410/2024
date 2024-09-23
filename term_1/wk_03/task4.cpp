#include <iostream>
#include <cmath>

double f(double x) {
    return exp(-x * x);
}

double trapezoidal_integral(double a, double b, int n) {
    double h = (b - a) / n; 
    double sum = 0.5 * (f(a) + f(b));  
    for (int i = 1; i < n; ++i) {
        sum += f(a + i * h);
    }
    return sum * h;
}

int main() {
    double a = 0.0;      
    double b = 1.0;    
    double tolerance = 1e-10; 
    double result;
    int n = 1000000;  

    do {
        result = trapezoidal_integral(a, b, n);
        double last_term_contribution = f(b) * (b - a) / n;  
        if (last_term_contribution < tolerance) {
            break; 
        }
        b *= 2; 
    } while (true);

    std::cout << "Приблизительное значение интеграла: " << result << std::endl;

    return 0;
}
