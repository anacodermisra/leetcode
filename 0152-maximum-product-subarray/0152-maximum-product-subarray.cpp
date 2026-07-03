class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curr=0;
        int maxprod=nums[0];
        int minprod=nums[0];
        int ans=nums[0];

        for(int i=1;i<nums.size();i++){
            curr=nums[i];
            if(curr<0)swap(minprod,maxprod);
            maxprod=max(curr,maxprod*curr);
            minprod=min(curr,minprod*curr);

             ans=max(maxprod,ans);
            
        }
        return ans;
    }
};