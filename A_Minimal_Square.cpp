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

    int tc;
    cin>>tc;
    while (tc--)
    {
        int a,b;
        cin>>a>>b;

        if(a<b)
        {

            if(2*a<b)
            {
                cout<<((b)*(b))<<endl;
            }
            else
            {
                cout<<((2*a)*(2*a))<<endl;
            }
            
        }
        else if(a>b)
        {
            if(2*b<a)
            {
                cout<<((a)*(a))<<endl;
            }
            else
            {
              cout<<((2*b)*(2*b))<<endl;
            }
            
        }
        else
        {
             cout<<((2*a)*(2*a))<<endl;
        }

    }
    return 0;
}