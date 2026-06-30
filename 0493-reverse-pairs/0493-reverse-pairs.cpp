class Solution {
public:
 int merge(vector<int>& arr, int low, int mid, int high) {
        // Create temp arrays
        vector<int> temp;
        int left = low, right = mid + 1;
        int count=0;
     

        // Merge two sorted halves
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right])
                temp.push_back(arr[left++]);
            else{
                temp.push_back(arr[right++]);
               
            }
        }

        // Copy remaining elements from left half
        while (left <= mid)
            temp.push_back(arr[left++]);

        // Copy remaining elements from right half
        while (right <= high)
            temp.push_back(arr[right++]);

        // Copy sorted elements back to original array
        for (int i = low; i <= high; i++)
            arr[i] = temp[i - low];

            return count;
    }

    int countPairs(vector<int>& arr, int low,int mid, int high){
        int right= mid+1;
        int cnt=0;
        for(int i=low; i<=mid;i++){
            while(right<=high && arr[i]>2LL*arr[right]){
                right++;
            }
             cnt+=right-(mid+1);
        }

        return cnt;
    }

      int mergeSort(vector<int>& arr, int low, int high) {
        int count=0;
        if (low >= high)
            return 0;

        // Find the middle index
        int mid = (low + high) / 2;

        

        // Recursively sort left half
       count+= mergeSort(arr, low, mid);

        // Recursively sort right half
        count+=mergeSort(arr, mid + 1, high);

        // Merge the two sorted halves
        count += countPairs(arr, low, mid, high);

        count+=merge(arr, low, mid, high);

        return count;
    }


    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);

        
    }
};