class Solution {
public:
    long long maximumOr(vector<int>& nums, int k) {
        int n = nums.size();
        
        vector<long long> pref(n, 0);
        vector<long long> suff(n, 0);
        
        // Compute prefix ORs
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] | nums[i - 1];
        }
        
        // Compute suffix ORs
        for (int i = n - 2; i >= 0; i--) {
            suff[i] = suff[i + 1] | nums[i + 1];
        }
        
        long long max_or = 0;
        
        // Try shifting each element by k bits
        for (int i = 0; i < n; i++) {
            long long current_or = pref[i] | ((long long)nums[i] << k) | suff[i];
            max_or = max(max_or, current_or);
        }
        
        return max_or;
    }
};