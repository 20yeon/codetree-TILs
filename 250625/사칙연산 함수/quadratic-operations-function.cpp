#include <iostream>

using namespace std;

int a;
int c;
char o;
void solve(int a, int b, char c){
    if(c == '+') cout<<a<<" + "<<b<<" = "<<a+b;
    else if(c == '*') cout<<a<<" * "<<b<<" = "<<a*b;
    else if(c == '/') cout<<a<<" / "<<b<<" = "<<(int)a/b;
    else if(c == '-') cout<<a<<" - "<<b<<" = "<<a-b;
    else cout<<"false";
}
int main() {
    cin >> a >> o >> c;
    solve(a,c,o);
    // Please write your code here.

    return 0;
}