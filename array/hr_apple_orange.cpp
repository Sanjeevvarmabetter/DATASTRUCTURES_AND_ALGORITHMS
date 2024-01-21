// The red region denotes the house, where  is the start point, and  is the endpoint. The apple tree is to the left of the house, and the orange tree is to its right.
// Assume the trees are located on a single point, where the apple tree is at point , and the orange tree is at point .
// When a fruit falls from its tree, it lands  units of distance from its tree of origin along the -axis. *A negative value of  means the fruit fell  units to the tree's left, and a positive value of  means it falls  units to the tree's right. *

#include<bits/stdc++.h>

using namespace std;

void bruteforce_apples_oranges(int s,int t,int a,int b,vector<int>apples,vector<int>oranges) {
    int a_count = 0;
    int b_count = 0;
    vector<int> a_ans;
    vector<int> b_ans;

    for(int i=0;i<apples.size();i++) {
        apples[i] = apples[i] + a;
        a_ans.push_back(apples[i]);
    }

    for(int i=0;i<a_ans.size();i++) {
        if(a_ans[i] >=s && a_ans[i] <= t) {
            a_count++;
        }
    }

    for(int i=0;i<oranges.size();i++) {
        oranges[i] = oranges[i] + b;
        b_ans.push_back(oranges[i]);
    }

    for(int i=0;i<b_ans.size();i++) {
        if(b_ans[i] >=s && b_ans[i] <= t) {
                b_count++;
        }
    }

    cout << a_count << endl;
    cout << b_count << endl;
}


