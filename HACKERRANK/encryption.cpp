//the ceil value has to the coloums
// and the floor value has to be the row

#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
    string encryption(string s) {
        
        //for finding the length also i want to do it in old method
    int length = find_length(s);

    double root = sqrt(length);

    int row = floor(root);

    int col = ceil(root);

    char arr[row][col];

    int k = 0;

    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            arr[i][j] = s[k];
            k++;
        } 
    }

    // now print the matrix

    for(int i=0;i<row;i++) {
        for(int j=0;k<col;j++) {
            cout << arr[i][j] << endl;
        }
    }

    }

    int find_length(string s) {
        int length = 0;

        for(int i=0;i<s.length();i++) {
            length++;
        }
        return length;
    }
};


int main() {
    string s;

    cin >> s;
 //ccreate an object
    Solution sol;

    int ans = sol.encryption(s);

    cout << ans << endl;
    return 0;
}