#include <iostream>
#include <algorithm>
using namespace std;
struct stu{
    int ID;
    int score[6];
    int sum;
    }s[10002];
bool comp(stu a,stu b)
{
    if (a.sum==b.sum)
    {
        int i=0;
        while(i<6)
        {
            if(a.score[i]!=b.score[i])
            return a.score[i]<b.score[i];
            i++;
        }
        return a.ID>b.ID;
    }
    else return a.sum<b.sum;
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        for(int i=0;i<n;i++)
        {
            s[i].sum=0;
            for(int j=0;j<6;j++)
            {
                cin>>s[i].score[j];
                s[i].sum+=s[i].score[j];
            }
            s[i].ID=i+1;
        }
        sort(s,s+n,comp);
        for(int i=n-1;i>=0;i--)
            cout<<s[i].ID<<" ";
        cout<<endl;
    }
    return 0;
}
