// reverse number difference



class Solution {
    public:
    int beautiful_days(int i,int j,int k) {
        // 20 -> 02
        int interval1;
        int il = i;
        int temp1;
        while(i<0) {
            int rem = i%10;
            temp1 = temp1*10 + rem;
            i = i/10;
        }

        temp1  = (il - temp1)/k; //this will give the first interval

    
    }
}