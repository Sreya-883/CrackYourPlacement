class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m-1,j=m+n-1;i>=0;i--,j--){
            nums1[j]=nums1[i];
        }
        int i=n,j=0,k=0;
        //for(int x:nums1) cout<<x<<" ";
        if(m!=0){
        while(i<m+n&&j<n){
            if(nums1[i]<nums2[j]){
                nums1[k++]=nums1[i++];
            }else{
                nums1[k++]=nums2[j++];
            }
        }
        }
        while(k<(m+n)&&j<n){
            nums1[k++]=nums2[j++];
        }
    }
};