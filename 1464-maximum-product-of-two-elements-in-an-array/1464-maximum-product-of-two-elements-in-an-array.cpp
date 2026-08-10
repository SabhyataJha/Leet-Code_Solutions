class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n=nums.size();

        for(int i=n-1; i>=0; i--){
            int didswap=0;

            for(int j=0; j<i;j++){
                if (nums[j]>nums[j+1]){
                    swap(nums[j], nums[j+1]);
                    didswap=1;
                }
            }

            if(didswap==0){
                break;
            }
        }


        return (nums[n - 1] - 1) * (nums[n - 2] - 1);

        
        
    }
};