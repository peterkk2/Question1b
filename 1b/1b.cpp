#include <iostream>

int main() {
    double sum = 0.0;
    for (int num = 1, den = 3; num <= 95 && den <= 97; num += 2, den += 2) {
        sum += static_cast<double>(num) / den;
    }
    std::cout << "The sum of the series is: " << sum << std::endl;
    return 0;
}

