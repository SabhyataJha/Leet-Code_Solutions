class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {


        int i = m - 1;         // Last element of valid nums1
        int j = n - 1;         // Last element of nums2
        int k = m + n - 1;     // End of nums1 total space

        // Compare elements from the back and place the larger one at k
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If there are remaining elements in nums2, copy them over
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
        
    }
};