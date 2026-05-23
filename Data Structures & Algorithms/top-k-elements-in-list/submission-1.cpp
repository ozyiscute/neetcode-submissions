class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        vector<int> arr1(freq.size());
        vector<int> arr2(freq.size());
        int j=0;
        for(auto i:freq){
            arr1[j]=i.first;
            arr2[j++]=i.second;
        }
        vector<int> ret;
        int r=0;
        for(int i=0;i<k;i++){
            int max=0;
            int index=0;
            for(int x=0;x<j;x++){
                if(arr2[x]>max){
                    max = arr2[x];
                    index = x;
                }
            }
            ret.push_back(arr1[index]);  
            arr2[index]=0;          
        }
        return ret;
    }
};
