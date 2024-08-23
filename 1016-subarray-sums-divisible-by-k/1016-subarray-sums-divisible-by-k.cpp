class Solution {
public:
    int subarraysDivByK(vector<int>& a, int k) {
        int n = a.size();
        map<int, int> mp;
        int sum = 0;
        int ans = 0;
        
        // Initialize map to handle the case where the subarray itself is divisible by k
        mp[0] = 1;

        for (int i = 0; i < n; i++) {
            sum += a[i];
            
            // Normalize remainder to be in the range [0, k-1]
            int rem = (sum % k + k) % k;

            // Increment answer by the count of subarrays that had the same remainder
            ans += mp[rem];
            
            // Increment the count of this remainder
            mp[rem]++;
        }
        
        return ans;
    }
};
