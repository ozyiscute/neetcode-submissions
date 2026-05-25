class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>nums1 = nums;
        vector<int>left = nums;
        vector<int>right = nums;
        int prod =1;
        for(int i=0;i<nums.size();i++){
            left[i]=prod;
            prod*=nums1[i];
        }
        prod =1;
        for(int j=nums.size()-1;j>=0;j--){
            right[j]=prod;
            prod*=nums1[j];
        }
        for(int i=0;i<nums.size();i++){
            nums1[i]=left[i]*right[i];
        }
        return nums1;
    }
};
