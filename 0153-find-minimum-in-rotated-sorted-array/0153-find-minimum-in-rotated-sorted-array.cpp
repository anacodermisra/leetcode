class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int n=nums.size();
        int high=n-1;
        int minimum=INT_MAX;
        while(low<=high){
            int mid= low+(high-low)/2;

            
            //left side sorted 
             if(nums[mid]>=nums[low]){
                //find min element from left and remove left side
               minimum=min(minimum,nums[low]);
               low=mid+1;
             }
            
            //right side sorted
            else{
                //find min element from right and remove the right side
                minimum=min(minimum,nums[mid]);
                high=mid-1;

                
                
            }
        }
        return minimum;
      
    }
};