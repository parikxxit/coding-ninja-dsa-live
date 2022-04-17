/*
For a given a string(str), find and return the highest occurring character.
*/
#include<bits/stdc++.h>
using namespace std;

char highestOccurringChar(char input[]) {
    // Write your code here
    int freq[26] = {0};
    for(int i = 0; input[i] != '\0'; i++) {
        freq[input[i] - 'a']++;
    }
    char ans;
    int maxFreq = 0;
    for(int i = 0; input[i] != '\0'; i++) {
        if(freq[input[i] - 'a'] > maxFreq) {
            ans = input[i];
            maxFreq = freq[input[i] - 'a'];
        }
    }
    return ans;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}