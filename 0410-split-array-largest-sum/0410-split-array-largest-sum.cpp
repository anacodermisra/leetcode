class Solution {
public:
    bool validSubarray(vector<int>& nums, int k,int mid){
        int cnt=0;
        int i=0;
        int sum=0;
        while(i<nums.size()){
            while(i<nums.size() && sum+nums[i]<=mid ){
            sum+=nums[i++];
        }
        sum=0;
        cnt++;
        }
        return cnt<=k;
        return false;
      
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=0;
        for(int i=0;i<nums.size();i++){
            high+=nums[i];
        }
        int ans;
        while(low<=high){
            int mid=(low+high)/2;
            if(validSubarray(nums,k,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};