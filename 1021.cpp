#include<cstdio>
#include<string>
#include<vector>
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
	string str;
	cin>>str;

	vector<int> vi(15);
	for(int i=0;i!=str.size();++i)
	{
		int D = str[i]-'0';
		vi[D]++;
	}

	for(int i=0;i!=10;++i)
		if(vi[i]!=0)
		cout<<i<<":"<<vi[i]<<endl;
		
	return 0;
}
