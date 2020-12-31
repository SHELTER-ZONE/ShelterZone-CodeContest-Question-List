#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int b;
    cin >> b;
    do {
        cout << fixed << setprecision(7) << ((float)b*log2(b)) / 2 << '\n';
        cin >> b;
    } while(b != -1);
    return 0;
}