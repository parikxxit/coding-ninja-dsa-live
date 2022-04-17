/*
Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.
Input Format :
First and only line of input contains M and N, followed by M * N space separated integers representing the elements in the 2D array.
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<vector<int>> &v) {
    int row = v.size();
    int col = v[0].size();

    vector<int> ans;
    for(int i = 0; i < col; i++) {
        int sum = 0;
        for(int j = 0; j < row; j++) {
            sum += v[j][i];
        }
        ans.push_back(sum);
    }
    return ans;
}
int main(){
    int row, col; 
    cin >> row >> col;
    vector<vector<int>> v(row, vector<int>(col, 0));
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++) cin >> v[i][j];
    vector<int> ans = solve(v);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " "; 
}