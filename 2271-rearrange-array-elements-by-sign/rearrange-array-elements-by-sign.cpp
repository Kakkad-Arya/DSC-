class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        
        int posIndex = 0; // Pointer for positive numbers (even indices)
        int negIndex = 1; // Pointer for negative numbers (odd indices)
        
        for (int num : nums) {
            if (num > 0) {
                ans[posIndex] = num;
                posIndex += 2;
            } else {
                ans[negIndex] = num;
                negIndex += 2;
            }
        }
        
        return ans;
    }
};