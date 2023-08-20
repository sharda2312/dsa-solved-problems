#include <iostream>
using namespace std;

int swap(int arr[],int n)
    {
        int first=0,second=1;
        for(;second<n;second+=2)
            {
                swap(arr[first],arr[second]);
                first+=2;
            }
            return arr[n];
    }
void print(int arr[],int n)
    {
        
        for(int i=0;i<n;i++)
            {
                cout << arr[i]<<" ";
            }
        cout <<endl;
    }

int main() {
    int arr[5]={5,6,9,8,7};
    int brr[6]={1,2,3,4,5,8};
    swap(arr,5);
    swap(brr,6);
    print(arr,5);
    print(brr,6);
}
