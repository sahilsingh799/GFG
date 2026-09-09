class Solution {
    public boolean findPairs(int arr[]) {
        // code here.
        int n=arr.length;
        // int sum=0;
        HashSet<Integer> st = new HashSet<>();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i+1;j<n;j++){
                sum = arr[i]+arr[j];
                if(st.contains(sum)){
                    return true;
                }else{
                    st.add(sum);
                }
            }
        }
        return false;
    }
}