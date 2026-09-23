#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, k, adv, advScore;
    cin >> n >> k;
    adv = k;
    for (int i = 1; i <= n; i++) {
        int score; cin>>score;
        if (i == k) advScore = score;
        if (i > k && score >= advScore && score != 0) adv++;
        if (i <= k && score == 0) adv--;  
    }
    cout<<adv<<endl;
}