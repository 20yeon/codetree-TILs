#include <iostream>

using namespace std;

int n, m;

void gcd(int n, int m){
    if(m == 0) cout<<n;
    else gcd(m, n%m);
}

int main() {
    cin >> n >> m;
    if(m > n){
        int temp = n;
        n = m;
        m = temp;
    }
    // Please write your code here.
    gcd(n,m);
    return 0;
}