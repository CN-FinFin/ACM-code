#include<bits/stdc++.h>

#define inf 0x3f3f3f3f
#define PB push_back
#define MP make_pair
#define fi first
#define se second
#define lowbit(x) (x&(-x))
#define rep(i, a, b) for(int i = (a); i <= (b); i++)
#define per(i, a, b) for(int i = (a); i >= (b); i--)
#define pr(x) cout << #x << " = " << x << " ";
#define prl(x) cout << #x << " = " << x << endl;
#define ZERO(X) memset((X),0,sizeof(X))
#define ALL(X) X.begin(),X.end()
#define SZ(x) (int)x.size()

using namespace std;

typedef pair<int,int> PI;
typedef pair<pair<int,int>, int> PII;
typedef pair<pair<pair<int,int>, int>, int> PIII;
typedef unsigned long long ull;
typedef long long ll;
typedef long double lb;
#define quickio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
/*      debug("Precalc: %.3f\n", (double)(clock()) / CLOCKS_PER_SEC);
clock_t z = clock();
                solve();
                //debug("Test: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
*/
struct s{
    int a,b;
};
bool cmp(s a,s b)
{
    return a.a<b.a;
}
int main()
{
    //freopen("input.txt","r",stdin);
    quickio;
    int N,M,T;
    s t;
    cin>>N>>M;
    T=N+M;
    vector<s>v;
    rep(i,0,T-1)
    {
        cin>>t.a>>t.b;
        v.push_back(t);
    }
    sort(ALL(v),cmp);
    rep(i,0,T-1)
    cout<<v[i].a<<" "<<v[i].b<<endl;
    return 0;
}
