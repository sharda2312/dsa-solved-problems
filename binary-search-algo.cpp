// This is the code in which we take input from user and check weather the number present in the array or not.
// To check weather the number present in the array we use BINARY SEARCH ALOGORITHM.

#include <iostream>
using namespace std;
int binaryS(int arr[],int n,int key) // function creation
{
    int start=0;
    int end=n;
    int mid;
    while (start<=end)
    {
        mid=(start+end)/2;
        if (key==arr[mid])
        {
            cout << mid;
            return mid;
        }
        else if (key<arr[mid])
        {
            end = mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    cout << -1;
    return -1;
}
int main()
{
    int arr[12]={12,13,14,15,16,17,18,19,20,21,22,23};
    int key;
    cout <<"enter key you want to search in the array"<<endl;
    cin >> key; // taking input from user.
    binaryS( arr , 12 , key); // function call
}