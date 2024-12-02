//https://www.hackerrank.com/contests/product-batch-day-71/challenges/extremely-dangerous-virus

/*
given two growth factors and a time for which we need to computte the expected number of cells


for each milliseconds the virus will grow by a foctoru of either g1 ot g2


E(t) = 0.5 * g1 * E(t-1) + 0.5 * g2 * E(t-1);

E(t) = (g1+g2/2) * E(t-1);




*/
 
int MOD = 10**9 + 7;
 int mod_exp(base,exp,mod) {
    int result = 1;
    while(exp > 0) {
        if(exp%2 ==1) {
            result =  (result * base) % mod;
        } 
        base = (base*base) % mod;

        exp /= 2;
            }
 }

int expected_res(int g1,int g2,int t) {
    int G = (g1+g2) / 2;

    return mod_exp(G,t,10**9+7)
}