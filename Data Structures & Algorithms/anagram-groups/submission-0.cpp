class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<string>s;
        for(int i=0;i<n;i++){
            s.push_back(strs[i]);
        }
        for(int i=0;i<n;i++){
            sort(s[i].begin(),s[i].end());
        }
        vector<vector<string>>v;
        
        // vector<bool>done(n,false);
        for(int i=0;i<n;i++){
            vector<string>ans;
            if(s[i]!="-1"){
                ans.push_back(strs[i]);
                for(int j=i+1;j<n;j++){
                if(s[j]==s[i]){
                    
                    ans.push_back(strs[j]);
                    s[j]="-1";
                }
            }

            }
            if(!ans.empty()){
            v.push_back(ans);

            }
            
        } 
        return v;       
    }
};
