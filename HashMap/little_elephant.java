import java.util.HashMap;
import java.util.Scanner;

public class little_elephant {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        int arr[] = new int[n];

        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        for(int i = 0; i < m; i++) {
            int l = sc.nextInt();
            int r = sc.nextInt();
            System.out.println(littleelephant(n, arr, l, r));
        }
    }

    public static int littleelephant(int n, int arr[], int l, int r) {
        HashMap<Integer, Integer> h = new HashMap<>();

        // Now we need to push the elements into the hashmap
        for(int i = l - 1; i < r; i++) {
            h.put(arr[i], h.getOrDefault(arr[i], 0) + 1);
        }

        int counter = 0;

        for(int i : h.keySet()) {
            if(h.get(i) == i) {
                counter++;
            }
        }
        return counter;
    }
}
