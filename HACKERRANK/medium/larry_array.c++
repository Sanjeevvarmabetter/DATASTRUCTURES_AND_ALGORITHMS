/* 

this is for each subarray

for rotating 3 elements
 temp = arr[i]
 arr[i] = arr[i+1]
 arr[i+1] = arr[i+2]
 arr[i+2] = temp


*/


#include<bits/stdc++.h>


using namespace std;

class Solution {
    public:
    string larry_array(vector<int>arr) {
    int n = arr.size();

    for(int i=0;i<n-2;i++) {
        for(int j=i;j<n-2;j++) {
            while(!(arr[j]<arr[j+1] && arr[j+1] < arr[j+2])) {
                
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = arr[j+2];
                arr[j+2] = temp;
            }
        }


   }

        for(int i=0;i<n;i++) {
            if(arr[i]>arr[i+1]) 
            {
                return "NO";
            }
        }
        return "YES";
    }

    string optimized_larry_array(vector<int>arr) {
        int n = arr.size();
        int counter = 0;
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                    if(arr[i] > arr[j]) {
                        counter++;
                    }
            }
        }
        if(counter%2==0) {
            return "YES";
        }
        else {
            return "NO";
        }
    }

};




int main() {
    int n;
    cin >> n;
    vector<int> arr;
    arr.resize(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    Solution sol;
    string ans = sol.larry_array(arr);
    cout << ans << endl;
    return 0;
}

