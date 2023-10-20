class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1=INT_MAX;
        int num2=INT_MAX;
        int cnt1=0;
        int cnt2=0;
        for(auto i:nums){
            if(i==num1){
                cnt1++;
            }
            else if(i==num2){
                cnt2++;
            }
            else if(!cnt1){
                num1=i;
                cnt1=1;
            }
            else if(!cnt2){
                num2=i;
                cnt2=1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;
        cnt2=0;
        for(auto i:nums){
            if(i==num1)cnt1++;
            if(i==num2)cnt2++;
        }
        vector<int>ans;
        if(cnt1>(nums.size())/3)ans.push_back(num1);
        if(cnt2>(nums.size())/3)ans.push_back(num2);
        return ans;
    }
};