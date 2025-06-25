#include <iostream>

using namespace std;

int y;

void solve(int n){
    if(n%4 == 0){
        if(n%100 == 0 && n%400 != 0) cout<<"false";
        else cout<<"true";
    }else cout<<"false";
}
int main() {
    cin >> y;

    // Please write your code here.
    solve(y);
    return 0;
}