class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0;
        int cnt2=0;
        int el1=0;
        int el2=0;
        vector<int>result;
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(cnt1==0 && nums[i]!=el2){
                el1=nums[i];
                cnt1=1;
            }
            else if(cnt2==0 && nums[i]!=el1){
                el2=nums[i];
                cnt2=1;
            }
            else if(nums[i]==el1){
                cnt1++;
            }
            else if(nums[i]==el2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        int freq1=0;
        int freq2=0;
        for(int j=0;j<n;j++){
            if(nums[j]==el1){
                freq1++;
            }
            else if(nums[j]==el2){
                freq2++;
            }
        }
        if (freq1>n/3){
            result.push_back(el1);
        }
        if (freq2>n/3){
            result.push_back(el2);
        }
        return result;
    }
};