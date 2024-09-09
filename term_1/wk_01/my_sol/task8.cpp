#include <iostream>
#include <array>
#include <fstream>

int main() {
    int n;
    std::cout<<"Введите n: ";
    std::cin>>n;
    std::array<int, 1000000> fib;
    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i < n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < n; ++i) {
        std::cout << i + 1 << ": " << fib[i] << std::endl;
    }
    
    return 0;
}
