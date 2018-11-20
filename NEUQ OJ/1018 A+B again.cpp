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
stack<char>s;
void pl(string a,string b)
{
    int len=max(a.length(),b.length());
    int A,B,res,j=0;
    reverse(ALL(a));
    reverse(ALL(b));
    rep(i,0,len-1)
    {
        if(i<a.length())A=a[i]-'0';
        else A=0;
        if(i<b.length())B=b[i]-'0';
        else B=0;
        res=A+B+j;
        s.push(res%10+'0');
        j=res>=10?1:0;
    }
    if(j)s.push('1');
    return;
}
int main()
{
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    quickio;
    int T;
    cin>>T;
    string s1,s2;
    rep(i,1,T)
    {
        cin>>s1>>s2;
        pl(s1,s2);
        cout<<"Case "<<i<<":"<<endl;
        cout<<s1<<" + "<<s2<<" = ";
        while(s.top()=='0')
            s.pop();
        while(!s.empty())
        {
            cout<<s.top();
            s.pop();
        }
        cout<<endl;
    }

    return 0;
}
