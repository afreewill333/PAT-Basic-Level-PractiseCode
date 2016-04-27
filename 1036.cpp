#include<vector>
#include<iostream>
using namespace std;

int round(double n)
{
/*
	int d = (n-(int)n)*10;
	if(d>4)
		return (int)n+1;
	else return (int)n;
*/
	int tmp = (int)(n*10);
	if(tmp%10>4) return int(n)+1;
	else return (int)n;
}
int main()
{
	int N;
	char C;
	cin>>N>>C;

	vector<vector<char>> vvc((int)(N*0.5+0.5),vector<char>(N));
	//vector<vector<char>> vvc(int(N/2.+0.5),vector<char>(N));
	//vector<vector<char>> vvc(round(N/2.0),vector<char>(N));
	for(int i=0;i!=vvc.size();++i)
	{
		for(int j=0;j!=vvc[i].size();++j)
		{
			if(i==0)
				vvc[i][j] = C;
			else
			if(i==vvc.size()-1)
				vvc[i][j] = C;
			else
			if(j==0)
				vvc[i][j] = C;
			else
			if(j==vvc[i].size()-1)
				vvc[i][j] = C;
			else
				vvc[i][j] = ' ';
		}
	}

	for(int i=0;i!=vvc.size();++i)
	{
		for(int j=0;j!=vvc[i].size();++j)
		{
			cout<<vvc[i][j];
		}
		cout<<endl;
	} 
}

  