class Solution {
public:
    bool detect_anagram(string s,string t){
        if(s.length()==t.length()){
            int freq[26] = {0};
            for(char c: s){
                freq[c-'a']++;
            }
            for(char c: t){
                freq[c-'a']--;
                if(freq[c-'a']<0){
                    return false;
                }
            }
            return true;
        }
        return false;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> val ;
        int arr[strs.size()];
        for(int i=0;i<strs.size();i++){
            vector<string> sub_string ;
            if(arr[i]==1){
                continue;
            }
            sub_string.push_back(strs[i]);
            arr[i]=1;
            for(int j=i+1;j<strs.size();j++){
                if(detect_anagram(strs[i],strs[j])){
                    sub_string.push_back(strs[j]);
                    arr[j]=1;
                }
            }
            val.push_back(sub_string);
        }
        vector<vector<string>> val1;

        return val;
    }
};
