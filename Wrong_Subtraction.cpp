#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n_int, k_times;
    int last_digit;
    cin>> n_int>>k_times;

    while(k_times--)
    {
        last_digit=n_int%10;
        if(last_digit!=0)
        {

            n_int-=1;
        }
        else
        {
            n_int=n_int/10;
        }
    }
    cout<<n_int;


}
