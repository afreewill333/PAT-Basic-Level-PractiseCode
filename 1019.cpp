#include<cstdio>
#include<vector>
#include<tuple>
#include<iomanip>
#include<iostream>
#include<algorithm>
using namespace std;

tuple<int,int> fun(vector<int> &vi)
{
	sort(vi.begin(),vi.end(),greater<int>());
	int max=0;
	for(auto it=vi.cbegin();it!=vi.cend();++it)
		max = max*10+*it;

	sort(vi.begin(),vi.end(),less<int>());
	int min=0;
	for(auto it=vi.cbegin();it!=vi.cend();++it)
		min = min*10+*it;
	
	return tuple<int,int>{max,min};
}

int main(int argc, char *argv[])
{
	int N;
	cin>>N;
	int _1 = N/1000;
	int _2 = N/100%10;
	int _3 = N/1000%10;
	int _4 = N%10;

	if(_1==_2 &&_2==_3 &&_3==_4)
		cout<<N<<" - "<<N<<" = 0000"<<endl;
	
	vector<int> vi;
	vi.push_back(_1);
	vi.push_back(_2);
	vi.push_back(_3);
	vi.push_back(_4);

	int cnt=0;
	while(true)
	{
		auto t=fun(vi);

		int max = get<0>(t);
		int min = get<1>(t);
		cout<<max<<" - "<<min
			<<" = "<<setw(4)<<setfill('0')
			<<max-min<<endl;
++cnt;
if(cnt==6)
	break;

		if(max - min == 6174)
			break;
		
		int N = max -min;
		int _1 = N/1000;
		int _2 = N/100%10;
		int _3 = N/1000%10;
		int _4 = N%10;
		vi = {_1,_2,_3,_4};
	}

	return 0;
}
