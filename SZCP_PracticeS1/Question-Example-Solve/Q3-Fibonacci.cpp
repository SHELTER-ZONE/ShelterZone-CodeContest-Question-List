#include <bits/stdc++.h>
 
using namespace std;
 
int fibonacci (int src) {
    if(src == 0)
        return 0;
    else if(src == 1)
        return 1;
    else {
        int fib_sum1,fib_sum2,fib_sum, ret = 0;
        fib_sum1 = fib_sum2 = 1;
        bool first_add = false;
        while(src-- > 1) {
            if(first_add == false) {
                fib_sum = ret = fib_sum1 + fib_sum2;
                first_add = true;
            }
            else {
                fib_sum = fib_sum1 + fib_sum2;
                ret += fib_sum1;
            }
            fib_sum2 = fib_sum1;
            fib_sum1 = fib_sum;
        }
        return ret;
    }
}
 
int main (void) {
    int n,k,max = 0;
    cin >> n;
    while(n--) {
        cin >> k;
        max = (fibonacci(k) > max) ? fibonacci(k) : max;
    }
    cout << max;
    return 0;
}