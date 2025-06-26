#include <iostream>

using namespace std;

int n, res = 0;
int blocks[10000];

void solve(){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cnt += blocks[i];
    }
    for(int i = 0; i < n; i++){
        res += ((blocks[i]-(cnt/n)) < 0) ? 0 : (blocks[i]-(cnt/n));
    }cout<<res;
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> blocks[i];
    }
    solve();
    // Please write your code here.

    return 0;
}