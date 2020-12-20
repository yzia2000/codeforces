#include <bits/stdc++.h>
#include <ios>
using namespace std;

int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    std::cin >> n;

    while (n--) {
        double t, x;
        std::cin >> t >> x;

        if (t <= 2) {
            std::cout << 1 << "\n";
        } else if (t == 3) {
            cout << 2 << "\n";
        }
        else if (x == 1) {
            std::cout << t - 1 << "\n";
        }
        else {
            std::cout << floor((x + t - 3) / x) + 1 << "\n";
        }

    }
    return 0;
}
