#include <iostream>
#include <string>

using namespace::std;

void markRaze(string &num) {
    int i = 1;
    if (num.size() % 2 == 0) {
        i = 0;
    } 

    int markProb = 0;
    for (; i < num.size(); i += 2) {
        if (num[i] != '#') {
            markProb = i;
            if (num[i] % 2 == 0) {
                num[i] = '#';
                return;
            }
        }
    }
    std::cout << markProb << std::endl;
    num[markProb] = '#';
}


void markBreach(string &num) {
    int i = 0;
    if (num.size() % 2 == 0) {
        i = 1;
    } 

    int markProb = 0;
    for (; i < num.size(); i += 2) {
        if (num[i] != '#') {
            markProb = i;
            if (num[i] % 2 != 0) {
                num[i] = '#';
                return;
            }
        }
    }

    num[markProb] = '#';
}

bool isDone(string num, char &last) {
    int count = 0;
    for (char ch : num) {
        if (ch != '#') {
            last = ch;
            count++;
            if (count > 1) {
                return false;
            }
        }
    }
    return true;
}

int solve(string num) {
    bool razersTurn = true;
    char last;
    while (!isDone(num, last)) {
        if (razersTurn) {
            markRaze(num);
            std::cout << num << std::endl;
        } else{
            markBreach(num);
            std::cout << num << std::endl;
        }
        razersTurn = !razersTurn;
    }

    if (last % 2 == 0) {
        return 2;
    }
    return 1;
}

int main()
{
    int t, n;
    std::cin >> t;

    while (t--) {
        std::string num;

        std::cin >> n;
        std::cin >> num;

        std::cout << solve(num) << std::endl;;
    }
    return 0;
}
