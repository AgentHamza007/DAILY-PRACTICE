#include<iostream>

int pairSumToX(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(input[i] + input[j] == x) 
                pairs++;
		}
	}
	return pairs;
}

int main() {
    // Write C++ code here
int arr[]= {1,2,4,5,6,8,9};
        
    std::cout << pairSumToX(arr,7,10);
    return 0;
}