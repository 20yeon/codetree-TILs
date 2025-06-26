#include <iostream>

using namespace std;

int M, D;

int year[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
void solve(){
    if((M >= 1 && M <= 12) && (D >= 1 && D <= year[M])) cout<<"Yes";
    else cout<<"No";
}
int main() {
    cin >> M >> D;

    // Please write your code here.
    solve();
    return 0;
}