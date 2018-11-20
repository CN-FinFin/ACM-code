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
#define lson l,mid,rt<<1
#define rson mid+1,r,rt<<1|1
using namespace std;
typedef pair<int,int> PI;
typedef pair<pair<int,int>, int> PII;
typedef pair<pair<pair<int,int>, int>, int> PIII;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define quickio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

string s,ss;
int main()
{
    cin>>s;
    cin>>ss;
    int ans=0,pos=s.find(ss,0);
    while(pos!=-1)
    {
        ans++;
        pos=s.find(ss,pos+ss.length());
    }
    cout<<ans<<endl;
    return 0;
}