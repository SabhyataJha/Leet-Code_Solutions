class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // lower_bound finds the first element >= target
        auto first = lower_bound(nums.begin(), nums.end(), target);
        
        // If target doesn't exist, or array is empty
        if (first == nums.end() || *first != target) {
            return {-1, -1};
        }
        
        // upper_bound finds the first element > target
        auto last = upper_bound(nums.begin(), nums.end(), target);
        
        // Subtract 1 from upper_bound to get the last occurrence index
        return { (int)(first - nums.begin()), (int)(last - nums.begin() - 1) };
    }
};