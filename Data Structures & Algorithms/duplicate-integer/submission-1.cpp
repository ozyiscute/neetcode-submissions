class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[j]==nums[i]&&i!=j){
                    return true;
                    count++;
                }
            }
        }
        if(count==0){
            return false;
        }
    }

};

    

