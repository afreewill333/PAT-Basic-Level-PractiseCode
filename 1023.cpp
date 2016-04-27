#include<cstdio>
#include<string>
#include<queue>
#include<sstream>
#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char *argv[])
{	
	/*
	priority_queue<int,less<int>> pq;

	for(int i=0;i!=10;++i)
	{
		int n;
		cin>>n;
		for(int j=0;j!=n;++j)
			pq.insert(i);
	}

	for(auto it=msi.begin();it!=msi.end();++it)
	{
		if(*it!=0)
		{
			cout<<*it; 
			msi.erase(*it); 
			break;
		}
	}
	for(auto it=msi.begin();it!=msi.end();++it)
		cout<<*it;
	cout<<endl;
	*/
	vector<int> vi(10);
	bool found=false;
	for(int i=0;i!=10;++i)
	{
		int n;
		cin>>n;
		vi[i]=n;
		if(i!=0&&n!=0&&!found)
		{
			cout<<i;
			vi[i]--;
			found = true;
		}
	}
	for(int i=0;i!=10;++i)
	{
		if(vi[i]!=0)
		{
			for(int j=0;j!=vi[i];++j)
				cout<<i;
		}
	}
	cout<<endl;



	return 0;
}
