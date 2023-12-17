#include <bits/stdc++.h>
using namespace std;

int n;
deque<int> dq;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>n;
    for(int i = 1; i <= n ; i++) dq.push_back(i);

    while(dq.size() != 1){
        dq.pop_front(); dq.push_back(dq.front()); dq.pop_front();
    }cout<<dq.front();
    return 0;
}