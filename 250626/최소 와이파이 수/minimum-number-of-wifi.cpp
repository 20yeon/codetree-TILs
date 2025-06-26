#include <iostream>

using namespace std;

int n, m, res = 0;
int arr[100];

void solve(){
    for(int i = 0; i < n;){
        if(arr[i] == 1){
            res++;
            i+=(2*m+1);
        }else i++;
    }cout<<res;
}
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    solve();
    // Please write your code here.

    return 0;
}