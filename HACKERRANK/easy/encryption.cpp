//the ceil value has to the coloums
// and the floor value has to be the row

#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
string encryption(string s) {
        int len = s.length();
        int row = floor(sqrt(len));
        int col = ceil(sqrt(len));
        
        if(row * col < len) {
            row = col;
        }
        
        char arr[row][col];
        int k = 0;
        for(int i=0;i<row;i++) {
            for(int j=0;j<col;j++) {
                arr[i][j] = s[k];
                k++;
            }
        }
        
        string encypted = "";
        
        for(int i=0;i<col;i++) {
            for(int j=0;j<row;j++) {
                if(arr[j][i]!='\0')
                encypted+= arr[j][i];
            }
            encypted += " ";
        }
        return encypted;
}

    // int find_length(string s) {
    //     int length = 0;

    //     for(int i=0;i<s.length();i++) {
    //         length++;
    //     }
    //     return length;
    // }
};


int main() {
    string s;

    cin >> s;
 //ccreate an object
    Solution sol;

    string ans = sol.encryption(s);

    cout << ans << endl;
    return 0;
}

