#include <bits/stdc++.h>
using namespace std;
int main()
{
    int LimakWeight,BobWeight;
    cin>>LimakWeight>>BobWeight;
    bool i=true;
    int cnt=0;
    while(i==true){
        LimakWeight*=3;
        BobWeight*=2;
        if(BobWeight<LimakWeight)
        {
            i=false;
        }
        cnt++;
    }
    cout<<cnt;

}
