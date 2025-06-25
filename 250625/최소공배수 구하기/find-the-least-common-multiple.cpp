#include <iostream>

using namespace std;

int n, m;

void ccd(int n1, int n2){
    if(n2 == 0) cout<<n*m/n1;
    else ccd(n2, n1%n2);
}
int main() {
    cin >> n >> m;
    if(n < m){
        int temp = n;
        n = m;
        m = temp;
    }
    // Please write your code here.
    ccd(n,m);
    return 0;
}