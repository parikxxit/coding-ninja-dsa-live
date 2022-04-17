/*
Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.
Example:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".

The string is compressed only when the repeated character count is more than 1.
*/
#include<bits/stdc++.h>
using namespace std;

string getCompressedString(string &input) {
    string ans;
    for(int i = 0; i < input.size()-1; i++) {
        int rep = 0;
        while(input[i] == input[i+1]) {
            rep++;
            i++;
        }
        if(rep != 0) {
            ans.push_back(input[i]);
            ans.push_back('0' + (rep + 1));
        } else {
            ans.push_back(input[i]);
        }
    }
    if(input[input.size() - 1] != input[input.size()-2]) {
        ans.push_back(input[input.size()-1]);
    }
    return ans;
}

int main() {
    int size = 1e6;
    string str;
    getline(cin, str);
    str = getCompressedString(str);
    cout << str << endl;
}