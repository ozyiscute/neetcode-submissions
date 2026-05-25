class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>nums1 = nums;
        for(int i=0;i<nums.size();i++){
            int prod=1;
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    prod*=nums1[j];
                }
            }
            nums[i]=prod;
        }
        return nums;
    }
};
