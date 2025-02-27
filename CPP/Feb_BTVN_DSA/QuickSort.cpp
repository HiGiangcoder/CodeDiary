#include<bits/stdc++.h>
#include<chrono>

using namespace std;
using namespace chrono;
using ll = long long;
const int MAX = 1e6 + 7;

mt19937_64 rngll(chrono :: steady_clock :: now().time_since_epoch().count());
ll random(ll l, ll r) {
    return uniform_int_distribution<ll>(l, r)(rngll);
}

int n;
double a[MAX];

void init() {
    cin >> n;
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
    }    
}

int Patition(int l, int r) {
    double pivot = a[random(l, r)];

    int u = l;
    
    for (int i = l; i <= r; i ++) {
        if (a[i] < pivot) {
            swap(a[u], a[i]);
            u ++;
        }
    }

    return u;
}

void QuickSort(int l, int r) {
    if (l >= r) return;
    int mid = Patition(l, r);

    QuickSort(l, mid - 1);
    QuickSort(mid + 1, r);
}

void process() {
    QuickSort(1, n);
}

bool Check() {
    for (int i = 2; i <= n; i ++) if (a[i - 1] > a[i]) return false;
    return true;
}

int main() {
    for (int i = 1; i <= 10; i ++) {
        string num = to_string(i);
        if (num.length() == 1) num = "0" + num;
        string name = "dsa" + num + ".inp";

        FILE *fp = freopen(("dsa_dir/" + name).c_str(), "r", stdin);
        init();

        auto start = high_resolution_clock::now();

        process();

        auto end = high_resolution_clock::now(); 
        auto duration = duration_cast<milliseconds>(end - start); 
        cout << Check() << ' ';
        cout << duration.count() << " ms" << endl;

        fclose(fp);
    }

    return 0;
}