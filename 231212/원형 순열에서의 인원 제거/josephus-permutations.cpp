#include <bits/stdc++.h>

using namespace std;

int n,k;
queue<int> circle_q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>n>>k;
    for(int i = 1; i <= n; i++) circle_q.push(i);
    while(circle_q.size()){
        for(int i = 0; i < k-1; i++){
            circle_q.push(circle_q.front()); circle_q.pop();
        }
        cout<<circle_q.front()<<" ";
        circle_q.pop();
    }
    return 0;
}