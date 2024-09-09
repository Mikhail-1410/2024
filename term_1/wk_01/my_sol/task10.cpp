#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>

int main() {
    std::cout<<"Введите n: ";
    int n;
    std::cin>>n;
    std::vector<double> harmonic(n);

    for (int i = 0; i < n; ++i) {
        harmonic[i] = 1.0 / (i + 1);
    }

    for (int i = 0; i < n; ++i) {
        std::cout << std::scientific << harmonic[i] << std::endl;
    }

    return 0;
}
