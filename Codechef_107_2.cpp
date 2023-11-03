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





int main(){

    int tt = scd();

    while(tt--) {

        int n = scd(), m = scd();

        vector<vector<int>> G(2 * n + 1);

        while(m--) {

            int u = scd(), v = scd();

            // G[u].push_back(v);

            // G[v].push_back(u);

            // G[u + n].push_back(v + n);

            // G[v + n].push_back(u + n);

            G[u].push_back(v + n);

            G[v].push_back(u + n);

            G[u + n].push_back(v);

            G[v + n].push_back(u);

        }

        vector<int> dis(2 * n + 1, -1);

        queue<int> Q;

        Q.push(1);

        dis[1] = 0;

        while(!Q.empty()) {

            int u = Q.front();

            Q.pop();

            for(auto v : G[u]) {

                if(dis[v] == -1) {

                    dis[v] = dis[u] + 1;

                    Q.push(v);

                }

            }

        }

        int ans = -1;

        int mnEvenDis = *max_element(dis.begin() + 1, dis.begin() + n + 1);

        if(count(dis.begin() + 1, dis.begin() + n + 1, -1) == 0) {

            ans = mnEvenDis;

        }

        int mnOddDis = *max_element(dis.begin() + n + 1, dis.end());

        if(count(dis.begin() + n + 1, dis.end(), -1) == 0) {

            ans = min(ans, mnOddDis);

        }

        prdL(ans);

    }

    return 0;

}
