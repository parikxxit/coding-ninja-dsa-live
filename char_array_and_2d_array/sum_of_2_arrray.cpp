/*
Sum of Two Arrays
Send Feedback
Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M respectively. Both the arrays/lists contain numbers from 0 to 9(i.e. single digit integer is present at every index). The idea here is to represent each array/list as an integer in itself of digits N and M.
You need to find the sum of both the input arrays/list treating them as two integers and put the result in another array/list i.e. output array/list will also contain only single digit at every index.
Note:
The sizes N and M can be different. 

Output array/list(of all 0s) has been provided as a function argument. Its size will always be one more than the size of the bigger array/list. Place 0 at the 0th index if there is no carry. 

No need to print the elements of the output array/list.
Using the function "sumOfTwoArrays", write the solution to the problem and store the answer inside this output array/list. The main code will handle the printing of the output on its own.
*/

#include <iostream>
using namespace std;

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    //Write your code here
    // normalize inputs
    int size = max(size1, size2);
    int *arr1 = new int[size];
    int *arr2 = new int[size];
    if(size1 == size2) {
        for(int i = 0; i < size; i++) {
            arr1[i] = input1[i];
            arr2[i] = input2[i];
        }
    } if(size1 > size2) {
        // adjust 0 in input2
        int adj = size1-size2;
        int cnt = 0;
        for(int i = 0; i < size; i++) {
            if(i < adj) {
                arr2[i] = 0;
            } else {
                arr2[i] = input2[cnt];
                cnt++;
            }
        }
        for(int i = 0; i < size; i++) {
            arr1[i] = input1[i];
        }
    } else if(size2 > size1) {
        // adjust 0 in input1
        int adj = size2-size1;
        int cnt = 0;
        for(int i = 0; i < size; i++) {
            if(i < adj) {
                arr1[i] = 0;
            } else {
                arr1[i] = input2[cnt];
                cnt++;
            }
        }
        for(int i = 0; i < size; i++) {
            arr2[i] = input2[i];
        }
    }
    int carry = 0;
    int *arr = new int[size+1];
    for(int i = size-1; i >= 0; i--) {
        int s = arr1[i] + arr2[i] + carry;
        output[i+1] = s%10;
        carry = s/10;
    }
    output[0] = carry;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size1;
		cin >> size1;

		int *input1 = new int[size1];

		for (int i = 0; i < size1; ++i)
		{
			cin >> input1[i];
		}

		int size2;
		cin >> size2;

		int *input2 = new int[size2];

		for (int i = 0; i < size2; ++i)
		{
			cin >> input2[i];
		}

		int outsize = 1 + max(size1, size2);

		int *output = new int[outsize];

		sumOfTwoArrays(input1, size1, input2, size2, output);

		for (int i = 0; i < outsize; ++i)
		{
			cout << output[i] << " ";
		}

		delete[] input1;
		delete[] input2;
		delete[] output;
		cout << endl;
	}

	return 0;
}