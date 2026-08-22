class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currentSum = 0;

        // 1. Sum the first window of size k
        for (int i = 0; i < k; i++) {
            currentSum += nums[i];
        }

        double maxSum = currentSum;

        // 2. Slide the window across the remaining array
        for (int i = k; i < nums.size(); i++) {
            currentSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, currentSum);
        }

        // 3. Return the maximum average
        return maxSum / k;
    }
};