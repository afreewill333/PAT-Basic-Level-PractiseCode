#include<cstdio>
#include<vector>
#include<iomanip>
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int N;
	cin>>N;

	int ans1=0,ans2=0,ans3=0;
	double sum4=0;
	int ans5=-1;
	
	int flag2=1;
	int cnt4=0;
	
	bool exist[5]={false,false,false,false,false};
	for(int i=0;i!=N;++i)
	{
		int n;
		cin>>n;
		switch(n%5)
		{
			case 0: if(n%2==0)
					{
						ans1+=n;
						exist[0]=true;
					}
					break;
			case 1: ans2+=flag2*n;
					flag2*=-1;
					exist[1]=true;
					break;
			case 2: ans3++;
					exist[2]=true;
					break;
			case 3: sum4+=n;
					cnt4++;
					exist[3]=true;
					break;
			case 4: if(n>ans5)ans5=n;
					exist[4]=true;
					break;
		}
	}

	if(exist[0]) cout<<ans1;
	else cout<<"N";cout<<" ";

	if(exist[1]) cout<<ans2;
	else cout<<"N";cout<<" ";

	if(exist[2]) cout<<ans3;
	else cout<<"N";cout<<" ";

	if(exist[3]) cout<<fixed<<setprecision(1)<<(sum4/cnt4);
	else cout<<"N";cout<<" ";

	if(exist[4]) cout<<ans5;
	else cout<<"N";	
	
	return 0;
}
