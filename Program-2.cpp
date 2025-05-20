#include <iostream>
#include <vector>

std::vector<int> generateSeries(int x) {
    std::vector<int> series;
    for (int i = 1; i <= x; ++i) {
        series.push_back(2 * i - 1); // Generates odd numbers: 1, 3, 5, ...
    }
    return series;
}

void printSeries(const std::vector<int>& series) {
    for (size_t i = 0; i < series.size(); ++i) {
        std::cout << series[i];
        if (i != series.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int a;
    std::cout << "Enter a number (a): ";
    std::cin >> a;

    std::vector<int> result = generateSeries(a);
    std::cout << "Output: ";
    printSeries(result);

    return 0;
}
