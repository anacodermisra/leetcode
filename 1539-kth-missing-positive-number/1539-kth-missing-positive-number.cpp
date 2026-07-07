class Solution {
public:
    int missingnos(vector<int>& arr,int k,int mid){
        return arr[mid]-(mid+1);
    }
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int low=0;
        int sol;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            int missing=missingnos(arr,k,mid);
            if(missing<k){
                low=mid+1;
               
            }
            else{
                high=mid-1;
            }  
        }
        //return arr[high]+(k-missing[high])
       // arr[high]+k -(arr[high]-(high+1))
       //arr[high]+k-arr[high]+high+1
       //k+high+1
       //k+low
        return low+k;
    }
};