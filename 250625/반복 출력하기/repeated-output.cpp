#include <iostream>

using namespace std;

int N;

void p_string(int n){
    for(int i = 0; i < n; i++){
        cout<<"12345^&*()_"<<"\n";
    }
}
int main() {
    cin >> N;

    // Please write your code here.
    p_string(N);
    return 0;
}