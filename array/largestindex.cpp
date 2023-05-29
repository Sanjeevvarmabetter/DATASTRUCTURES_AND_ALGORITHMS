#include<iostream>
using namespace std;

int largest(int arr[],int n) {
    int max = 0;
    int index = 0;
    for(int i=0;i<n;i++) {
        for(int j=1;j<n;j++) {
            if(arr[j]>arr[i]) {
                max = arr[j];
                index = j;
            }
        }
    }
    return max,index;

}

int main() {
    int arr[] = {2,3,4,2,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << largest(arr,n) << endl;
    return 0;

}