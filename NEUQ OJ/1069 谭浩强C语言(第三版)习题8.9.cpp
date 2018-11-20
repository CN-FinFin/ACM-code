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
using namespace std;
int main()
{
    int a,n,b,o;
    a=n=b=o=0;
    string s;
    getline(cin,s);
    int len=s.length();
    rep(i,0,len-1)
    {
        if(s[i]==' ')
            b++;
        else if(s[i]>='0'&&s[i]<='9')
            n++;
        else if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
            a++;
        else o++;
    }
    cout<<a<<" "<<n<<" "<<b<<" "<<o<<" "<<endl;
    return 0;
}
