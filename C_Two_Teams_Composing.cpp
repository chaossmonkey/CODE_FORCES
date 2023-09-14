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
    cin >> tc;
    while (tc--)
    {
      int size;cin>>size;

      vector<int> vec(size);
      for(int i=0;i<size;i++)
      {
        cin>>vec[i];
      }


      if(size==1)
      {
        cout<<0<<endl;
      }
      else
    {

      
      map<int, int> frequencyMap;
         for(int element : vec)  
    {
        // If the element is already in the map, increment its frequency
        if(frequencyMap.find(element) != frequencyMap.end()) {
            frequencyMap[element]++;
        }
        else {
            frequencyMap[element] = 1; // Initialize frequency to 1 for a new element
        }
    }
    int maxFrequency = 0;
    int mostFrequentKey = -1;

    for(auto const& pair : frequencyMap) {
        if(pair.second > maxFrequency) {
            maxFrequency = pair.second;
            mostFrequentKey = pair.first;
        }
    }

    int uniqueElementFreq=frequencyMap.size()-1;

    if(uniqueElementFreq>=maxFrequency)
    {
         cout<<maxFrequency<<endl;
        
    }
    else
    {
        if(maxFrequency-uniqueElementFreq>1)
        {
            cout<<uniqueElementFreq+1<<endl;
        }
        else
        {
            cout<<uniqueElementFreq<<endl;
        }
    }

  }
    }
    
    return 0;
}


