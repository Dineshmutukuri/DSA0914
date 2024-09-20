#include <iostream>

int main() {
    int rows;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}
