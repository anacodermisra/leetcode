class Solution {
public:
    long long timereq(vector<int>& piles, int k){
        long long timereq=0;
        for(int i=0;i<piles.size();i++){
            timereq+=(piles[i]+k-1)/k;
        }
        return timereq;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(timereq(piles,mid)<=h){
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