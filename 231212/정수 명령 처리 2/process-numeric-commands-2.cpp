#include <bits/stdc++.h>

using namespace std;

int n;
queue<int> q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>n;
    for(int i = 0; i < n; i++){
        string str; cin>>str;
        if(str[0] == 'p'){
            if(str[1] == 'o'){cout<<q.front()<<endl; q.pop();}
            else{
                int num; cin>>num; q.push(num);
            }
        }else if(str[0] == 'f') cout<<q.front()<<endl;
        else if(str[0] == 's') cout<<q.size()<<endl;
        else cout<<q.empty()<<endl;
    }
    return 0;
}