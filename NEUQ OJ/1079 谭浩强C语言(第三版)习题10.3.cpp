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
    int mi,ma,a[10];
    cin>>a[0];
    mi=ma=a[0];
    rep(i,1,9)
    {
        cin>>a[i];
        mi=mi<a[i]?mi:a[i];
        ma=ma>a[i]?ma:a[i];
    }
    rep(i,1,8)
    {
        if(a[i]==mi)
        {
            a[0]=a[0]^a[i];
            a[i]=a[0]^a[i];
            a[0]=a[0]^a[i];
        }
        if(a[i]==ma)
        {
            a[9]=a[9]^a[i];
            a[i]=a[9]^a[i];
            a[9]=a[9]^a[i];
        }
    }
    rep(i,0,9)
    cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
