#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    // Helper function carrying the search boundaries
    int binarySearchRecursive(vector<int>& nums, int low, int high, int target) {
        // 1. BASE CASE 1: Target not found
        if (low > high) {
            // In DAA terms, this is the constant work c when the problem can't be split further
            return -1; 
        }

        // Calculate the middle index
        int mid = low + (high - low) / 2;

        // 2. BASE CASE 2: Target found at mid
        if (nums[mid] == target) {
            return mid;
        }

        // 3. RECURSIVE CALLS: Choose ONLY ONE half (this is why it's T(n/2) + c)
        if (target > nums[mid]) {
            // Search the right half
            return binarySearchRecursive(nums, mid + 1, high, target);
        } else {
            // Search the left half
            return binarySearchRecursive(nums, low, mid - 1, target);
        }
    }

public:
    int search(vector<int>& nums, int target) {
        // Kick off the recursion with the full array boundaries
        return binarySearchRecursive(nums, 0, nums.size() - 1, target);
    }
};