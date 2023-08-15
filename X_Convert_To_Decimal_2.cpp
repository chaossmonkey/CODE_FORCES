#include<bits/stdc++.h>

using namespace std;
// Given a number N. Print the result of doing the following operation on N:
// Convert N to its binary representation.
// Count number of ones in the above binary representation.
// Print the equivalent decimal number that its binary representation has only the 
// number of ones that were counted above.
// For example: (10)decimal = (1010)binary has 2 ones "11", after converting "11" 
// to decimal number it will become 3.

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        
        vector<int> gh;

        while(N!=0)
        {
            gh.push_back(N%2);
            N=N/2;
        }
        int count=0;

        for(auto x:gh)
        {
            if(x==1)
            {
                count++;
            }
        }
        int multiple=1;
        int res=1;
        while(count>1)
        {
        res=res+(2*multiple);
        multiple=multiple*2;
        count--;
        }
       cout<<res<<endl;
    }
    return 0;
}

