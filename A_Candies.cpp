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

        int n;
        cin>>n;

        int deno=1;
        int gh=1;

        bool flag=false;
        while(flag==false)
        {
            deno=deno+(pow(2,gh));
            if(n%deno==0)
            {
                flag=true;
                cout<<n/deno<<endl;
                break;
            }
            else
            {
                gh=gh+1;
            }
                        
        }
    }
    return 0;
}