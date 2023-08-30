#include <iostream>
using namespace std;

int main(){
    int arr[8] = {8,6,5,1,2,3,4,9};
    int size = 8;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]+arr[j]==14)
            {
                cout<<arr[i]<<" + "<<arr[j]<<" = 14"<<endl;
            }
        }
    }
}