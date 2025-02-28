// #include "testlib.h"
#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef long double ld;
 
string NAME; /// NAME PROBLEM
int NTEST = 100;
 
mt19937_64 rngll(chrono :: steady_clock :: now().time_since_epoch().count());
ll random(ll l, ll r) {
    // return rnd.next(l, r);
    return uniform_int_distribution<ll>(l, r)(rngll);
}
 
////                                                                      
#define MOD 1000000007
#define fi first
#define se second
#define BIT(n) (1 << (n))
#define GETBIT(mask, n) (((mask) >> (n)) & 1)
#define REP(i, n) for (int i = 0, _n = (n); i < _n; i ++)
 
const int numinf = 0x3f3f3f3f;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
 
template<class T> bool minimize(T &a, const T &b) {
    if (a > b) {a = b; return true;}
    return false;
}
template<class T> bool maximize(T &a, const T &b) {
    if (a < b) {a = b; return true;}
    return false;
}
 
////                                                                      
 
void make_test(int);
 
int _iTest;
ll getRandom(ll l, ll r, int numtest_L = 1, int numtest_R = NTEST, int testMax = 999) {
    if (_iTest < testMax) {
        ll d = __lg(r - l + 1) + 1;
        d = d * (_iTest - numtest_L + 1) / (min(numtest_R, testMax - 1) - numtest_L + 1);
        return random(l, l + min(r - l, 1LL << d));
    }
    else return r;
}
 
void Setup();
 
 
int main(int argc, char *argv[]) {
    Setup();
 
    string NAME_Dir = NAME + "_dir";
    system(("rm -rf " + NAME_Dir).c_str()); /// restore directory 
    system(("mkdir " + NAME_Dir).c_str()); /// make directory
    
    for (int iTest = 1; iTest <= NTEST; iTest ++) {
        _iTest = iTest;
        cerr << "--------------------------------------------\n\n\n";
        cerr << "TESTCASE: " << iTest << endl;
 
        FILE *fp = freopen((NAME + ".inp").c_str(), "w", stdout);
        make_test(iTest);
        fclose(fp);
 
        cerr << "Run file " + NAME + " successfull" << endl;
 
        /// copy file inp&out to folder NAME
        string strNumTest = to_string(iTest);
        while (strNumTest.length() < to_string(NTEST).length()) strNumTest = "0" + strNumTest;
        system(("cp " + NAME + ".inp " + NAME_Dir + "/" + NAME + strNumTest + ".inp").c_str());
    }
    return 0;
}
 
 
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
 
void Setup() {
    NTEST = 10;
    NAME = "dsa";
}
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
 
const int MAX = 2e6 + 7;
int n;
double a[MAX];

void make_test(int iTest) {
    n = 1e6;
    if (random(0, 1)) n += random(0, (int)2e5);
    else n -= random(0, (int)2e5);
    for (int i = 1; i <= n; i ++) {
        a[i] = random(-1e18, 1e18) / 1e9;
    }

    if (iTest == 1) sort(a + 1, a + 1 + n);
    if (iTest == 2) sort(a + 1, a + 1 + n, greater<double>());

    cout << n << '\n';
    for (int i = 1; i <= n; i ++) cout << a[i] << " \n"[i == n];
}