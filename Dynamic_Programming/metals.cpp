#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int min_loss(int n, const vector<int>& metals) {
    vector<vector<int>> dp(n, vector<int>(n, 0));
    vector<vector<int>> sum_mod(n, vector<int>(n, 0));

    // Initialize sum_mod array
    for (int i = 0; i < n; ++i) {
        sum_mod[i][i] = metals[i];
        for (int j = i + 1; j < n; ++j) {
            sum_mod[i][j] = (sum_mod[i][j - 1] + metals[j]) % 100;
        }
    }

    // Fill the dp array
    for (int length = 2; length <= n; ++length) {  // length of subarray
        for (int i = 0; i <= n - length; ++i) {
            int j = i + length - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k < j; ++k) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + sum_mod[i][k] * sum_mod[k + 1][j]);
            }
        }
    }

    return dp[0][n - 1];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> metals(n);
        for (int i = 0; i < n; ++i) {
            cin >> metals[i];
        }
        cout << min_loss(n, metals) << endl;
    }
    return 0;
}

