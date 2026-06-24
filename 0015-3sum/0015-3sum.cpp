class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        int target;
       vector<vector<int>>trio;
        for(int i=0;i<n;i++){
        int  s=i+1;
        int e=n-1;
         if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            } 
            while(s<e){
            target=-(nums[i]);
            if (target==nums[s]+nums[e]){
               trio.push_back({nums[i], nums[s], nums[e]});
                s++;
                e--;
                while(s < e && nums[s] == nums[s-1])
                s++;

                while(s < e && nums[e] == nums[e+1])
                e--;
            }
            else if(target>nums[s]+nums[e]){
                s++;
            }
            else{
                e--;
            }
        
            
            }
            }
        
          return trio;
    }
};