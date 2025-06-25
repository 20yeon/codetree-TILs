#include <iostream>

using namespace std;

int a, b;

bool solve_2(int n){
    int temp = 0;
    while(n != 0){
        if(n%10 == 3 || n%10 == 6 || n%10 == 9) return true;
        temp += n%10;
        n /= 10;
    }
    if (temp%3 == 0) return true;
    else return false;
}

void solve(int a, int b){
    int res = 0;
    for(int i = a; i <= b; i++){
        if(solve_2(i)) res++;
    }cout<<res;
}
int main() {
    cin >> a >> b;
    solve(a,b);
    // Please write your code here.

    return 0;
}