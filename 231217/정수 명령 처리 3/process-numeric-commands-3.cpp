#include <bits/stdc++.h>
using namespace std;

deque<int> dq;
int n;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;

    for(int i = 0; i < n; i++){
        string oper; cin>>oper; int num;
        if(oper == "push_front"){
            cin>>num; dq.push_front(num);
        }else if(oper == "push_back"){
            cin>>num; dq.push_back(num);
        }else if(oper == "pop_front") {
            cout<<dq.front()<<endl;
            dq.pop_front();
        }else if(oper == "pop_back"){
            cout<<dq.back()<<endl;
            dq.pop_back();
        }else if(oper == "size"){
            cout<<dq.size()<<endl;
        }else if(oper == "empty"){
            cout<<dq.empty()<<endl;
        }else if(oper == "front"){
            cout<<dq.front()<<endl;
        }else{
            cout<<dq.back()<<endl;
        }
    }


    return 0;
}