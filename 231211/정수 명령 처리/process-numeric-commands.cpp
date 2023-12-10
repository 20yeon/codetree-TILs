#include <bits/stdc++.h>

using namespace std;

int n;
stack<int> s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>n;
    for(int i = 0; i < n; i++){
        string str; cin>>str;
        if(str[0] == 'p'){
            if(str[1] == 'o') {
                cout<<s.top()<<endl;
                s.pop();
            }else{
                int num; cin>>num;
                s.push(num);
            }
        }
        else if(str[0] == 's') cout<<s.size()<<endl;
        else cout<<s.empty()<<endl;

    }

    return 0;
}