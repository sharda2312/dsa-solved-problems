#include<iostream>
using namespace std;

int main(){
    int order=3;
    int arr[order][order];

    // taking input the matrix.
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            cin>>arr[i][j];
        }
    }

    // tranpose the matrix.
    for (int i = 0; i < order; i++)
    {
        for (int j = i+1; j < order; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // printing the tranpose of matrix .
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    cout<<endl; 
        
    }
    
}