#include<bits/stdc++.h>

using namespace std;

/// algo

// first sort the array and check the array with the sorted array,if 
//if the unsorted elements are going to a new arrya

// if the length of the new array is 2 then ok, we can swap it out

// if the length of the new array is greater than 2 then we need to reverse it


/// but even though we swap or reverse the elemenmts we can not sort it





class Solution {
    public:
    void almostSorted(vector<int> arr) {
        int n = arr.size();
        vector<int> s_arr = arr;

        sort(s_arr.begin(),s_arr.end());


                int point = 0;
        for(int i=0;i<n;i++) {
            if(arr[i] != s_arr[i]) {
                    point = 1;
                    break;
            }
        }
    
        if(point == 0) {
        cout << "yes" << endl;
        return;
        }


    // for swapping 


    int left,right;
    left = -1;
    right = -1;

    for(int i=0;i<n;i++) {
        if(arr[i]>arr[i+1]) {
            left = i;
        }
    }


        for(int i=n-1;i>n;i--) {
        if(arr[i]<arr[i+1]) {
            right= i ;
        }
    }


    // swap

        arr[left],arr[right] = arr[right],arr[left];

        if(arr == s_arr) {
            cout << "yes" << endl;
            cout<< "swap" << left+1 << right+1 << endl;
            return;
        }


        //for reverse

    
        while(left<right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }


        if(arr == s_arr) {
            cout << "yes" << endl;
            cout<< "reverse" << left+1 << right + 1 << endl;
            return;
        }


        cout << "no" << endl;



    }
};

int main(){
    int n;
    cin >> n;
    vector<int> arr;

    arr.resize(n);


    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    Solution sol;

    sol.almostSorted(arr);
        
    return 0;


}