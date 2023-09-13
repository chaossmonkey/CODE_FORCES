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

    int arr[5]={1,2,2,3,4};

    int l=0;int r=4;

    int target=2;

    while(l<r)
    {
        int mid=(l+r+1)/2;

        if(arr[mid]<=target) l=mid; 
        if(arr[mid]>target) r=mid-1;

    }
    
     if(arr[l]==target) cout<<l<<endl;\
     return 0;
}



