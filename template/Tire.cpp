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

const int MAXN=100000+5;
int root=1,tot=1,a[MAXN];
struct Tire{
    int ch[2],size;
}node[MAXN];
void Push(int n)
{
    int t=root,a; //t代表每个节点的标号
    node[t].size++;
    per(i,30,0)
    {
        a=(n>>i)&1;
        if(!node[t].ch[a])node[t].ch[a]=++tot; //如果这个节点没有孩子节点就创建它
        t=node[t].ch[a]; //将指针后移
        node[t].size++;
        //printf("[t=%d,a=%d]\n",t,a);
    }
}
void Pop(int n)
{
    int t=root,a; //t代表每个节点的标号
    node[t].size--;
    per(i,30,0)
    {
        a=(n>>i)&1;
        t=node[t].ch[a]; //将指针后移
        node[t].size--;
        //printf("[t=%d,a=%d]\n",t,a);
    }
}
int Find(int x)
{
    int o=root;
    for(int k=30;k>=0;k--)
    {
        int c;
        if(x&(1<<k)) c=1;
        else c=0;
        if(c==1)
        {
            if(node[o].ch[0]&&node[node[o].ch[0]].size)
                o=node[o].ch[0];
            else
                o=node[o].ch[1],x^=(1<<k);
        }
        else
        {
            if(node[o].ch[1]&&node[node[o].ch[1]].size)
                o=node[o].ch[1],x^=(1<<k);
            else
                o=node[o].ch[0];
        }
    }
    return x;
}
int T,num;
int main()
{
    quickio;
    cin>>T;
    while(T--)
    {
        cin>>num;
        rep(i,1,num)
        {
            cin>>a[i];
            Push(a[i]);
        }
        int ans=-1;
        rep(i,1,num)
        {
            Pop(a[i]);
            rep(j,i+1,num)
            {
                Pop(a[j]);
                ans=max(ans,Find(a[i]+a[j]));
                Push(a[j]);
            }
            Push(a[i]);
        }
        cout<<ans<<endl;
        rep(i,1,tot)
        node[i].ch[0]=0,node[i].ch[1]=0,node[i].size=0;
        tot=1;
    }
    return 0;
}