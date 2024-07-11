//[2,3,4,5] -> [5,4,3,2]

//generally for printing an array 
//for(i=0;i<n;i++)

//we can write like this 

//for(i=n-1;i>=0;i--)

#include<iostream>
using namespace std;

int reverse(int arr[],int n) {
    for(int i=n-1;i>=0;i--) {
        cout << arr[i] << "\n";
    }
}
int main() {
    int arr[] = {2,5,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = reverse(arr,n);
    cout << i << "\n";
    return 0;
}
