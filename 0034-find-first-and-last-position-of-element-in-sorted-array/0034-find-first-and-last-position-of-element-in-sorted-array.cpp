class Solution {
public:
    int lowerBound(vector<int> &nums, int x){
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=x){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int upperBound(vector<int> &nums, int x){
        int n=nums.size();
        int ans=n;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>x){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int x) {
        int n=nums.size();
       int lb= lowerBound(nums, x);
       int ub= upperBound(nums, x)-1;
       if(lb ==n || nums[lb]!=x  ) return {-1,-1};
              

       
       
       return {lb,ub};
    }
};