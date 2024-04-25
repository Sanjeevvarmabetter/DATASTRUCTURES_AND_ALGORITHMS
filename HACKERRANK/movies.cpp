// reverse number difference



class Solution {
    public:
    int reverse(int i) {
        // 20 -> 02

        int temp;
        int l=i;
        while(i<0) {
            int rev = i%10;
            temp = temp *10 + rev;
            i = i/10;
        }

        return temp;
    }


        int bruteforce_beautiful_days(int i,int j,int k) {

            int counter = 0;
            for(int m = i;m<=j;m++) {
                int rev = reverse(m) - m;
                if(rev%2==0) {
                    counter++;
                }
            }

            return counter;
        }
};