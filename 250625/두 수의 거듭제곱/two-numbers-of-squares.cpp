#include <iostream>
#include <cmath>

using namespace std;

int a, b;

void solve(int a, int b){
    int res = a;
    for(int i = 1; i < b; i++) res *= a;
    cout<<res;
}
int main() {
    cin >> a >> b;
    solve(a,b);
    // Please write your code here.

    return 0;
}