#include <bits/stdc++.h>
using namespace std;

int main () {
    int rowOne, colOne, ans;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int car; cin>>car;
            if (car == 1) {
                rowOne = i;
                colOne = j;
            }
        }
    }
    ans = abs(rowOne - 3) + abs(colOne - 3);
    cout << ans << endl;
}