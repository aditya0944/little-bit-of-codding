#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    // Base case
    if (n == 0 || n == 1)
        return true;

    // If first two elements are not sorted
    if (arr[0] > arr[1])
        return false;

    // Recursively check rest of the array
    return isSorted(arr + 1, n - 1);
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isSorted(arr, n))
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";

    return 0;
}
