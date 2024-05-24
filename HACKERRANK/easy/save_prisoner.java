import java.util.Scanner;

class save_prisoner {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
            // n = 4,m=6,s=2  

            // 2 3 4 1 2 3 
        int n = sc.nextInt(); //4
        int m = sc.nextInt(); //6
        int s = sc.nextInt(); //2


        int ans =  save(n,m,s);

        System.out.println(ans);
    }


    public static int save(int n,int m,int s) {
        if(m<n) {
            return m;
        }
        if (n==s) {
            return n;
        }
        
        int counter = s;

        for(int i=s;i<=m;i++) {
            counter++;
            if(counter > n) {
                counter = 1;
            }
        }
        return counter;
    }


    public static int answer(int n,int m,int s) {
        int ans = (s+m-1) % n;

        if(ans ==0) {
            return n;
        }
    return ans;
    }
}

