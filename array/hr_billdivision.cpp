#include<bits/stdc++.h>

using namespace std;

class Solution {

    public:

    void  bonAppetit(vector<int> bill,int k,int b) {
        //this is the initial wrong not optimized for large number of test cases
        int sum = 0;
        int b_actual;
        for(int i = 0;i<bill.size();i++) {
            if(bill[k] != bill[i]) {
                sum = sum + bill[i];   //14
                b_actual = sum/2;     // 14/2 = 7
            }
        }
        if(b_actual == b) {
            cout << "Bon Appetit" << endl;
        }

        else {
            int l = b - b_actual;
            cout << l << endl;
        }
    }


    void correct_bonappetit(vector<int> bill,int k, int b) {
        int sum = 0;
        for(int  i=0;i<bill.size();i++) {
            if(i != k) {
                sum  = sum + bill[i];

            }
        }
        int b_actual = sum / 2;

        if(b > b_actual) {
            cout << b-b_actual << endl;
        }

        else {
            cout << "Bon Appetit" << endl;
        }

    }
};