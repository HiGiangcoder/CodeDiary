#include<bits/stdc++.h>
using namespace std;
using ii = pair<int, int>;
#define BIT(n) (1 << (n))
#define GETBIT(mask, i) (((mask) >> (i)) & 1)

const int MAX = 21;
const int MOD = 1e9 + 7;

int n, k, p, q;
vector<int> a[MAX];
vector<int> adj[MAX];

int dp[BIT(MAX)][MAX];

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("magicka.inp", "r", stdin);
    freopen("magicka.out", "w", stdout);

    cin >> n >> k >> p >> q;
    for (int i = 1; i <= p; i ++) {
        int u, v; cin >> u >> v;
        if (u > v) swap(u, v);  

        a[v].push_back(u);
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= q; i ++) {
        int u, v; cin >> u >> v;
        int id = i + n;
        
        for (int x : adj[u]) a[id].push_back(x);
        for (int x : adj[v]) a[id].push_back(x);
        
        if (u > v) swap(u, v);
        a[v].push_back(u);
    }
    n += q;

    dp[0][0] = 1;

    for (int u = 1; u <= n; u ++) {
       for (int mask = BIT(u - 1); mask < BIT(u); mask ++) {
            if (GETBIT(mask, u)) break;
            
            bool ok = true;
            for (int v : a[u]) if (GETBIT(mask, v - 1)) {  
                ok = false;
                break;
            }
            if (!ok) continue;

            for (int d = 1; d <= k; d ++) {
                for (int old_d = 0; old_d < d; old_d ++) {
                    (dp[mask][d] += dp[mask ^ BIT(u - 1)][old_d]) %= MOD;
               }
            }
        }
    }

    int ans(0);
    for (int mask = 1; mask < BIT(n); mask ++) (ans += dp[mask][k]) %= MOD;
    cout << ans;
}