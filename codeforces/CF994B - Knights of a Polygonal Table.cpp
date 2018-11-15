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
int n,k;
struct info
{
    int ID;
    int power;
    int coin;
    ll res;
};
bool operator<(const info& a,const info& b)
{
    if(a.coin!=b.coin)
    return a.coin<b.coin;
    else return a.ID<b.ID;
}
set<info>se;
info rec[100005];
bool id_sort(info a,info b)
{
    return a.ID<b.ID;
}
bool coin_sort(info a,info b)
{
    return a.coin<b.coin;
}
bool power_sort(info a,info b)
{
    return a.power<b.power;
}
int main()
{
    //freopen("input.txt","r",stdin);
    quickio;
    ll ts=0;
    cin>>n>>k;
    rep(i,0,n-1)
    {
        rec[i].ID=i+1;
        cin>>rec[i].power;
    }
    rep(i,0,n-1)
        cin>>rec[i].coin;
    sort(rec,rec+n,power_sort);
    //rep(i,0,n-1)
    //cout<<"**"<<rec[i].power<<" "<<rec[i].coin<<endl;
    rep(i,0,n-1)
    {
        if(se.size()>=k+1)
        {
            //cout<<"-----"<<ts<<" "<<se.begin()->coin<<endl;
            ts=ts-se.begin()->coin;
            se.erase(se.begin());
        }
        se.insert(rec[i]);
        //cout<<"pppp"<<rec[i].coin<<" "<<ts<<"______"<<se.size()<<endl;
        ts+=rec[i].coin;
        //cout<<ts<<endl;
        rec[i].res=ts;
    }
    sort(rec,rec+n,id_sort);
    bool ift=1;
    rep(i,0,n-1)
        if(ift)
        {
            cout<<rec[i].res;
            ift=0;
        }
        else
            cout<<" "<<rec[i].res;
    cout<<endl;
    return 0;
}
