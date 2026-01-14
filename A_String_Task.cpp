#include <bits/stdc++.h>
using namespace std;

void answertoProb() {
    string s;
    cin >> s; // or getline(cin, s) if spaces exist
    string n = "";
    for (char c : s) {
        char lc = tolower(c);
        if (lc=='a'||lc=='e'||lc=='i'||lc=='o'||lc=='u') continue;
        n += '.';
        n += lc;
    }
    cout << n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    answertoProb();
    return 0;
}
