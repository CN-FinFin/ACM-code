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
    float r,h,C1,Sa,Sb,Va,Vb;
    scanf("%f%f",&r,&h);
    //cout<<r<<" "<<h<<endl;
    C1=2.0*3.14*r;
    Sa=3.14*r*r;
    Sb=4*3.14*r*r;
    Va=4*3.14*r*r*r/3;
    Vb=Sa*h;
    C1=(floor(C1*100))/100;
//    cout<<Sa<<endl;
    Sa=(floor(Sa*100))/100;
    Sb=(floor(Sb*100))/100;
    Va=(floor(Va*100))/100;
    Vb=(floor(Vb*100))/100;
    //printf("%d.%03d\n", a, b);//分别输出小数部分和整数部分。
    printf("C1=%.2f\nSa=%.2f\nSb=%.2f\nVa=%.2f\nVb=%.2f\n",C1,Sa,Sb,Va,Vb);
    return 0;
}
