#include <iostream>
using namespace std;
int calculateSum (int arraySize)
{
    // int arraySize;
    // cout << "Enter the size of the array: ";
    // cin >> arraySize;

    int numbers[100];
    cout << "Enter array elements :"<<endl;
    for (int i = 0; i < arraySize; ++i) 
    {
        cin >> numbers[i];
    }
    int sum = 0;
    for (int i = 0; i < arraySize; ++i) {
        sum += numbers[i];
    }
    cout << "Sum of the elements: " << sum << endl;
    return sum;
}
int main() {
    
    calculateSum(5);
    return 0;
}