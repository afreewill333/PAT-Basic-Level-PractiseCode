#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;
 
const int MAX=100000;
bool  isPrimer[MAX];



int main(int argc, char *argv[])
{
	/* default: primer[1]=false */
	for(int i=2;i!=MAX;++i)isPrimer[i]=true;
	for(int i=2;i!=MAX;++i)
	{
		for(int j=2*i;j<MAX;j+=i)
			isPrimer[j]=false;
	}
	/* to test for state function right */
	vector<int> primer;
	for(int i=2;i!=MAX;++i)
		if(isPrimer[i])primer.push_back(i);
	
	int N;
	cin>>N;
	int ans=0;
	for(int i=0,pre=1;i!=primer.size()&&primer[i]<=N;++i)
	{
		if(primer[i]-pre==2)
			ans++;
		pre = primer[i];
	}

	cout<<ans<<endl;

	return 0;
}
