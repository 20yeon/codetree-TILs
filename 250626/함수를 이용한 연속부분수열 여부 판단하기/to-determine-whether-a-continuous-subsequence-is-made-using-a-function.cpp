#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool solve(){
    bool flag = false;
    for(int i = 0; i <= n1 - n2; i++){
        for(int j = 0; j < n2; j++){
            if(a[i+j] == b[j]) flag = true;
            else {
                flag = false;
                break;
            }
        }
        if(flag == true) return true;
        else continue;
    }
    return false;
}
int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    // Please write your code here.
    if (solve()) cout<<"Yes";
    else cout<<"No";
    return 0;
}