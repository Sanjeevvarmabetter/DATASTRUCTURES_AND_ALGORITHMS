import java.util.HashMap;
import java.util.Scanner;

public class pdf_viewer {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[26];
        for(int i=0;i<26;i++) {
            arr[i] = sc.nextInt();
        }

        sc.nextLine();


        String s = sc.nextLine();

        HashMap<Character,Integer> hm = new HashMap<Character,Integer>();

        //now insert the elements  into the hashmap
        int i = 0;
        for(char ch = 'a';ch <='z';ch++) {
             //now push the char and int into the hashmap
             
             hm.put(ch,arr[i]);
             i++;
        }

        //and also we need to find the max element and multiply withe the length of the string

        int max = 0;
        for(int j=0;j<s.length();j++) {
            //check value of our input string
            int value = hm.get(s.charAt(j));
            if(max<value) {
                max = value;
            }
        }
        int ans = max * s.length();

        System.out.println(ans);
    }
}
