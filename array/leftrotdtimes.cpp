// //in this solution we are implementing the letrot function and we 
// // are calling d numbners of times
// #include<iostream>
// using namespace std;

// int letrot(int arr[],int n) {
//     for(int i=0;i<n-1;i++) {
//         arr[i] = arr[i+1];
//     }
// }


// int dletrot(int arr[],int d,int n) {
//     for(int i=0;i<d;i++) {
//         letrot(arr,n);
//     }
// }

// // int printarray(int arr[],int size) {
// //     for(int i=0;i<size-1;i++) {
// //         cout << arr[i] << "\n";
// //    }
// // }

// int main() {
//     int arr[] = {2,3,5,6,78};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int d = 3;
//     dletrot(arr,d,n);
//     // cout << printarray(arr,n) << "\n";

  

//     return 0;

// }
//we can rotate the array as many times as we can 
//[3,4,5,6,7] -> [4,5,6,7,3]


//now we are doing left right the first element will be shifted to temp

#include<iostream>
using namespace std;

int leftrot(int arr[],int n) {
    int temp = arr[0];
    for(int i = 0; i < n-1 ; i++) {
            arr[i-1] = arr[i];
    }
    arr[n - 1] = temp;
}

int l(int arr[],int d,int n) {
    for(int i=0;i<d;i++) {
        leftrot(arr,n);
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
    // leftrot(arr,n);
    int d = 3;
    l(arr,d,n);
    cout << printarray(arr,n) << endl;
    return 0;
}