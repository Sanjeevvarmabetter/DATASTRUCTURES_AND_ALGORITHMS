import java.util.Scanner;

public class josephus {
    public static int w(int n,int k) {
        if(n==1) {
            return 1;

        }
        else {
            return (w(n-1,k)+k-1)%n+1;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();

        int p = w(n,k);

        System.out.println(p);
    }
}

