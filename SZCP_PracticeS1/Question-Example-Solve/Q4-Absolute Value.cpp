#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    if(a==0&&b==0)
        cout << 0 << endl;
    else if(a==0&&b>=0)
        cout << b-1 << endl;
    else if(a<=0&&b==0)
        cout << abs(a+1) << endl;
    else if(a>0&&b>0)
        cout << b-a << endl;
    else if(a<0&&b<0)
        cout << abs(a-(b-1)) << endl;
    else if(a<0&&b>0) {
            if(abs(a)>abs(b))
                cout <<abs(b+1) << endl;
            else if(abs(a)<abs(b))
                cout <<abs(a+1) << endl;
    }
    return 0;
}