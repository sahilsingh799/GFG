class Solution {
  public:
    vector<int> reArrange(vector<int>& arr) {
        // code he.re
        int n =arr.size();
        int even=0;
        int odd=1;
        vector<int>ans(n);
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0){
                ans[even]=arr[i];
                even +=2;
        }else{
            ans[odd]=arr[i];
            odd +=2;
            }
        }
        return ans;
    }
};