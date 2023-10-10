class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxpt=0;
        for(int i=0;i<n;i++){
               if(i>maxpt){
                   return 0;
               }
               maxpt=max(maxpt,nums[i]+i);
            }
            return 1;
        }
};