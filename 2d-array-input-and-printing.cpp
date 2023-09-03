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

// print the 2d array.
    for (int i = 0; i < mrows; i++)
    {
        for (int j = 0; j < ncolumns; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    cout<<endl; 
        
    }
    
}