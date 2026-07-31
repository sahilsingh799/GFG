class Solution {
public:
    int minCost(vector<int>& height) {
        int n = height.size();

        vector<int> dp(n, 0);
        dp[0] = 0;

        for (int i = 1; i < n; i++) {
            int one_jump = dp[i - 1] + abs(height[i] - height[i - 1]);

            int two_jump = INT_MAX;
            if (i > 1) {
                two_jump = dp[i - 2] + abs(height[i] - height[i - 2]);
            }

            dp[i] = min(one_jump, two_jump);
        }

        return dp[n - 1];
    }
};