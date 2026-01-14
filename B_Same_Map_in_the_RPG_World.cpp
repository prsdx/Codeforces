#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<char>> A(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }
    vector<vector<char>> B(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> B[i][j];
        }
    }
    int Afre[H]={0};
    int Bfre[H]={0};
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if(A[i][j]=='#')
            Afre[i]++;
            if(B[i][j]=='#')
            Bfre[i]++;
        }
    }
    bool ch=false;
        for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {
            
        }
    }


}