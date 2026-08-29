class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for (int num : nums) {
            // When count hits 0, pick a new candidate
            if (count == 0) {
                candidate = num;
            }
            
            // Increment if match, decrement if mismatch
            count += (num == candidate) ? 1 : -1;
        }

        return candidate;
    }
};