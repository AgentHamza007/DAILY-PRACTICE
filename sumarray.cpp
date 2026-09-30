// sum of two arrays

#include <iostream>

using namespace std;

int main(){
    int n, sum;
    cin >> n;
    int input[n];
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    sum=0;
     for(int i=0; i<n; i++){
         sum = sum + input[i];
     }
    cout << sum << endl;
    return 0;
}
