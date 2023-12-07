#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>> s;
    int cnt=0;
    int cnt2=0;
    char touppers,tolowers;
    for(int i=0; i<s.length(); i++)
    {

        if(isupper(s[i]))

        {
            cnt+=1;

        }
        else
        {
            cnt2+=1;
        }
    }
    if(cnt>cnt2)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else if(cnt<cnt2)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout<<s;

}
