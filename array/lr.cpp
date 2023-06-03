//we need to rotate an arrat

#include<iostream>
using namespace std;

int rot(int arr[],int n) {
    int temp = arr[0];
    for(int i=0;i<n-1;i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;

}
int drot(int arr[],int d,int n) {
    for(int i=0;i<d;i++) {
        rot(arr,n);
    }
}

void printarray(int arr[],int size) {
    for(int i =0;i<size;i++) {
        cout << arr[i] << '\n';
    }
}

int main() {
    int arr[] = {3,5,7,74,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    // rot(arr,n);
    int d = 3;
    drot(arr,d,n);
    printarray(arr,n);
    return 0;
}