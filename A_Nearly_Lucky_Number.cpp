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

    int number;
    cin >> number;

    string s = to_string(number);
    bool flag = true;

    for (auto i : s)
    {
        int val = stoi(string(1, i)); // Convert the character i to a string and then to an integer
        if (val != 4 && val != 7) // Use logical AND (&&) instead of logical OR (||)
        {
            flag = false;
            break;
        }
    }

    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0; // You should return 0 to indicate successful execution
}
