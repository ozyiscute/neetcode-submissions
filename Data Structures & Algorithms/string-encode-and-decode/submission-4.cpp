class Solution {
public:

    string encode(vector<string>& strs) {
        string a = "";
        for(int i=0;i<strs.size();i++){
            a = a+strs[i]+"/-0";
        }
        return a;
    }

    vector<string> decode(string s) {
        int j=0;
        for(int i=0;i<s.length();i++){
            if(i+2 < s.length() &&
            s[i]=='/' &&
            s[i+1]=='-' &&
            s[i+2]=='0'){
                j++;
            }
        }
        vector<string> res(j);
        j=0;
        for(int i=0;i<s.length();i++){
            if(i+2 < s.length() &&
            s[i]=='/' &&
            s[i+1]=='-' &&
            s[i+2]=='0'){
                i+=2;
                j++;
            }
            else{
                res[j]+=s[i];
            }
        }
        return res;
    }
};
