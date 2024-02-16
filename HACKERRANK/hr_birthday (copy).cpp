#include<bits/stdc++.h>

using namespace std;

int birtdaycakecandles(vector<int> candles) {
    int maxi = 0;
    int cnt = 0;

    for(int i=0;i<candles.size();i++) {
        if(maxi < candles[i]) {
            cnt = 1;
            maxi = candles[i];
        }
        else if(maxi == candles[i]) {
            cnt++;
        }
    
    }
    return cnt;
}