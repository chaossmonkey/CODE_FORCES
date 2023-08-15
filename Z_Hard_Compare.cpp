// Exponentiation by Squaring Approach:
// In this approach, the exponent is divided by 2 in each step until it becomes 0. 
//This results in a logarithmic number of steps. 
//The time complexity can be expressed as O(log b) (or O(log d)).

// To illustrate the difference in complexity, consider an example where the exponent b is large, say 1000.
// With the normal multiplication approach, you would need to perform 999 multiplications, resulting in linear time complexity.
// However, with the exponentiation by squaring approach, you would only need around 20 multiplications,
// leading to logarithmic time complexity.
//As the exponent gets larger, the difference in the number of operations
// becomes even more significant.



// #include <bits/stdc++.h>
// using namespace std;

// unsigned long long calculatePower(int base, int power)
// {
//    if (power == 0)
//    {
//       return 1;
//    }
//    unsigned long long temp = calculatePower(base, power / 2);
//    unsigned long long res = temp * temp;

//    if (power % 2 != 0)
//    {
//       res *= base;
//    }

//    return res;
// }

// int main()
// {
//     const double EPSILON = 1e-9; // A small tolerance
//    int a, b, c, d;

//    cin >> a >> b >> c >> d;

//    unsigned long long res1 = calculatePower(a, b);
//    unsigned long long res2 = calculatePower(c, d);

//    if (res1 > res2+EPSILON)
//    {
//       cout << "YES" << endl;
//    }
//    else
//    {
//       cout << "NO" << endl;
//    }

//    return 0;
// }
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b * log(a) - d * log(c) > 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
