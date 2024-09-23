#include <iostream>
#include <float.h>
#include <cmath>
#include <bitset>

void print_bin(double num){
    union {
        double f;
        uint64_t i;
    } u = { num }; 
    std::bitset<64> bits(u.i);  
    std::cout << bits << std::endl;
}

double sum(int count){
    double sum = 0.0;
    
    std::cout << "Partial sums in binary:\n";
    
    for (int i = 1; i <= count; ++i) {
        double term = 1.0/double(i); 
        sum += term;
        std::cout << "Step " << i << ": ";
        print_bin(sum); 
    }

    return sum;
}

int main() {
    int n;
    std::cout << "Введите количество членов ряда: ";
    std::cin >> n;
    
    std::cout << "Сумма первых " << n << " членов ряда: " << sum(n) << std::endl;
    
    return 0;
}