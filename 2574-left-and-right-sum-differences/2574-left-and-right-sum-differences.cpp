class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        int left_sum=0;
        int right_sum=0;
        int n=nums.size();
        int total_sum=0;

        vector<int> ans(n);

        for(int i=0; i<n;i++){

            total_sum+=nums[i];
        }

        for(int i=0; i<n; i++){
            int right_sum=total_sum-left_sum-nums[i];
            ans[i]=abs(left_sum-right_sum);
            left_sum+=nums[i];
        }
        return ans;



        
        
    }
};