class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        int r=0;
        int sum=0,maxlen=0;
        unordered_map<int,int>mpp;
        while(r<arr.size()){
            sum+=arr[r];
            if(sum==0){
                maxlen=max(maxlen,r+1);
            }
            else if(mpp.find(sum)!=mpp.end()){
                maxlen=max(maxlen,r-mpp[sum]);
            }
            else mpp[sum]=r;
            r++;
        }
        return maxlen;
        
    }
};