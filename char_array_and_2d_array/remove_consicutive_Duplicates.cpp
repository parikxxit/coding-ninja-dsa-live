/*
For a given string(str), remove all the consecutive duplicate characters.
Example:
Input String: "aaaa"
Expected Output: "a"

Input String: "aabbbcc"
Expected Output: "abc"
*/
#include<bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
    int n = 0;
    for(int i = 0; input[i] != '\0'; i++) n++;
    char ans[n];
    ans[0] = input[0];
    int cnt = 1;
    for(int i = 1; i < n; i++) {
        if(input[i-1] != input[i]) {
            ans[cnt] = input[i];
            cnt++;
        }
    }
    ans[cnt] = '\0';
    for(int i = 0; ans[i] != '\0'; i++) {
        input[i] = ans[i];
    }
    input[cnt] = '\0';
}

int main() {
    char input[1000]; cin >> input;
    removeConsecutiveDuplicates(input);
    cout << input;
}