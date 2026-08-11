class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {

        int n=nums.size();

        for (int i=0; i<n; i+=2){
            for (int j=i; j>=2 && nums[j-2]> nums[j]; j-=2){
                swap(nums[j],nums[j-2]);
            }
        }

        for (int i=1; i<n; i+=2){
            for (int j=i; j>=3 && nums[j-2]< nums[j]; j-=2){
                swap(nums[j], nums[j-2]);
            }
        }

        return nums;

        
    }
};