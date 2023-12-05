#include <bits/stdc++.h>

using namespace std;

int n, cnt = 0;
long long k;
vector<int> v;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
        cin>>n>>k;
        for(int i = 0; i < n; i++){
            int num; cin>>num;
            v.push_back(num);
        }
        for(int i = 0; i < v.size(); i++){
            for(int j = i+1; j < v.size(); j++){
                if(v[i]+v[j] == k) cnt++;
            }
        }
        cout<<cnt;
    
        // 여기에 코드를 작성해주세요.
    return 0;
}