class Solution {
    public static int gcd(int a, int b) {
        // code here
         int reminder=0;
     while(b!=0){
         reminder=a%b;
         a=b;
         b=reminder;
     }
     return a;
    }
}
