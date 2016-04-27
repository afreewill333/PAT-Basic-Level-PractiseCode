#include<cstdio>
#include<cmath>
#include<vector>
#include<iostream>
using namespace std;


int main(int argc, char *argv[])
{	
	const int MAX = 15000;

	vector<int> vi{2};
	for(int i=2;vi.size()!=MAX;++i)
	{
		bool flag = true;
		for(int j=0;vi[j]<=sqrt(i)&&j!=vi.size();j++)
		{
			if(i%vi[j]==0)
			{
				flag = false;
				break;
			}
		}
		if(flag)
			vi.push_back(i);
	}

	//cout<<"#"<<vi.size()<<endl;

	int M,N;
	cin>>M>>N;
	int ln=0;
	for(int i=M;i<=N;++i)
	{
		if(ln==0)
			cout<<vi[i];
		else
			cout<<" "<<vi[i];
		
		++ln;

		if(ln%10==0)
		{
			cout<<endl;
			ln=0;
		}
		
	}
	
	return 0;
}
