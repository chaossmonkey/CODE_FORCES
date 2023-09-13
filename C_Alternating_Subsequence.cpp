#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;


pair<int, int> findPositiveMax(vector<int>& nums, int startIndex) {
    int maxPositive = INT_MIN;
    int endIndex = startIndex;

    while (endIndex < nums.size() && nums[endIndex] >= 0) {
        if (nums[endIndex] > maxPositive) {
            maxPositive = nums[endIndex];
        }
        endIndex++;
    }

    return make_pair(endIndex - 1, maxPositive);
}
pair<int, int> findNegativeMax(vector<int>& nums, int startIndex) {
    int maxPositive = INT_MIN;
    int endIndex = startIndex;

    while (endIndex < nums.size() && nums[endIndex] < 0) {
        if (nums[endIndex] > maxPositive) {
            maxPositive = nums[endIndex];
        }
        endIndex++;
    }

    return make_pair(endIndex - 1, maxPositive);
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

        for(int i=0;i<size;i++)
        {
            cin>>vec[i];
        }
      
      int index=0;
      int flag=0;
      int sum=0;
      while(index<=size-1)
      {
         if(vec[index]>=0)
         {
             flag=0;
             pair<int,int> pir=findPositiveMax(vec,index);
             sum+=pir.second;
             index=pir.first+1;
             flag=1;

         }
         else
         {
             flag=1;
            pair<int,int> pir=findNegativeMax(vec,index);
            sum+=pir.second;
            index=pir.first+1;
            flag=1;
         }
      }
      cout<<sum<<endl;
    }
    return 0;
}