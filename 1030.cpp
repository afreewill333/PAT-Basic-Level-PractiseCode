#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;


int main(int argc, char *argv[])
{
	int N;
	double p;
	cin>>N>>p;

	vector<int> input;
	vector<int> count(N);
	for(int i=0;i!=N;++i)
	{
		int n;
		cin>>n;
		input.push_back(n);
	}
	sort(input.begin(),input.end(),less<int>());

	int pos=0,max=0,cnt=0;
	for(int i=0;i!=N;++i)
	{
		if(cnt!=0)cnt--;
		long long M = p*input[i];
		while(input[pos]<=M && pos<N)
		{
			++pos;
			++cnt;
		}
		count[i] = cnt;
		
		if(cnt>max)max = cnt;
	}
	cout<<max<<endl;
/*
	long long max=0;
	for(int i=0;i!=input.size();++i)
	{
		int v = input[i];
*/		/*
		cout<<count_if(input.begin(),input.end(),
			[v,p](int n){return n <= v*p;});
		cout<<endl;
		*/
/*		int cnt = count_if(input.begin(),input.end(),
			[v,p](int n){return n <= v*p;});
		count[i] = cnt-i;

		if(count[i]>max)
			max = count[i];
	}
	
	if(p<1)
		cout<<0<<endl;
	else
		cout<<max<<endl;
*/
	return 0;
}
