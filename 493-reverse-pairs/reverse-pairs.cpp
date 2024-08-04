class Solution {
public:
    long _mergeSort(vector<int>&arr,vector<long>&temp, long left, long right) 
    { 
        long mid, inv_count = 0; 
        if (right > left) 
        { 
            mid = (right + left) / 2; 
            inv_count += _mergeSort(arr, temp, left, mid); 
            inv_count += _mergeSort(arr, temp, mid + 1, right); 
            inv_count += merge(arr, temp, left, mid + 1, right); 
        } 
        return inv_count; 
    } 
    long merge(vector<int>&arr,vector<long>&temp, long left, long mid, long right) 
    { 
        long i, j, k; 
        long inv_count = 0; 
        for(int i=left,j=mid;i<=mid-1;i++){
            while(j<=right&&arr[i]>2LL*arr[j]) j++;
            inv_count  += j-(mid); 
        }
        i = left; 
        j = mid;  
        k = left; 
        while ((i <= mid - 1) && (j <= right)) 
        { 
            if (arr[i] <= arr[j]) 
            { 
                temp[k++] = arr[i++]; 
            } 
            else
            { 
                temp[k++] = arr[j++]; 
            } 
        } 
        while (i <= mid - 1) 
            temp[k++] = arr[i++]; 
        while (j <= right) 
            temp[k++] = arr[j++]; 
        for (i = left; i <= right; i++) 
            arr[i] = temp[i]; 

        return inv_count; 
    } 
    int reversePairs(vector<int>& nums) {
        vector<long>temp(nums.size());
        return _mergeSort(nums,temp,0,nums.size()-1);
    }
};