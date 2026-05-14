// class Solution {
// public:
//     bool hasDuplicate(vector<int>& nums) {
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[j]==nums[i]&&i!=j){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }

// };

    
#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for(int x : nums) {
            if(s.count(x)) {
                return true;
            }
            s.insert(x);
        }
        return false;
    }
};

