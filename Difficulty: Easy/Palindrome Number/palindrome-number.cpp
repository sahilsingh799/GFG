class Solution {
  public:
    bool isPalindrome(int n) {
      string s=to_string(n);
      int r=0;
      int l=s.size()-1;
      while(r<l){
          if(s[r]=='-'){
              r++;
              continue;
          }
          if(s[l]=='-'){
              l--;
              continue;
          }if(s[r]!=s[l]) {
              return false;
          }
          r++;
          l--;
      }
      return true;
    }
};