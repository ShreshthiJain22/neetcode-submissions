class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countOne=0;
        int countZero=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                countZero++;
            }
            if(nums[i]==1){
                countOne++;
            }
        }
        for(int i=0;i<n;i++){
            if(countZero==0 && countOne==0){
                nums[i]=2;
            }
            else if(countZero==0){
                nums[i]=1;
                countOne--;
            }
            else{
                nums[i]=0;
                countZero--;
            }
        }

    }
};