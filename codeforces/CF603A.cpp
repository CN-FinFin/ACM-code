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

int n;
string s;
int dd=0;
int info[100005][2];
int main()
{
    cin>>n;
    cin>>s;
    info[0][0]=info[0][1]=1;
    rep(i,1,n-1)
    {
        if(s[i]==s[i-1])
            info[i][0]=info[i-1][0]+1,
            info[i][1]=info[i-1][1];
        else
            info[i][0]=1,
            info[i][1]=info[i-1][1]+1;
        if(info[i][0]>=3)dd+=2;
        if(info[i][0]>=2)dd+=1;
    }
    if(dd>=2)
        cout<<info[n-1][1]+2<<endl;
    else if(dd==1)
        cout<<info[n-1][1]+1<<endl;
    else 
        cout<<info[n-1][1]<<endl;
    return 0;
}