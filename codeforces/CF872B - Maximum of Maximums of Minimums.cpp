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
    int n,k,t;
    cin>>n>>k;
    if(k==1)
    {
        set<int>s;
        while(n--)
        {
            cin>>t;
            s.insert(t);
        }
        cout<<*s.begin()<<endl;
    }
    else if(k>2)
    {
        set<int>s;
        while(n--)
        {
            cin>>t;
            s.insert(t);
        }
        set<int>::iterator it=s.end();
        it--;
        cout<<*it<<endl;
    }
    else
    {
        int num[100005];
        rep(i,0,n-1)
            cin>>num[i];
        cout<<max(num[0],num[n-1])<<endl;
    }
    return 0;
}
