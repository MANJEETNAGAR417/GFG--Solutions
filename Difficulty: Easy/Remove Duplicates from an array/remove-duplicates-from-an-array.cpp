class Solution {
  public:
    vector<int> remDuplicate(vector<int>& arr) {
        // code here
        set<int>st;
        for(int i=0;i<arr.size();i++){
            st.insert(arr[i]);
        }
        arr.clear();
        for(auto it: st){
           arr.push_back(it);
        }
        return arr;
        
    }
};