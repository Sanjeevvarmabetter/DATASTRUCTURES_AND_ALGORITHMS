#include <iostream>
#include <vector>
using namespace std;

bool subsetSum(int N, int M, vector<int>& arr) {
    vector<vector<bool>> dp(N+1, vector<bool>(M+1, false));

    // Initializing dp[i][0] to true for all i, as we can always have a subset sum of 0
    for (int i = 0; i <= N; ++i) {
        dp[i][0] = true;
    }

    // Filling the dp table
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            dp[i][j] = dp[i-1][j]; // If we don't include arr[i-1]
            if (j >= arr[i-1]) {
                dp[i][j] = dp[i][j] || dp[i-1][j - arr[i-1]]; // If we include arr[i-1]
            }
        }
    }

    return dp[N][M];
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    if (subsetSum(N, M, arr)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
