class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // code here
    vector<int>v;
        priority_queue<int, vector<int>,greater<int>>pq;
        for(auto x:arr){
            pq.push(x);
            if(pq.size()>k)pq.pop();
        }
        while(!pq.empty()){
            v.push_back(pq.top());
            pq.pop();
        }
        reverse(v.begin(), v.end());
        return v;
    }
};