#include <bits/stdc++.h>
using namespace std;

int m,n,res = 0;
int graph[100][100];

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>n>>m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cin>>graph[i][j];
    }

    for(int i = 0; i < n; i++){
        int check_x = 1, check_y = 1;
        for(int j = 0; j < n-1; j++){
            if(graph[i][j] == graph[i][j+1]) check_x++;
            else {
                if(check_x >= m) break;
                check_x = 1;
            }
        }
        for(int j = 0; j < n-1; j++){
            if(graph[j][i] == graph[j+1][i]) check_y++;
            else {
                if(check_y >= m)break;
                check_y = 1;
            }
        }
        if(check_x >= m) res++;
        if(check_y >= m) res++;
    }
    cout<<res;

    return 0;
}