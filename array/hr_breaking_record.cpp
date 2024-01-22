#include<bits/stdc++.h>

using namespace std;

class Solution {

public:
vector<int> Breaking_records(vector<int>scores) {
    int max_score = scores.at(0);
    int min_score = scores.at(0);

    int max_count = 0;
    int min_count = 0;

    for(int i=0;i<scores.size();i++) {
        if(max_score < scores[i]) {
            max_count++;
            max_score = scores[i];
        }
        if(min_score > scores[i]) {
            min_count++;
            min_score = scores[i];
        }

    }

    vector<int> ans;

    ans.push_back(max_count);
    ans.push_back(min_count);


    return ans;
}
};