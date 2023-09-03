#include<iostream>
using namespace std;

int main(){
    int mrows=3, ncolumns=3;
    int arr[mrows][ncolumns];

// taking input the 2d array.
    for (int i = 0; i < mrows; i++)
    {
        for (int j = 0; j < ncolumns; j++)
        {
            cin>>arr[i][j];
        }
        
    }

// spiral traversal.
    int rowStart=0, rowEnd=mrows-1, columnStart=0, columnEnd=ncolumns-1;
    while (rowStart<=rowEnd && columnStart<=columnEnd )
    {
        // for rowStart
        for (int col = columnStart; col <= columnEnd; col++)
        {
            cout<<arr[rowStart][col]<<' ';
        }
        rowStart++;

        // for columnEnd
        for (int row = rowStart; row <= rowEnd; row++)
        {
            cout<<arr[row][columnEnd]<<' ';
        }

        // for rowEnd
        columnEnd--;
        for (int col = columnEnd; col >= columnStart; col--)
        {
            cout<<arr[rowEnd][col]<<' ';
        }

        // for columnStart
        rowEnd--;
        for (int row = rowEnd; row >= rowStart; row--)
        {
            cout<<arr[row][columnStart]<<' ';
        }
        columnStart++;       
    }
}