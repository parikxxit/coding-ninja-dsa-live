/*
Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to print the sentence such that each word in the sentence is reversed.
Example:
Input Sentence: "Hello, I am Aadil!"
The expected output will print, ",olleH I ma !lidaA".
*/

#include<bits/stdc++.h>
using namespace std;
void reverseEachWord(char input[]) {
    // Write your code here
    vector<string> v;
    string t;
    for(int i = 0; input[i] != '\0'; i++) {
        if(input[i] == ' ') {
            v.push_back(t);
            t.clear();
        } else {
            t.push_back(input[i]);
        }
    }
    v.push_back(t);
    for(int i = 0; i < v.size(); i++) {
        int st = 0, ed = v[i].size()-1;
        while(st < ed) {
            char t = v[i][st];
            v[i][st] = v[i][ed];
            v[i][ed] = t;
            st++;
            ed--;
        }
    }
    int cnt = 0;
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[i].size(); j++) {
            input[cnt] = v[i][j];
            cnt++;
        }
        input[cnt] = ' ';
        cnt++;
    }
    input[cnt-1] = '\0';
}
int main() {
    char s[1000];
    cin.getline(s, 1000);
    cout << s << endl;
    reverseEachWord(s);
    cout << s;
}