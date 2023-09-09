#include<bits/stdc++.h>
using namespace std;

     void printPermutations(string str,int si,int ei)
    {
        
        if(si==ei)
        {
            cout<<str<<endl;
        }
        else
        {
            for(int i=si;i<ei;i++)
            {
                swap(str[si],str[i]);
                printPermutations(str,si+1,ei);
                swap(str[si],str[i]);
            }
        }
        
    }


int main()
{
       string str="abc";
       printPermutations(str,0,str.size()-1);
       return 0;
}

