class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        int z=-1;
        for(int i=0;i<n;i++){
            
            if(nums[i]==0){
                z=i;
                break; 
            }
        }
            if(z==-1)return;
            for(int i=z+1;i<n;i++){
                if(nums[i]!=0){
                    swap(nums[i],nums[z]);
                    z++;
                }
            }

        
    }
};