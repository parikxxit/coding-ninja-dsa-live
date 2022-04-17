#include<bits/stdc++.h>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
    int n = 0, cnt = 0;
    for(int i = 0; input[i] != '\n'; i++) n++;
    char ans[n];
    for(int i = 0; i < n; i++) {
        if(input[i] == c) continue;
        ans[cnt] = input[i];
        cnt++;
    }
    input[cnt] = '\0';
    for(int i = 0; i < cnt; i++) {
        input[i] = ans[i];
    }
    input[cnt] = '\0';
}


int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}