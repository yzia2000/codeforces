#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    std::cin >> n;
    if (n == 2) {
        std::cout << "NO" << std::endl;
    } else if (n % 2 == 0) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
