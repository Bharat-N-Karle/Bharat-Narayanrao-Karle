#include <iostream>
#include <vector>
#include <map>

std::map<int, int> countMultiples(const std::vector<int>& numbers) {
    std::map<int, int> counts = {
        {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}, {6, 0}, {7, 0}, {8, 0}, {9, 0}
    };

    for (int num : numbers) {
        for (int i = 1; i <= 9; ++i) {
            if (num % i == 0) {
                counts[i]++;
            }
        }
    }

    return counts;
}

void printResult(const std::map<int, int>& counts) {
    std::cout << "{";
    bool first = true;
    for (const auto& pair : counts) {
        if (!first) {
            std::cout << ", ";
        }
        std::cout << pair.first << ": " << pair.second;
        first = false;
    }
    std::cout << "}" << std::endl;
}

int main() {
    std::vector<int> input = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    std::map<int, int> result = countMultiples(input);

    std::cout << "Output: ";
    printResult(result);

    return 0;
}
