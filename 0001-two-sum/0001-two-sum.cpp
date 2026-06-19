class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>copy= nums;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int s=0;
        int e=n-1;
      vector<int>ans;
      int a;
      int b;
    
        while(s<e){
            if(nums[s]+nums[e]==target){
               a=s;
               b=e;
               break;
            }
            else if(nums[s]+nums[e]>target){
                e--;
            }
             else if(nums[s]+nums[e]<target){
                s++;
            }

        }
        bool firstfound=false;
        for(int i=0;i<n;i++){
            if(!firstfound && nums[a]==copy[i]){
                ans.push_back(i);
                firstfound=true;
            }
            else if(nums[b]==copy[i]&& b!=a){
                ans.push_back(i);
            }
        }
       return ans;
    }
};