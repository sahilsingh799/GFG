import java.util.Scanner;

class GFG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        // code here
        int count=0;
        if(n==0){System.out.print(0);
    }
        else{
            //if(n==0)System.out.print(0);
            count=n*(n+1)/2;
            System.out.print(count);
            
        }
        // System.out.print(count);
    }
}