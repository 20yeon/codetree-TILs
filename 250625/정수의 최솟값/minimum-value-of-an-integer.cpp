#include <iostream>

using namespace std;

int a, b, c;
int find_min(int a, int b, int c){
    if(a < b && a < c) return a;
    if(b < a && b < c) return b;
    if(c < a && c < b) return c;
}
int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    cout<<find_min(a,b,c);
    return 0;
}