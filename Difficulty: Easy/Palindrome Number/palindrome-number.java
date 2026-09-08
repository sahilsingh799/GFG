class Solution {
    public boolean isPalindrome(int n) {
        // code here
        String s =Integer.toString(n);
        int r=0,l=s.length()-1;
        while(r<l){
            if(s.charAt(r)=='-'){
                r++;
                continue;
            }if(s.charAt(l)=='-'){
                l--;
                continue;
            }if(s.charAt(r)!=s.charAt(l)){
                return false;
            }
            r++;
            l--;
        }
        return true;
    }
}