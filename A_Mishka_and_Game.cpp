#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int mis=0;
    int chris=0;
    while (n--)
    {
        int mi;
        int ch;
        cin>>mi>>ch;

        if(mi>ch)
        {
            mis++;
        }
        else if(mi<ch)
        {
            chris++;
        }
        else
        {
            mis++;
            chris++;
        }
    }

   if(mis>chris)
   {
    cout<<"Mishka"<<endl;
   }
   else if(chris>mis)
   {
    cout<<"Chris"<<endl;
   }
   else
   {
    cout<<"Friendship is magic!^^"<<endl;
   }
    return 0;
}