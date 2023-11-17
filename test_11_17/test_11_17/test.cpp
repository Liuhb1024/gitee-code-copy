#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cstdio>
#include<vector>


#define pt printf
#define ll long long
#define fr(ii,xx,yy) for(int ii=xx;ii<=yy;ii++)
#define rf(ii,xx,yy) for(int ii=xx;ii>=yy;ii--)
#define eb emplace_back
#define pii pair<int,int>
#define fi first
#define se second
using namespace std;

inline void rd() {};
template<typename T, typename...args>inline void rd(T& x, args&...y) {
    char ch;
    bool f = 0;
    for (ch = getchar(); !isdigit(ch); ch = getchar())if (ch == '-')f = 1;
    for (x = 0; isdigit(ch); ch = getchar())x = (x << 3) + (x << 1) + ch - '0';
    if (f)x = -x;
    rd(y...);
}const int N = 1e6 + 33;
int S, T, n, m, cur[N]; vector<int> eg[N];


struct Edge {
    int res, cap, from, to;
} E[N];
void add(int u, int v, int c) {
    static int tot = 1;
    E[++tot] = { c,c,u,v };
    eg[u].eb(tot);
}
int lvl[N];
bool bfs() {
    static int q[N], hd, tl;
    hd = 0, tl = -1;

    memset(lvl, -1, sizeof lvl);

    q[++tl] = S; lvl[S] = 1;

    fr(i, 1, n)cur[i] = 0;
    while (hd <= tl) {
        int f = q[hd++];
        //  pt("vis%d\n",f);
        for (int& e : eg[f]) {
            int to = E[e].to;

            if (lvl[to] == -1 && (E[e].res)) {
                lvl[to] = lvl[f] + 1;
                q[++tl] = to;
                if (to == T)return true;
            }
        }

    }return false;
}
int dfs(int i, int f) {
    if (i == T)return f;
    int rest = f;
    for (int it = cur[i]; it < eg[i].size(); it++) {
        cur[i] = it;
        Edge& e = E[eg[i][it]];
        int to = e.to;
        if (!(e.res && lvl[to] == lvl[i] + 1))continue;
        int k = dfs(to, min(rest, e.res));
        if (!k)lvl[to] = -1;
        E[eg[i][it]].res -= k;
        E[eg[i][it] ^ 1].res += k;
        rest -= k;
    }
    return f - rest;
}
int main() {
    //    freopen(".in","r",stdin);
    //    freopen(".out","w",stdout);
    rd(n, m, S, T);
    fr(i, 1, m) {
        int a, b, v;
        rd(a, b, v);
        add(a, b, v);
        add(b, a, 0);

    }
    int maxf = 0, f;
    while (bfs()) {
        //      pt("666\n");
        while (f = dfs(S, 2e9))maxf += f;
    }
    pt("%d\n", maxf);
    return 0;
}