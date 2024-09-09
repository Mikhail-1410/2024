#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>

int main() {
    std::cout<<"Введите n: ";
    int n;
    std::cin>>n;
    std::vector<double> harmonic(n);

    for (int i = 0; i < n; ++i) {
        harmonic[i] = 1.0 / (i + 1);
    }

    std::ofstream file("harmonic.bin", std::ios::binary);
    
    if (file.is_open()) {
        file.write(reinterpret_cast<const char*>(harmonic.data()), harmonic.size() * sizeof(double));
        file.close();
        std::cout << "Data written to binary file successfully." << std::endl;
    } else {
        std::cerr << "Could not open the file!" << std::endl;
        return 1;
    }

    return 0;
}