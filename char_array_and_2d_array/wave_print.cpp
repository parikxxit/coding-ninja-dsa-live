#include <iostream>
using namespace std;

void wavePrint(int **input, int nRows, int mCols)
{
    //Write your code here
    bool toggle = true;
    for(int i = 0; i < mCols; i++) {
        int a = 0, b = nRows-1;
        if(toggle) {
            for(int j = a; j <= b; j++) {
                cout << input[j][i] << " ";
            }
        } else {
            for(int j = b; j >= a; j--) {
                cout << input[j][i] << " ";
            }
        }
        toggle = !toggle;
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;
		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
	}
}