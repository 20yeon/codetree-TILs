#include <iostream>

using namespace std;

int N;

void p_square(int n){
    int k = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            k = (k%10 == 0) ? 1 : k%10;
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}
int main() {
    cin >> N;

    // Please write your code here.
    p_square(N);
    return 0;
}