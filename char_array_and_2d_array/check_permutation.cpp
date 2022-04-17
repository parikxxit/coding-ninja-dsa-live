#include<bits/stdc++.h>
using namespace std;
bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int arr[26] = {0};
    for(int i = 0; input1[i] != '\0'; i++) {
        arr[input1[i]-'a']++;
    }
    for(int i = 0; input2[i] != '\0'; i++) {
        arr[input2[i]-'a']--;
    }
    for(int i = 0; i < 26; i++) if(arr[i] != 0) return false;
    return true;
}
int main() {
    char input1[1000]; char input2[1000];
    cin >> input1;
    cin >> input2;
    cout << isPermutation(input1, input2);
}