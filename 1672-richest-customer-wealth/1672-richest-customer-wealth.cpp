class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0; // 1. Variable declaration
        for(const auto& customer: accounts){
            int currentwealth = 0;

            for(int bank: customer){
                currentwealth += bank;
            }

            maxWealth = max(maxWealth, currentwealth); // 2. Used maxWealth here
        }
        return maxWealth; // 3. Returned maxWealth here
    }
};