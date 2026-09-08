class Solution {
    public int reverseDigits(int n) {
        // Code here
        char[] s=Integer.toString(n).toCharArray();
        int r=0,l=s.length-1;
        while(r<l){
            char temp=s[r];
            s[r]=s[l];
            s[l]=temp;
            r++;
            l--;
        }
        return Integer.valueOf(new String(s));
    }
}