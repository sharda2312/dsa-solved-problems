#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[5] = {5, -8, 6, 8, -10};
    int size = 5;
    int maxEndingHere = 0;  
    int maxSoFar = INT_MIN; 
    int sum2 = 0;

    for (int i = 0; i < size; i++) {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    cout << maxSoFar << endl;
    
    return 0;
}