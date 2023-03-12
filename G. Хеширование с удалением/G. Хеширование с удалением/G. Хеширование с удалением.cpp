#include <iostream>
#include <stack>
#include <unordered_set>

class StringSet {
private:
    std::unordered_set<std::string> ss;

public:
    void Add(const std::string& str) {
        ss.insert(str);
    }

    void Remove(const std::string& str) {
        ss.erase(str);
    }

    bool Exist(const std::string& str) {
        return !(ss.find(str) == ss.end());
    }
};

int main() {
    char op;
    StringSet stringSet;
    std::string str;
    std::cin >> op;
    while (op != '#') {
        std::cin >> str;
        switch (op) {
        case '+':
            stringSet.Add(str);
            break;
        case '-':
            stringSet.Remove(str);
            break;
        case '?':
            if (stringSet.Exist(str))
                std::cout << "YES" << std::endl;
            else
                std::cout << "NO" << std::endl;
        }
        std::cin >> op;
    }
}