class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>m;
        vector<int>v(2,-1);
        for(int i=0;i<n;i++){
            int rem=target-nums[i];
            if(m.find(rem)!=m.end()){
                v[1]=i;
                v[0]=m[rem];
                return v;
            }
            m[nums[i]]=i;
        }
        return v;
    }
};
