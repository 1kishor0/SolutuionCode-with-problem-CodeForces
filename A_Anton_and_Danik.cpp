#include <bits/stdc++.h>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<char> charPush(n); 

    for (int i = 0; i < n; ++i) {
        std::cin >> charPush[i];
    }

    int cntA = std::count(charPush.begin(), charPush.end(), 'A');
    int cntD = std::count(charPush.begin(), charPush.end(), 'D');

    if (cntA > cntD) {
        std::cout << "Anton";
    } else if (cntA < cntD) {
        std::cout << "Danik";
    } else {
        std::cout << "Friendship";
    }

    return 0;
}
