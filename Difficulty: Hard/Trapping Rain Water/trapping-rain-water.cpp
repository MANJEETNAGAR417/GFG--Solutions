class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        int l=0,r=n-1,ans=0;
        int lmax=arr[l],rmax=arr[r];
        while(l<r){
            lmax=max(arr[l],lmax);
            rmax=max(arr[r],rmax);
            if(lmax<rmax){
                ans+=lmax-arr[l];
                l++;
            }
            else{
                ans+=rmax-arr[r];
                r--;
            }
        }
        return ans;
    }
};