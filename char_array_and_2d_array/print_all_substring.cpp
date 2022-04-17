/*
For a given input string(str), write a function to print all the possible substrings.
Substring
A substring is a contiguous sequence of characters within a string. 
Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters taken are not contiguous
*/

#include<bits/stdc++.h>
using namespace std;
void printSubstrings(char input[]) {
    for(int i = 0; input[i] != '\0'; i++) {
        for(int j = 0; input[j] != '\0'; j++) {
            bool toggle = false;
            for(int k = i; k <= j; k++) {
                cout << input[k];
                toggle = true;
            }
            if(toggle) cout << endl;
        }
    }
}
int main() {
    char s[1000];
    cin >> s;
    int n = 0;
    printSubstrings(s);
}