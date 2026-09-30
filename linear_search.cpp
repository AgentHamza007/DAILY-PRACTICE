#include <iostream>
using namespace std;

void linearSearch(int arr[], int n, int val) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            cout << "Element found at index: " << i << endl;
            return;
        }
    }

    cout << "Element not found" << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int val = 30;

    linearSearch(arr, n, val);

    return 0;
}