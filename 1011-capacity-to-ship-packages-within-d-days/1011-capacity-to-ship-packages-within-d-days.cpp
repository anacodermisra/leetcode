class Solution {
public:
    int daysreq(vector<int>& weights, int capacity){
        int n=weights.size();
        int day=0;
        int i=0;
       while(i<n){
        long long shipweight=0;
             while(i<n && weights[i]<=capacity-shipweight){
                shipweight+=weights[i];
               i++;
            }
            day++;
        }
         return day;
        }
       
           
        
    
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        int day;
        for(int i=0;i<n;i++){
            high+=weights[i];
        }
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            day= daysreq(weights,mid);
              
              if(day<=days){  ans=mid;
                high=mid-1;

              }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};