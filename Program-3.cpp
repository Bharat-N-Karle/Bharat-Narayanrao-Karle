#include <iostream>
#include <vector>

std::vector<int> generateSeries(int x) {
    std::vector<int> series;
    int limit = (x % 2 == 1) ? x : x - 1; // If x is odd, limit=x; else, limit=x-1
    for (int i = 1; i <= limit; i += 2) {  // Step by 2 to get odd numbers
        series.push_back(i);
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
