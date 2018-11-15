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
int ax,ay,bx,by,cx,cy,dx,dy;
int AX,AY,BX,BY,CX,CY,DX,DY;
int lx,ly,ux,uy;
int lp,lm,up,um;
int LX,LY,UX,UY;
bool p1(int a,int b)
{
    if(a>=lx&&a<=ux&&b>=ly&&b<=uy)
        return 1;
    return 0;
}
bool p2(int a,int b)
{
    if(a+b>=lp&&a+b<=up&&a-b>=lm&&a-b<=um)
        return 1;
    return 0;
}
int main()
{
    //freopen("input.txt","r",stdin);
    quickio;
    bool judge=0;
    cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
    cin>>AX>>AY>>BX>>BY>>CX>>CY>>DX>>DY;
    lx=min(min(ax,bx),min(cx,dx));
    ux=max(max(ax,bx),max(cx,dx));
    ly=min(min(ay,by),min(cy,dy));
    uy=max(max(ay,by),max(cy,dy));
    LX=min(min(AX,BX),min(CX,DX));
    UX=max(max(AX,BX),max(CX,DX));
    LY=min(min(AY,BY),min(CY,DY));
    UY=max(max(AY,BY),max(CY,DY));
    if(p1(AX,AY))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(p1(BX,BY))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(p1(CX,CY))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(p1(DX,DY))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(p1((UX+LX)/2,(UY+LY)/2))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    lp=min(min(AX+AY,BX+BY),min(CX+CY,DX+DY));
    up=max(max(AX+AY,BX+BY),max(CX+CY,DX+DY));
    lm=min(min(AX-AY,BX-BY),min(CX-CY,DX-DY));
    um=max(max(AX-AY,BX-BY),max(CX-CY,DX-DY));
    if(p2(ax,ay))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(p2(bx,by))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(p2(cx,cy))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(p2(dx,dy))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(p2((ux+lx)/2,(uy+ly)/2))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
