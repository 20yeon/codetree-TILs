#include <iostream>

using namespace std;

int n;

void solve(int n){
    if(n%2 == 0){
        int num = 0;
        while(n != 0){
            num += n%10;
            n/=10;
        }
        if(num%5 == 0) cout<<"Yes";
        else cout<<"No";
    }else cout<<"No";
}
int main() {
    cin >> n;

    // Please write your code here.
    solve(n);
    return 0;
}