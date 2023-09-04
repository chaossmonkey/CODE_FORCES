#include <iostream>

bool containsOnly47(long long n) {

    if(n==0)
    {
        return false;
    }
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    long long number;
    std::cin >> number;

    if (containsOnly47(number)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
