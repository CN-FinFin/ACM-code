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
int main()
{
    //freopen("input.txt","r",stdin);
    quickio;
    int n,m;
    set<int>ss;
    int l1[10],l2[10];
    cin>>n>>m;
    rep(i,0,n-1)
    {
        cin>>l1[i];
        ss.insert(l1[i]);
    }
    rep(i,0,m-1)
        cin>>l2[i];
    sort(l1,l1+n);
    sort(l2,l2+m);
    int p;
    rep(i,0,m-1)
    {
        p=ss.size();
        ss.insert(l2[i]);
        if(p==ss.size())
        {
            cout<<l2[i]<<endl;
            return 0;
        }
    }
    cout<<min(l1[0],l2[0])<<max(l1[0],l2[0])<<endl;
    return 0;
}
