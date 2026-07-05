class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int n=nums.size();
        int high=n-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(nums[mid]==target) return mid;

            //left sorted
            if(nums[mid]>=nums[low]){
                //if target is in left side
                if(target>=nums[low]&& target<nums[mid]){
                    high=mid-1;
                }
                //target in right side
                else{
                    low=mid+1;
                }
            }
            //right side sorted
            else{
                if(target>nums[mid]&& target<=nums[high]){
                    low=mid+1;
                }
                //target in right side
                else{
                   high=mid-1;
                }
            }
        }
        return -1;
    }
};