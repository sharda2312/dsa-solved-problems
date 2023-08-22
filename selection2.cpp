// sorting the elements of array using selction sort.
#include <iostream>
using namespace std;
int main(){
    int arr[12]={99,78,87,15,16,72,19,18,23,10,45,23};
    for (int i = 0; i < 12; i++)
    {
        for (int j = i+1; j < 12; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

// printing the sorted array.
    for ( int a = 0; a < 12; a++)
    {
        cout << arr[a]<<" ";
    }
return 0;
}