#include <iostream>

using namespace std;

int n, m;
void p_rect(int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cout<<"*";
        cout<<endl;
    }
}
int main() {
    cin >> n >> m;

    // Please write your code here.
    p_rect(n,m);
    return 0;
}