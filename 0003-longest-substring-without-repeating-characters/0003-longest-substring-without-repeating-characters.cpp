class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> count (128,0);

        int left=0;
        int maxlen=0;

        for (int right=0; right< s.length(); right++){
            count[s[right]]++;

            while(count[s[right]]> 1){
                count[s[left]]--;
                left++;
            }

            maxlen= max(maxlen, right-left+1);
        }

        return maxlen;



        


        
    }
};