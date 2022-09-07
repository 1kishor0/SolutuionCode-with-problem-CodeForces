#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;

    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1&&b==1&&c==1)
        {
            cnt+=1;
        }
        else if(a==1&& b==1 && c==0)
        {
            cnt+=1;
        }
                else if(a==0&& b==1 && c==1)
        {
            cnt+=1;
        }
                      else if(a==1&& b==0 && c==1)
        {
            cnt+=1;
        }


    }
    cout<<cnt;
}

