#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s.length()>10)
        {
         string s2=s.substr(1,s.length()-2);
        int f=s2.length();

        cout<<s[0]<<f<<s[s2.length()+1]<<endl;

        }else{
            cout<<s<<endl;
        }

    }
}
