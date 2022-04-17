/*
For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. That is, you need to print in the order followed for every iteration:
a. First row(left to right)
b. Last column(top to bottom)
c. Last row(right to left)
d. First column(bottom to top)
 Mind that every element will be printed only once.
*/

#include <bits/stdc++.h>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    int startCol=0,endCol=nCols-1,startRow=0,endRow=nRows-1;
    vector<int> v;
    while(startCol<=endCol and startRow<=endRow){
            //StartRow
            for(int col=startRow;col<=endCol;col++) v.push_back(input[startRow][col]);
            //EndCol
            for(int row=startRow+1;row<=endRow;row++) v.push_back(input[row][endCol]);
            //EndRow
            for(int col=endCol-1;col>=startCol;col--) {
                if(startRow==endRow) break;
                v.push_back(input[endRow][col]); }
            //StartCol
            for(int row=endRow-1;row>=startRow+1;row--) {
                if(startCol==endCol) break;
                v.push_back(input[row][startCol]); } 
            //update to point inner spiral
            startRow++;
            endRow--;
            startCol++;
            endCol--;
	}
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}