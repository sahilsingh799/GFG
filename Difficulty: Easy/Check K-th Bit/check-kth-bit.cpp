class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        // string s="";
        // while(n>0){
        //     s=to_string(n%2)+s;
        //     n/=2;
        // }
        // if(k>=s.size())return false;
        
        // k = s.size()-k-1;
        // if(s[k]=='1')return true;
        
        //      return false;
        n=n>>k;
        return (n&1);
    }
};


//main h k=length-k-1

// n=n<<k;
// return (n&1);