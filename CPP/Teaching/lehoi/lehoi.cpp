#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define fi first
#define se second
const int MAX = 1e3 + 7;

int m, n, q;
int a[MAX][MAX];

ll f[MAX][MAX];

struct Phanso {
    ll a, b;
    Phanso(ll tu = 1, ll mau = 1) {
        a = tu, b = mau;
        
        ll gcd = __gcd(a, b);
        a /= gcd;
        b /= gcd;
    }

    bool operator < (const Phanso &x) const {
        return a * x.b < x.a * b;
    }
};

pair<ll, Phanso> dodai[MAX];

int process(ll t) {
    for (int i = 1; i <= m; i ++) {
        ll d = n * (t / f[i][n]);
        ll cur_t = t % f[i][n];
        int u = upper_bound(f[i] + 1, f[i] + 1 + n, cur_t) - f[i] + 1;
        
        d += u - 1;
        cur_t -= f[i][u - 1];

        dodai[i].fi = d;
        dodai[i].se = Phanso(cur_t, a[i][u]);
    }

    pair<ll, Phanso> dmax = dodai[1];
    int ans = 1;

    for (int i = 2; i <= n; i ++) if (dmax < dodai[i]) {
        dmax = dodai[i];
        ans = i;
    }
    return ans;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);  cout.tie(0);
    freopen("lehoi.inp", "r", stdin);
    freopen("lehoi.out", "w", stdout);

    cin >> m >> n >> q;
    for (int i = 1; i <= m; i ++) {
        for (int j = 1; j <= n; j ++) cin >> a[i][j];
    }

    for (int i = 1; i <= m; i ++) {
        for (int j = 1; j <= n; j ++) f[i][j] = a[i][j] + f[i][j - 1];
    }

    while (q --) {
        ll t; cin >> t;
        cout << process(t) << '\n';
    }
}