/*
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
*/

#include<bits/stdc++.h>
using namespace std;
void reverseStringWordWise(char input[]) {
// Write your code here
    vector<string> s;
    string t;
    int n = 0;
    for(int i = 0; input[i] != '\0'; i++) {
        if(input[i] == ' ') {
            s.push_back(t);
            t.clear();
        } else {
            t.push_back(input[i]);
        }
        n++;
    }
    s.push_back(t);
    int st = 0, ed = s.size() - 1;
    while(st < ed) {
        string temp = s[st];
        s[st] = s[ed];
        s[ed] = temp;
        st++;ed--;
    }
    int cnt = 0;
    for(int i = 0; i < s.size(); i++) {
        for(int j = 0; j < s[i].size(); j++) {
            input[cnt] = s[i][j];
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
    reverseStringWordWise(s);
    cout << s;
}