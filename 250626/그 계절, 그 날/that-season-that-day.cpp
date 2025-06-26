#include <iostream>
using namespace std;

int Y, M, D;
int n_year[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int o_year[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool check_o_year() {
    if(Y % 4 != 0) return false;
    if(Y % 100 != 0) return true;
    if(Y % 400 == 0) return true;
    return false;
}

void solve() {
    if(M < 1 || M > 12) {
        cout << -1;
        return;
    }

    int max_day = check_o_year() ? o_year[M] : n_year[M];
    if(D < 1 || D > max_day) {
        cout << -1;
        return;
    }

    if(M >= 3 && M <= 5) cout << "Spring";
    else if(M >= 6 && M <= 8) cout << "Summer";
    else if(M >= 9 && M <= 11) cout << "Fall";
    else if(M == 12 || M == 1 || M == 2) cout << "Winter";
}

int main() {
    cin >> Y >> M >> D;
    solve();
    return 0;
}
