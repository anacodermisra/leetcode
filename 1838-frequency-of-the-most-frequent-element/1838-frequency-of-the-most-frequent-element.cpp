class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int size= nums.size();
        int left=0;
        int right;
        int freq;
        int ans=0;
       long long int  op;
        long long int sum=0;
        for(right=0;right<size;right++){
            freq=right-left+1;
           
            sum+=nums[right];
             op= 1LL*nums[right]*freq-sum;
            while(op>k){
                sum-=nums[left];
                left++;
                freq=right-left+1;
                op=1LL* nums[right]*freq-sum;
            }
            ans= max(ans,freq);
        }
        return ans;
    }
};