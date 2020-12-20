#include <bits/stdc++.h>

using namespace::std;

bool shouldSwap(string str, int start, int curr)
{
    for (int i = start; i < curr; i++) 
        if (str[i] == str[curr])
            return 0;
    return 1;
}
 
void findPermutations(string str, int index, int n, int *numPerms, double *avg)
{
    if (index >= n) {
        //cout << str << '\n';
        *avg = (*numPerms * *avg + stoi(str)) / (double) (*numPerms + 1);
        *numPerms = *numPerms + 1;
        return;
    }
 
    for (int i = index; i < n; i++) {
 
        bool check = shouldSwap(str, index, i);
        if (check) {
            swap(str[index], str[i]);
            findPermutations(str, index + 1, n, numPerms, avg);
            swap(str[index], str[i]);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int test; cin >> test;

    while (test--) {
        string red, blue;
        int n; cin >> n >> red >> blue;
        double redSum = 0, blueSum = 0;
        int numPermsR = 0, numPermsB = 0; 
        findPermutations(red, 0, n, &numPermsR, &redSum);
        findPermutations(blue, 0, n, &numPermsB, &blueSum);
        // cout << redSum << " " << blueSum << '\n';
        if (redSum > blueSum) {
            cout << "RED" << '\n';
        } else if (redSum < blueSum) {
            cout << "BLUE" << '\n';
        } else {
            cout << "EQUAL" << '\n';
        }
    }
    return 0;
}
