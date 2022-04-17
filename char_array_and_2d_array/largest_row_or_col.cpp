/*
For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has the largest sum(sum of all the elements in a row/column) amongst all the rows and columns.
Note :
If there are more than one rows/columns with maximum sum, consider the row/column that comes first. And if ith row and jth column has the same largest sum, consider the ith row as answer.
*/
#include<bits/stdc++.h>
using namespace std;
void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here
    int mrI = -1, mrS = INT_MIN;
    for(int i = 0; i < nRows; i++) {
        int sum = 0;
        for(int j = 0; j < mCols; j++) {
            sum+=input[i][j];
        }
        if(sum > mrS) {
            mrI = i;
            mrS = sum;
        }
    }
    int mcI = -1, mcS = INT_MIN;
    for(int i = 0; i < mCols; i++) {
        int sum = 0;
        for(int j = 0; j < nRows; j++) {
            sum += input[j][i];
        }
        if(sum > mcS) {
            mcS = sum;
            mcI = i;
        }
    }
    if(mrS == INT_MIN || mcS == INT_MIN || mrI == -1 || mcI == -1) {
        cout << "row 0 " << mrS;
    } else if(mcS == mrS) {
        cout << "row " << mrI << " " << mrS;
    } else if(mcS > mrS) {
        cout << "column " << mcI << " " << mcS;
    } else {
        cout << "row " << mrI << " " << mrS;
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    findLargest(arr, n, m);
}