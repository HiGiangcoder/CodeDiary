#include<bits/stdc++.h>
#include<chrono>

using namespace std;
using namespace chrono;

const int MAX = 1e6 + 7;

int n;
double a[MAX];

void init() {
    cin >> n;
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
    }    
}

void Modify(int x, int m) {
    int u = x * 2;
    int v = x * 2 + 1;

    if (u > m) return;
    if (a[u] < a[v] && v <= m) swap(u, v); // a[u] > a[v]
    if (a[x] < a[u]) {
        swap(a[x], a[u]);
        Modify(u, m);
    }
}

void Add(int x) {
    if (x == 1) return;

    int p = x / 2;
    if (a[p] < a[x]) {
        swap(a[p], a[x]);
        Add(p);
    }
}

void HeapSort() {
    for (int i = 1; i <= n; i ++) {
        Add(i);
    }

    for (int i = n; i >= 1; i --) {
        swap(a[1], a[i]);
        Modify(1, i - 1);
    }
}

void process() {
    HeapSort();
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

        // cout << Check() << ' ';
        cout << duration.count() << " ms" << endl;

        fclose(fp);
    }

    return 0;
}