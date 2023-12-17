#include <iostream>
using namespace std;

int n, res = 0;
int map[20][20];

void solve(int y, int x){
    int cnt = 0;
    for(int i = y; i<= y+2; i++){
        for(int j = x; j<=x+2; j++) if(map[i][j]) cnt++;
    }
    res = (res < cnt) ? cnt : res;
}

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cin>>map[i][j];
    }

    for(int i = 0; i <= n-1; i++){
        for(int j = 0; j <= n-1; j++) solve(i,j);
    }
    cout<<res;


    return 0;
}