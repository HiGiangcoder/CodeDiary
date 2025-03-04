#include<bits/stdc++.h>
using namespace std;
const int MAX = 1679616 + 7; // 6^8 + 7
int n;
int a[4][20];

int leftlen(0), rightlen(0);
struct DeltaPoint {
    int a, b, c; // a - b, b - c, c - d
    DeltaPoint(int a = 0, int b = 0, int c = 0) : a(a), b(b), c(c) {}

    DeltaPoint Neg() {
        return DeltaPoint(-a, -b, -c);
    }

    bool operator < (const DeltaPoint &x) const {
        if (a != x.a) return a < x.a;
        if (b != x.b) return b < x.b;
        return c < x.c;
    }
    bool operator == (const DeltaPoint &x) const {
        return a == x.a && b == x.b && c == x.c;
    }
} leftpoint[MAX], rightpoint[MAX];


DeltaPoint ansneed;
bool getans = false;
bool ok = false;

void process(int &d, DeltaPoint point[], int l, int r, DeltaPoint x = DeltaPoint(0, 0, 0)) {
    if (r < l) {
        if (!getans) point[++d] = x;
        if (getans && x == ansneed) {
            ok = true;
        }   
        return;
    }   

    for (int i = 1; i <= 6; i ++) {
        DeltaPoint newx = x;
        string res;

        if (i == 1) { // a b
            newx.a += a[0][r] - a[1][r];
            newx.b += a[1][r];
            res = "AB";
        }
        if (i == 2) { // a c
            newx.a += a[0][r];
            newx.b -= a[2][r];
            newx.c += a[2][r];
            res = "AC";
        }
        if (i == 3) { // a d
            newx.a += a[0][r];
            newx.c -= a[3][r];
            res = "AD";
        }
        if (i == 4) { // b c
            newx.a -= a[1][r];
            newx.b += a[1][r] - a[2][r];
            newx.c == a[2][r];
            res = "BC";
        }
        if (i == 5) { // b d
            newx.a -= a[1][r];
            newx.b += a[1][r];
            newx.c -= a[3][r];
        
            res = "BD";
        }
        if (i == 6) { // c d
            newx.b -= a[2][r];
            newx.c += a[2][r] - a[3][r];
            res = "CD";
        }
        
        process(d, point, l, r - 1, newx);
        if (ok) {
            cout << res << '\n';
            return;
        }
    }
}



int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("keorank.inp", "r", stdin);
    freopen("keorank.out", "w", stdout);

    cin >> n;
    for (int i = 0; i < 4; i ++) {
        for (int j = 1; j <= n; j ++) {
            cin >> a[i][j];
        }
    }

    process(leftlen, leftpoint, 1, n / 2);
    process(rightlen, rightpoint, n / 2 + 1, n);

    set<DeltaPoint> rpoint;

    for (int i = 1; i <= rightlen; i ++) {
        DeltaPoint x = rightpoint[i];
        x = x.Neg();
        rpoint.insert(x);
    }

    bool haveans = false;
    for (int i = 1; i <= leftlen; i ++) {
        if (rpoint.count(leftpoint[i])) {
            ansneed = leftpoint[i];
            haveans = true;
            break;
        }
    }

    if (!haveans) {
        cout << "Imposible" << '\n';
        return 0;
    }

    getans = true;
    ok = false;
    process(leftlen, leftpoint, 1, n / 2);
    
    ansneed = ansneed.Neg();
    ok = false;
    process(rightlen, rightpoint, n / 2 + 1, n);
    
    return 0;
}