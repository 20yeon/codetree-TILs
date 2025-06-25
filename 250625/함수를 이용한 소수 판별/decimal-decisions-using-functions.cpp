#include <iostream>

using namespace std;

int a, b;
bool solve_0(int n){
    for(int i = 2; i*i <= n; i++) if(n%i == 0) return false;
    return true;
}
void solve_1(int a, int b){
    int res = 0;
    for(int i = a; i <= b; i++) if(solve_0(i)) res += i;
    cout<<res;
}
int main() {
    cin >> a >> b;
    solve_1(a,b);
    // Please write your code here.

    return 0;
}