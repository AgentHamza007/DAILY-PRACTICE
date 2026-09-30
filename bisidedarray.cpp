#include<iostream>
using namespace std;


// void populate(int arr[],int n){
//     int j=0;
//     for(int i=0; i < n; i = i + 2){
//         arr[n-1-j] = i+2;
//         arr[j] = i+1;
//         j++;
//     }
// }
void populate(int arr[], int n) {
    int j = 0;
    for (int i = 0; i < n; i += 2) {
        arr[j] = i + 1;
        if (i + 2 <= n) {
            arr[n - 1 - j] = i + 2;
        }
        j++;
    }
}

int main(){
    int n=10;
    int arr[n];

    populate(arr,n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}