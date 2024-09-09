#include <iostream>
#include <fstream>

int main() {
    int n;
    std::cout<<"Введите n: ";
    std::cin>>n;

    std::ofstream file("output_task5.txt");
    for (int i = 1; i <= n; ++i) {
        file << i << " ";
    }
    file.close();
    std::cout<<"Запись файла output_task5.txt выполнена успешно."<<std::endl;
    return 0;
}
