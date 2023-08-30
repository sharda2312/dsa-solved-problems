#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[5] = {5, -8, 6, 8, -10};
    int size = 5;
    int maxEndingHere = 0;  
    int maxSoFar = INT_MIN; 
    int sum = 0;
    
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i]=-arr[i];
    }
    for (int i = 0; i < size; i++) {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    cout << sum-maxSoFar << endl;
    cout << sum << endl;
    cout << maxSoFar << endl;
    
    return 0;
}