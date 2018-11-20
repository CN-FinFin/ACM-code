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
    int res=0,yy,mm,dd;
    int p=0;
    cin>>yy>>mm>>dd;
    if(yy%400==0||(yy%100!=0&&yy%4==0))
        p=1;
    switch(mm)
    {
        case 12:res+=30;
        case 11:res+=31;
        case 10:res+=30;
        case 9:res+=31;
        case 8:res+=31;
        case 7:res+=30;
        case 6:res+=31;
        case 5:res+=30;
        case 4:res+=31;
        case 3:res+=28+p;
        case 2:res+=31;
        case 1:break;
    }
    res+=dd;
    cout<<res<<endl;
    return 0;
}
