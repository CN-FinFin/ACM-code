#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	unsigned long long a[1500]={0};
	int b[15]={0};
	int k,n;
	cin>>k>>n;
	for(int i=0;i<=9;i++)
	{
		a[i]=pow(k,i);
		b[1]++;
	}
	int t=11;
	for(int i=0;i<=9;i++)
	{
		for(int j=i+1;j<=9;j++)
		{
			a[t]=a[i]+a[j];
			t++;
			b[2]++;
		}
	}
	for(int i=0;i<=9;i++)
	{
		for(int j=i+1;j<=9;j++)
		{
			for(int u=j+1;u<=9;u++)
			{
				a[t]=a[i]+a[j]+a[u];
				t++;
				b[3]++;
			}
		}
	}
	for(int i=0;i<=9;i++)
	{
		for(int j=i+1;j<=9;j++)
		{
			for(int u=j+1;u<=9;u++)
			{
				for(int h=u+1;h<=9;h++)
				{
					a[t]=a[i]+a[j]+a[u]+a[h];
					t++;
					b[4]++;
				}
			}
		}
	}
	for(int i=0;i<=9;i++)
	{
		for(int j=i+1;j<=9;j++)
		{
			for(int u=j+1;u<=9;u++)
			{
				for(int h=u+1;h<=9;h++)
				{
					for(int ii=h+1;ii<=9;ii++)
					{
						a[t]=a[i]+a[j]+a[u]+a[h]+a[ii];
					    t++;
					    b[5]++;
					}
				}
			}
		}
	}
	for(int i=0;i<=9;i++)
	{
		for(int j=i+1;j<=9;j++)
		{
			for(int u=j+1;u<=9;u++)
			{
				for(int h=u+1;h<=9;h++)
				{
					for(int ii=h+1;ii<=9;ii++)
					{
						for(int jj=ii+1;jj<=9;jj++)
						{
							a[t]=a[i]+a[j]+a[u]+a[h]+a[ii]+a[jj];
					    	t++;
					    	b[6]++;
						}
					}
				}
			}
		}
	}
	for(int i=0;i<=9;i++)
	{
		for(int j=i+1;j<=9;j++)
		{
			for(int u=j+1;u<=9;u++)
			{
				for(int h=u+1;h<=9;h++)
				{
					for(int ii=h+1;ii<=9;ii++)
					{
						for(int jj=ii+1;jj<=9;jj++)
						{
							for(int uu=jj+1;uu<=9;uu++)
							{
								a[t]=a[i]+a[j]+a[u]+a[h]+a[ii]+a[jj]+a[uu];
					    		t++;
					    		b[7]++;
							}
						}
					}
				}
			}
		}
	}
	for(int i=0;i<=9;i++)
	{
		for(int j=i+1;j<=9;j++)
		{
			for(int u=j+1;u<=9;u++)
			{
				for(int h=u+1;h<=9;h++)
				{
					for(int ii=h+1;ii<=9;ii++)
					{
						for(int jj=ii+1;jj<=9;jj++)
						{
							for(int uu=jj+1;uu<=9;uu++)
							{
								for(int hh=uu+1;hh<=9;hh++)
								{
									a[t]=a[i]+a[j]+a[u]+a[h]+a[ii]+a[jj]+a[uu]+a[hh];
					    			t++;
					    			b[8]++;
								}
							}
						}
					}
				}
			}
		}
	}
	for(int i=0;i<=9;i++)
	{
		for(int j=i+1;j<=9;j++)
		{
			for(int u=j+1;u<=9;u++)
			{
				for(int h=u+1;h<=9;h++)
				{
					for(int ii=h+1;ii<=9;ii++)
					{
						for(int jj=ii+1;jj<=9;jj++)
						{
							for(int uu=jj+1;uu<=9;uu++)
							{
								for(int hh=uu+1;hh<=9;hh++)
								{
									for(int o=hh+1;o<=9;o++)
									{
										a[t]=a[i]+a[j]+a[u]+a[h]+a[ii]+a[jj]+a[uu]+a[hh]+a[o];
					    				t++;
					    				b[9]++;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	a[t]=a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9];
	sort(a,a+1024);
	cout<<a[n];
	return 0;
}
