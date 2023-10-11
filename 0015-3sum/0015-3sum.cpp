class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            int f=nums[i];
            int l=i+1;
            int r=n-1;
            while(l<r){
            if(nums[l]+nums[r]==-f){
                 ans.push_back({f,nums[l],nums[r]});
                 while(l<r && nums[l]==nums[l+1])l++;
                 while(r>l && nums[r]==nums[r-1])r--;
                 l++;
                 r--;
            }
            else if(nums[l]+nums[r]>-f){
                r--;
            }
            else{
                l++;
            }
            while(i<n-2 && nums[i]==nums[i+1])i++;
            } 
        }
        return ans;
    }
};