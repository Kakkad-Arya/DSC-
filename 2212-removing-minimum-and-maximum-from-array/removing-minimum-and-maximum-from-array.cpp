#include <vector>
#include <algorithm>

class Solution {
public:
    int minimumDeletions(std::vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        int mini=0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[maxi]){
                maxi=i;
            }
            if(nums[i]<nums[mini]){
                mini=i;
            }
        }
        int left=std::min(maxi,mini);
        int right=std::max(maxi,mini);
        int removef=right+1;                     
        int removel=n-left;                      
        int removeb=(left+1)+(n-right);     
        return std::min({removeb,removel,removef});
    }
};