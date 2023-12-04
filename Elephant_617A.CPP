#include <bits/stdc++.h>
using namespace std;

int main() {
    int friendDistance;
    int minimumDistance = 0;

    cin >> friendDistance;

    minimumDistance = friendDistance / 5;
    if (friendDistance % 5 != 0) {
        minimumDistance++;
    }

    cout << minimumDistance;

    return 0;
}
