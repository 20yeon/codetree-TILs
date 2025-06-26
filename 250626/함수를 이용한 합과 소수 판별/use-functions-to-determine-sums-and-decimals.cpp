#include <iostream>

using namespace std;

int a, b, cnt = 0;

bool check_1(int n){
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0) return false;
    }return true;
}

bool check_2(int n){
    int temp = 0;
    while(n != 0){
        temp += n%10;
        n /= 10;
    }
    if(temp%2 == 0) return true;
    else return false;
}

void solve(int a, int b){
    for(int i = a; i <= b; i++){
        if(check_1(i) && check_2(i)) cnt++;
    }cout<<cnt;
}
int main() {
    cin >> a >> b;

    // Please write your code here.
    solve(a,b);
    return 0;
}