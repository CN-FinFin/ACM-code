#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int AH,AM,AS,BH,BM,BS;
        cin>>AH>>AM>>AS>>BH>>BM>>BS;
        AS+=BS;
        AM+=BM;
        AH+=BH;
        if(AS>=60)
        {AM++;AS-=60;}
        if(AM>=60)
        {AH++;AM-=60;}
        cout<<AH<<" "<<AM<<" "<<AS<<endl;
    }
    return 0;
}
