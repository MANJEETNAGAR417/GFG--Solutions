class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int i=0;
        int nos=0;
        int xo=0;
        unordered_map<int,int>mpp;
        mpp[0]=1;
        while(i<arr.size()){
            xo^=arr[i];
            if(mpp.find(xo^k)!=mpp.end())nos+=mpp[xo^k];
            mpp[xo]++;
            i++;
        }
        return nos;
        
    }
};