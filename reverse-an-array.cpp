#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int telement = sizeof(arr) / sizeof(arr[0]);
    int newarr[telement] = {0}; 

    int j = telement - 1;
    for (int i = 0; i < telement; i++) {
        newarr[j] = arr[i];
        j--;
    }
    
    cout << "new array ";
    for (int i = 0; i < telement; i++) {
        cout << newarr[i] << " ";
    }

    return 0;
}
