#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int s = 1;
    while (s < size) {
        int i = 0;
        while (i < s) {
            if (arr[s] < arr[i]) {
                int k = s;
                int temp = arr[s]; 
                while (k > i) {
                    arr[k] = arr[k - 1];
                    k--;
                }
                arr[i] = temp;
                break;
            }
            i++;
        }
        s++;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
