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

int n,k;
int a[100005];
int t=1;
int main()
{
    cin>>n>>k;
    rep(i,1,n)
    {
        //cout<<i<<" "<<n<<endl;
        cin>>a[i];
        if(i%2==0)
        {
            t*=-1;
        }
        cout<<i<<" ! "<<t<<endl;
        if(a[i]>3&&a[i]%2==0)
            t*=1;
        else if(a[i]>3&&a[i]%2==1)
            t*=-1;
        else if(a[i]==1)
            t*=1;
        else if((a[i]+k)%2==0)
            t*=1;
        else t*=-1;
        cout<<i<<" "<<t<<endl;
    }
    if(t==1)cout<<"Kevin"<<endl;
    else cout<<"Nicky"<<endl;
    return 0;
}