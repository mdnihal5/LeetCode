#include <bits/stdc++.h>

#include <stdlib.h>

#include <time.h> 

 

using namespace std;

double EPS = 1e-12;

typedef long long int lld;

typedef pair<lld,lld> PA;

long double tick(){static clock_t oldt; clock_t newt=clock();

    long double diff=1.0L*(newt-oldt)/CLOCKS_PER_SEC; oldt = newt; return diff; }

#define rep(i,a,n) for(long long int i = (a); i <= (n); ++i)

#define repI(i,a,n) for(int i = (a); i <= (n); ++i)

#define repD(i,a,n) for(long long int i = (a); i >= (n); --i)

#define repDI(i,a,n) for(int i = (a); i >= (n); --i)

inline lld sc() { lld a; scanf("%lld", &a); return a; }

inline int scd() { int a; scanf("%d", &a); return a; }

#define prL(a) printf("%lld\n",a)

#define prS(a) printf("%lld ",a)

#define prdL(a) printf("%d\n",a)

#define prdS(a) printf("%d ",a)

#define all(c) (c).begin(), (c).end()

#define sz(a) ((int)a.size())

#ifdef LOCAL_RUN

#define Error(x...) { cout << "(" << #x << ")" << " = ( "; printIt(x); }

#else

#define Error(x...) 42

#endif

template <typename T1> void printIt(T1 t1) { cout << t1 << " )" << endl; }

template <typename T1, typename... T2>

void printIt(T1 t1, T2... t2) { cout << t1 << " , "; printIt(t2...); }

#define popcount __builtin_popcountll



#define lim 300010

#define lim2 200010

// std::ios::sync_with_stdio(false); // Ab :)





lld A[lim];



struct FenwickTree {

    vector<lld> Fen;

    lld n;

    FenwickTree(lld n) : n(n) {

        Fen.resize(n + 1, 0);

    }

    lld ReadFen(lld idx) {

        lld sum = 0;

        while (idx > 0) {

            sum += Fen[idx];

            idx -= (idx & -idx);

        }

        return sum;

    }

 

    void ChangeFen(lld idx, lld val) {

        assert(idx >= 1 && idx <= n);

        while (idx <= n) {

            Fen[idx] += val;

            idx += (idx & -idx);

        }

    }

 

    lld findSum(lld l, lld r) {

        assert(l <= r && l >= 0 && r <= n);

        return ReadFen(r) - ReadFen(l - 1);

    }

 

    lld findKth(lld l, lld r, lld k) {

        lld lo = l, hi = r;

        lld ans = -1;

        while (lo <= hi) {

            lld mid = (lo + hi) >> 1;

            if (findSum(l, mid) >= k) {

                ans = mid;

                hi = mid - 1;

            } else {

                lo = mid + 1;

            }

        }

        return ans;

    }

};



int main(){

    int tt = scd();

    while(tt--) {

        int n = scd();

        vector<vector<int>> G(n + 1);

        vector<int> isRoot(n + 1, 1);

        rep(i, 1, n - 1) {

            int u = scd(), v = scd();

            isRoot[v] = 0;

            G[u].push_back(v);

        }

        int root = -1;

        rep(i, 1, n) {

            if(isRoot[i]) {

                root = i;

                break;

            }

        }

        vector<int> depth(n + 1, 0), subtreeSize(n + 1, 0);

        auto dfs = [&](auto self, int x, int d) -> void {

            depth[x] = d;

            subtreeSize[x] = 1;

            for(auto y : G[x]) {

                self(self, y, d + 1);

                subtreeSize[x] += subtreeSize[y];

            }

        };

        dfs(dfs, root, 1);

        FenwickTree Fen(n + 10);

        repI(i, 1, n) {

            int l = depth[i];

            int r = n - subtreeSize[i] + 1;

            Fen.ChangeFen(l, 1);

            Fen.ChangeFen(r + 1, -1);

        }

        repI(i, 1, n) {

            prdS(Fen.findSum(1, i));

        }

        printf("\n");

    }

    return 0;

}
