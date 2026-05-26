class Solution {
public:
vector<int> helper(vector<int> v, int el) {
    vector<int> sorted;
    bool inserted = false;

    for (int i = 0; i < v.size(); i++) {
        if (!inserted && v[i] > el) {
            sorted.push_back(el);
            inserted = true;
        }
        sorted.push_back(v[i]);
    }

    if (!inserted) {
        sorted.push_back(el);
    }

    return sorted;
}
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        if(n==0){
            return v;
        }
        if(n==1){
            v.push_back(nums[0]);
            return v;
        }
        vector<int>ans;
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++){
            ans=helper(ans,nums[i]);
        }
        return ans;
    }
};