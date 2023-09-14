#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;


bool helper(vector<int>& vec)
{
   bool ans=false;


   for(int i=0;i<vec.size();i++)
   {
     for(int j=1;j<vec.size();j++)
     {
         if(vec[i]%2==1 && vec[j]%2==0 && ((vec[j]-vec[i]==1) || (vec[j]-vec[i]==-1)))
         {
               ans=true;
               break;
         }
          if(vec[i]%2==0 && vec[j]%2==1 && ((vec[j]-vec[i]==1) || (vec[j]-vec[i]==-1)))
         {
               ans=true;
               break;
         }
    
     }
   }
   return ans;

}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin>>tc;
    while (tc--)
    {
        int size;cin>>size;

        vector<int> vec(size);

        if(size==1)
        {
            cout<<"NO"<<endl;
        }

        for(int i=0;i<size;i++)
        {
            cin>>vec[i];
        }

        int odd=0;
        int even=0;
        for(int i=0;i<size;i++)
        {
            if(vec[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }

        }

        if(odd%2==0 && even%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(odd%2==1 && even%2==1)
            {
                bool gh=helper(vec);
                if(gh)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }

        
    }
    return 0;
}