#include <iostream>

using namespace std;

int N;

int sum_n(int n){
    int res = 0;
    for(int i = 1; i <= n; i++) res += i;
    return res;
}
int main() {
    cin >> N;

    // Please write your code here.
    cout<<sum_n(N)%10;
    return 0;
}