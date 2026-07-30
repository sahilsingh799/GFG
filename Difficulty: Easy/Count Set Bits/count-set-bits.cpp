class Solution {
  public:
    int setBits(int n) {
        // Code here
        int count=0;
        string s="";
        while(n){
            s=to_string(n%2)+s;
            n/=2;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')
            count++;
        }
        return count;
    }
};