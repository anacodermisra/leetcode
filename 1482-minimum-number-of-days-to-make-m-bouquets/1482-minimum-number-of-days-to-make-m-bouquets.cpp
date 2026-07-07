class Solution {
public:
    bool possibleBouquet(vector<int>& bloomDay, int m, int k, int mid){
        int n=bloomDay.size();
         int count=0;
        int bouquet=0;
        for(int i=0;i<n;i++){
          
            if(bloomDay[i]<=mid){
                count++;      
                if(count==k){
                    bouquet++;
                    count=0;
             }
            }
            else{
                count=0;
        }  
 }
            if (bouquet>=m) return true;
         return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int ans=0;
        if ((1LL)*m*k>n) return -1;
        int low= *min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid=(low+high)/2;
            if(possibleBouquet( bloomDay, m, k, mid)){
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