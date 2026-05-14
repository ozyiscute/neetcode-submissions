class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int val = nums[i];
            for(int j=0;j<nums.size();j++){
                if(nums[j]==val&&i!=j){
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

    

