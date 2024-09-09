#include <iostream>
#include <array>
#include <vector>
#include <fstream>
#include <iomanip>

int main() {
    int n;
    std::cin>>n;
    std::array<double, 1000000> harmonic;

    for (int i = 0; i < n; ++i) {
        harmonic[i] = 1.0 / (i + 1);
    }

    for (int i = 0; i < n; ++i) {
        std::cout << std::scientific << harmonic[i] << std::endl;
    }

    return 0;
}
