class Solution {
    public static String reverseString(String s) {
        // code here
        char [] arr=s.toCharArray();
        int n=arr.length;
        int r=0,l=n-1;
        while(r<l){
            char temp=arr[r];
            arr[r]=arr[l];
            arr[l]=temp;
            r++;
            l--;
        }
        return new String(arr);
    }
}