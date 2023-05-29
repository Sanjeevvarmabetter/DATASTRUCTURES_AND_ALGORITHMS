//in this problem we are going to print out the largest number in the array
//example [3,2,5,6,7] -> 7

//solution
//

#include<iostream>
using namespace std;

int largerst(int arr[],int n) {
    int max = 0;
    for(int i=0;i<n;i++) {
        for(int j=1;j<n;j++) {
            if(arr[j]>arr[i]) {
                max = arr[j];
            }
        }
    }
    return max;
}


int main() {
    int arr[] = {3,9,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << largerst(arr,n) << endl;
    return 0;
}