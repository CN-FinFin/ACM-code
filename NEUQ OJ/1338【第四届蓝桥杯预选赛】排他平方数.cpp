#include<iostream>  
#include<cstring>  
using namespace std;  
int vis[10];  
int judge(long long int i)  
{  
    while(i)  
    {  
        if(vis[i%10]==0) vis[i%10]++;  
        else return 0;  
        i/=10;  
    }  
    return 1;  
}  
int judge1(long long int i)  
{  
    while(i)  
    {  
        if(vis[i%10]!=0) return 0;  
        i/=10;  
    }  
    return 1;  
}  
int main()  
{  
    long long int i;  
    for(i=123456;i<=987654;i++)  
    {  
        memset(vis,0,sizeof(vis));  
        if(!judge(i)) continue;  
        if(!judge1(i*i)) continue; 
    if(i!=203879)
    {
    	cout<<i<<endl;
	}
}
    return 0;  
} 