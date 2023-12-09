#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, cnt = 0, cnt2 = 0;
    cin >> n;
    if (n == 4 || n == 7)
    {
        cout << "NO";
    }
    else
    {
        while (n > 0)
        {
            if (n % 10 == 4 || n % 10 == 7)
            {
                cnt += 1;
            }
            n = n / 10;
            cnt2 += 1;
        }
            if (cnt == 4 || cnt == 7)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        
    }
}