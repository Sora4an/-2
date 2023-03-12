#include <iostream>
#include <vector>
#include <list>

int main() {
    int grade;
    std::string surname;
    std::vector<std::list<std::string>> students(3);
    while (std::cin >> grade) {
        std::cin >> surname;
        students[grade - 9].push_back(surname);
    }
    for (size_t i = 0; i < 3; ++i) {
        for (auto& lastname : students[i]) {
            std::cout << i + 9 << ' ' << lastname << std::endl;
        }
    }
}