/* find maximum and minimum value in an array. */
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of you want to create"<<endl;
    cin >>n;
    int arr[n];
    cout << "Enter the elements of array"<<endl;
    for (int i=0;i<n;i++)
    {
       cin >> arr[i];
    }
/* Method one */
    int minNum = INT_MAX;
    int maxNum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minNum)
        {
            minNum=arr[i];
        }
        else if (arr[i] > maxNum)
        {
            maxNum=arr[i];
        }
    }
    cout << "minimum number in the array is "<< minNum<<endl;
    cout << "maximum number in the array is "<< maxNum<<endl;

/* Method two */
for (int i = 0; i < n; i++)
    {
        minNum=min(minNum,arr[i]);
        maxNum=max(maxNum,arr[i]);
    }
    cout << "minimum number in the array is "<< minNum<<endl;
    cout << "maximum number in the array is "<< maxNum<<endl;
}
