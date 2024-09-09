#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char* argv[]) {

    int n = std::atoi(argv[1]);
    std::ofstream file("output_task6.txt");
    for (int i = 1; i <= n; ++i) {
        file << i << " ";
    }
    file.close();
    std::cout<<"Запись файла output_task6.txt выполнена успешно."<<std::endl;
    return 0;
}
