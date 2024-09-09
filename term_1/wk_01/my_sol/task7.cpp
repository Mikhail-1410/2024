#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(int argc, char* argv[]) {

    int n = std::atoi(argv[1]);
    std::ofstream file("fibonacci.txt");
    std::vector<int> fib(n);
    fib[0] = 1;
    fib[1] = 1;

    file << "1: " << fib[0] << "\n";
    file << "2: " << fib[1] << "\n";

    for (int i = 2; i < n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
        file << i + 1 << ": " << fib[i] << std::endl;
    }
    file.close();
    std::cout<<"Запись файла fibonacci.txt выполнена успешно."<<std::endl;
    return 0;
}
