
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single =0;
        if(nums.size()==1){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                i++;
            }
            else{
                single= nums[i];
            }
        }
        return single;
    }
};