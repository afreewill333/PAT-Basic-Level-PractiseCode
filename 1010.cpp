#include<cstdio>
#include<vector>
#include<utility>
#include<iostream>
using namespace std;

int main()
{
	vector<pair<int,int>> vpii;
	int x,n;
	while(cin>>x>>n)
	{
		vpii.push_back({x,n});
	}
	
	bool flag = false;
	for(auto it=vpii.begin();it!=vpii.end();++it)
	{
		if(it->first*it->second)
		{
			if(flag)cout<<" ";
			flag = true;
			cout<<it->first*it->second<<" "
		        <<it->second-1;		
		}
	}

	if(!flag)
		cout<<0<<" "<<0;

	return 0;
}