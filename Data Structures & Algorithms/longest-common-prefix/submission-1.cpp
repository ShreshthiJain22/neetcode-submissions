class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ans="";
        int m=INT_MAX;
        for(int i=0;i<n;i++){
            int x=strs[i].size();
            m=min(m,x);
        }
        for(int i=0;i<m;i++){
            char c=strs[0][i];
            for(int j=0;j<n;j++){
                if(strs[j][i]!=c){
                    return ans;
                }
            }
            ans+=c;
        }
        return ans;
    }
};