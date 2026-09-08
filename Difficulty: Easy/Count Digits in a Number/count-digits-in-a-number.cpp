class Solution {
  public:
    int countDigits(int n) {
        // Code here
        int count =0;
        while(n>0){
           // count=n%10;
            n/=10;
            count++;
        }
        return count;
    }
};