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
        int size;
        string s;
        cin>>size>>s;

        unordered_map<char,int> map;

        int flag=1;
        map[s[0]] = 1;
        bool flager=false;
        for(int i=1;i<size;i++)
        {
            if(s[i]==s[i-1])
            {
               flag++;
                   
            }
            else
            {
                flag=0;

               if(map.count(s[i])>0 && flag==0)
                {
                    flager=true;
                    cout<<"NO"<<endl;
                    break;
                }
                else
                {
                    map[s[i]]=1;
                }

            }
        }

        if(flager==false)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}