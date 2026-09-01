class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Traverse backwards from the last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits; // No carry over needed, we are done!
            }
            // If it is 9, it becomes 0 and the loop carries over to the left
            digits[i] = 0;
        }

        // If all digits were 9 (e.g., [9, 9] -> [0, 0]), we need an extra 1 at the front
        digits.insert(digits.begin(), 1);
        return digits;
    }
};