#include<bits/stdc++.h>
#include<chrono>

using namespace std;
using namespace chrono;

const int MAX = 2e6 + 7;

int n;
double a[MAX];

void init() {
    cin >> n;
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
    }    
}

double cura[MAX];
void Merge(int l, int r) {
    int mid = (l + r) / 2;

    int u = l, v = mid + 1;
    int i = l;
    for (; v <= r; v ++) {
        while (a[u] < a[v] && u <= mid) {
            cura[i ++] = a[u];
            u ++;
        }
        cura[i ++] = a[v];
    }
    for (; u <= mid; u ++) cura[i ++] = a[u];
    for (int i = l; i <= r; i ++) a[i] = cura[i];
}

void MergeSort(int l, int r) {
    if (l >= r) return;
    int mid = (l + r) / 2;
    MergeSort(l, mid);
    MergeSort(mid + 1, r);
    Merge(l, r);
}

void process() {
    MergeSort(1, n);
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
        cout << duration.count() << endl;

        fclose(fp);
    }

    return 0;
}