class Solution {
public:
    int trap(vector<int>& height) {

        int l=0, r=height.size()-1; //iniialize left=0 and right= size of array-1
        int maxL=0, maxR=0, water=0; // initialize maxL and maxR and water as =0 at initial stage

        while(l<r){ // ifcondition is true that is left<right then;
            maxL=max(maxL,height[l]); //max of L= maxL and height of l
            maxR=max(maxR, height[r]); //max of R= maxR and height of r

            water+=(maxL<maxR)? maxL-height[l++]: maxR-height[r--];  //now for water, if l<r, then maxL-height and increment l++ and for maxR-height and decrement r--;
        }

        return water;  //return the final amount of water that is trapped.
        
    }
};