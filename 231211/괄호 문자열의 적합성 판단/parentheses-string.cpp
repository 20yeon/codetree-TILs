#include <bits/stdc++.h>

using namespace std;

string str;
stack<char> st;

int main() {
    cin>>str;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == '(') st.push('(');
        else {
            if(!st.empty()) st.pop();
            else {
                cout<<"No"; return 0;
            }
        }
    }
    if(st.empty())cout<<"Yes";
    else cout<<"No";
    return 0;
}