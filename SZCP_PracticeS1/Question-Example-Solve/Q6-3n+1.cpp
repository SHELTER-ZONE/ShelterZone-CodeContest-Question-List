#include <bits/stdc++.h>

int count = 0;

int retFunc(int src) {
    count++;
    if(src == 1)
        return 0;
    else if((src % 2) == 0)
        return retFunc(src / 2);
    else
        return retFunc((3*src) + 1);
}

int maxsolve(int i, int j) {
    int max = 0; 
    int mm,mi;
    mi = (i > j) ? i : j;
    mm = (i <= j) ? i : j;
    for(int k=mm;k<=mi;k++) {
        retFunc(k);
        if(count > max)
            max = count;
        count = 0;
    }
    return max;
}

int main (void) {
    int i,j;
    std::cin >> i >> j;
    do {
        std::cout << i << ' ' << j << ' ' << maxsolve(i,j) << '\n';
        std::cin >> i >> j; 
    } while(i > 0 && i > 0);
    return 0;
}
