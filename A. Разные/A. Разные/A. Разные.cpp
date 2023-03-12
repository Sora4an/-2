#include <iostream>
#include <unordered_set>

int main() {
    size_t n;
    std::cin >> n;
    std::unordered_set<int> s;
    for (size_t i = 0; i < n; ++i) {
        int a;
        std::cin >> a;
        s.insert(a);
    }
    std::cout << s.size();
    return 0;
}
