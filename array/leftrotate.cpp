//we can rotate the array as many times as we can 
//[3,4,5,6,7] -> [4,5,6,7,3]


//now we are doing left right the first element will be shifted to temp

#include<iostream>
using namespace std;

int leftrot(int arr[],int n) {

    for(int i = 0; i < n-1 ; i++) {
        arr[i] = arr[i+1];
    }
}

int printarray(int arr[],int size) {
    for(int i=0;i<size;i++) {
        cout << arr[i] << "\n";
    }
}

int main() {
    int arr[] = {3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    leftrot(arr,n);
    cout << printarray(arr,n) << endl;
    return 0;
}