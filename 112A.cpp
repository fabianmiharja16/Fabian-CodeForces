#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main () {
    string one, two;
    getline(cin, one);
    getline(cin, two);
    transform(one.begin(), one.end(), one.begin(), ::tolower);
    transform(two.begin(), two.end(), two.begin(), ::tolower);
    if (one < two) cout << -1;
    else if (one > two) cout << 1;
    else cout<< 0;
}