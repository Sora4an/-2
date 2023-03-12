#include <iostream>
#include <queue> // FirstInFirstOut
using namespace std;

int main() {
    std::queue<int> first, second;
    for (int i = 0; i < 5; i++) {
        int card;
        cin >> card;
        first.push(card);
    }

    for (int i = 0; i < 5; i++) {
        int card;
        cin >> card;
        second.push(card);
    }

    int count = 0;

    while (!first.empty() && !second.empty() && count < 1000000) {
        int card1 = first.front();
        int card2 = second.front();
        first.pop();
        second.pop();
        if ((card1 > card2 && !(card1 == 9 && card2 == 0)) || (card1 == 0 && card2 == 9)) {
            first.push(card1);
            first.push(card2);
        }
        else {
            second.push(card1);
            second.push(card2);
        }
        count++;
    }

    if (first.empty()) {
        std::cout << "second " << count;
    }
    else if (second.empty()) {
        std::cout << "first " << count;
    }
    else {
        std::cout << "botva";
    }

    return 0;
}