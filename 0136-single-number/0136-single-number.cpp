class Solution {
    public:
    int singleNumber(vector<int>& nums){
        sort (nums.begin(), nums.end()); //sort the numbers

        int left=0; //initialize left pointer
        int right=1; //initialize right pointer

        while(right<nums.size()){ //if this condition is true i.e. right value is less than the size of array then proceed << 
            if(nums[left]!=nums[right]){ // compare left and right indx of array nums[]
                return nums[left]; //return left idx value if they are not equal
            }

            left+=2; //increment left pointer
            right+=2; // increment right  pointer
        }

        return nums[left]; // return the final array

    }



        
        
    
};