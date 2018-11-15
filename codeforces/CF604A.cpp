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

int x[6],m[6],w[6],hs,hu;
int ans;
int main()
{
    quickio;
    x[1]=500,x[2]=1000,x[3]=1500,x[4]=2000,x[5]=2500;
    ans=0;
    rep(i,1,5)
        cin>>m[i];
    rep(i,1,5)
        cin>>w[i];
    cin>>hs>>hu;
    rep(i,1,5)
        ans+=max(3*x[i]/10,(250-m[i])*x[i]/250-50*w[i]);
    ans-=50*hu;
    ans+=100*hs;
    cout<<ans<<endl;
    return 0;
}