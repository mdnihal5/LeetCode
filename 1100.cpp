// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1729/C
#include "bits/stdc++.h"
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,lzcnt,mmx,abm,avx,avx2,fma")
#define Md_Nihal ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef unsigned long long ull;
#define endl "\n"
#define int long long
#define Lint int64_t
#define sz(a) (int)a.size()
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vs vector<string>
#define all(x) x.begin(),x.end()
#define rep(i,n) for (int i = 0; i < (n); i++)
#define print(x) (x)?cout<<"YES":cout<<"NO";
const int mod = 1e9 + 7, inf = LONG_LONG_MAX, N = 1e6+7;

template<class T, class V>istream& operator>>(istream &in, pair<T, V> &a) {in >> a.first >> a.second; return in;}
template<class T>istream& operator>>(istream &in, vector<T> &a) {for (auto &i : a) {in >> i;} return in;}
template<class T, class V>ostream& operator<<(ostream &os, pair<T, V> &a) {os << a.first << " " << a.second; return os;}
template<class T>ostream& operator<<(ostream &os, vector<T> &a) {for (auto &i : a) {os << i << " ";} return os;}


#ifndef ONLINE_JUDGE
#include "/home/anonymous/cpp_files/debug2.hpp"
#else
#define debug(x...);
#endif

/*=========================================== SOLUTION ===========================================*/


void __solve() {

    string s; cin >> s;
    int n = sz(s);
    char start = s[0], end = s.back();
    map<char, vector<int>>m;
    for (int i = 1; i < n - 1; i++) {
        if (s[i] >= min(s[0], s[n - 1]) and s[i] <= max(s[0], s[n - 1]))m[s[i]].push_back(i + 1);
    }
    for (auto &i : m) sort(all(i.second), greater<int>());
    int sum = 0;
    vi path;
    path.push_back(1);
    while (m[s[0]].size() > 0) {
        path.push_back(m[s[0]].back());
        m[s[0]].pop_back();
    }
    auto it1 = m.begin();
    auto it2 = m.rbegin();
    char c = s[0];
    if (s[0] > s[n - 1]) {
        for (it2; it2 != m.rend(); it2++) {
            sum += abs((c - 'a') - (it2->first - 'a'));
            c = it2->first;
            while (it2->second.size() > 0) path.push_back(it2->second.back()), it2->second.pop_back();
        }
    } else {
        for (it1; it1 != m.end(); it1++) {
            sum += abs((c - 'a') - (it1->first - 'a'));
            c = it1->first;
            while (it1->second.size() > 0) path.push_back(it1->second.back()), it1->second.pop_back();
        }
    }
    sum += abs((c - 'a') - (s[n - 1] - 'a'));
    while (m[s[n - 1]].size() > 0) {
        path.push_back(m[s[n - 1]].back());
        m[s[n - 1]].pop_back();
    }
    path.push_back(n);
    cout << sum << " " << path.size() << endl << path;

}



/*============================================= MAIN =============================================*/

int32_t  main()
{
    Md_Nihal;
    int testcases = 1;    cin >> testcases;
    for (int i = 1; i <= testcases; ++i, cout << endl) __solve();
}
