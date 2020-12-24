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

void sort(int *src,int range) {
    for(auto i = 0; i < range - 1; i++) {
        for(auto j = i;j < range - 1; j++) {
            if(src[j+1] < src[j]) {
                int pt = src[j+1];
                src[j+1] = src[j];
                src[j] = pt;
            }
        }
    }
}

int maxsolve(int i, int j) {
    int mm,mi, c=0, ans;
    mi = (i > j) ? i : j;
    mm = (i <= j) ? i : j;
    int * counter = (int *)calloc(((mi - mm)+1),sizeof(int));
    for(int k=mm;k<=mi;k++) {
        retFunc(k);
        counter[c] = count;
        count = 0; c++;
    }
    sort(counter,((mi - mm)+1));
    if((mm - mi+1) % 2)
        ans = counter[((mi - mm)+1) / 2];
    else 
        ans = (counter[((mi - mm)+1) / 2] + counter[(((mi - mm)+1) / 2) - 1]) / 2;
    free(counter);
    return ans;
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
