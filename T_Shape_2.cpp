#include<bits/stdc++.h>
using namespace std;

//    *
//   ***
//  *****
// *******

int main()
{
    int n;
    cin >> n;
   

    int temp = n;
    int space = n - 1;
    int stars = 1;

    while (temp > 0)
    {
        int sp = space;
        while (sp > 0)
        {
            cout << " ";
            sp--;
        }
        
        space = space - 1;
        
        for (int i = 0; i < stars; i++)
        {
            cout << "*";
        }
        
        stars += 2;
        cout << "" << endl;

        temp--; // Decrement temp to control the number of rows
    }

    return 0;
}
