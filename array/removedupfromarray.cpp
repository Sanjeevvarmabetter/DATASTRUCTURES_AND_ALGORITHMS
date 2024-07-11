//the problem is we are given an array of intergers 
//the array of integers are [9,4,2,4,4,3]
//we need to remove duplicates from this array
//and after removing bring all the unique elements to the front

//think of a solution and implement it effictivly without code errors
//sample code

//solution
//i am going to implement an hash set
// as for this i am going to send the elements to the 
//hashset and after sending elements to the hash set 
//from out side i am going to check (compare) it the
//elemet is preset outside is present in the hashset 
//we are going to skip it and after checking all the elements 
//we are going to print the hash set


//the key one should know how to implement the hash set
//and the time and space complex is more 


//i am going to use a two pointer approach
#include<iostream>
using namespace std;

int rev(int arr[],int n) {
        if(n==0) {
            cout << "sorry array is empty";
        }
        int j=0;
        for(int i=1;i<n;i++) {
            if(arr[i]!=arr[j]) {
                j++;
                arr[j] = arr[i];
            }
        }
        return j+1;
}

// int printarray(int arr[],int n) {
//     for(int i=0;i<n;i++) {
//         cout << arr[i] << endl;
//     }
// }

int main() {
    int arr[] = {3,4,2,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    rev(arr,n);
    // cout << printarray(arr,n) << endl;
    for(int i=0;i<n-1;i++) {
        cout <<arr[i] << endl;
    }
    return 0;

    
}
