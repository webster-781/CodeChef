#include<bits/stdc++.h>
#include<string.h>
using namespace std;
ifstream fin("inp.txt");
ofstream fout("output.out");
#define cin fin
#define cout fout

int main()
{
	long T;
	cin>>T;
	for(long i=0;i<T;i++)
	{
		long count_0=0, count_2=0;
		long N,ans=0;
		cin>>N;
		for(int j=0;j<N;j++)
		{
			int a=-1;
			cin>>a;
			if(a==0)
				count_0++;
			else if(a==2)
				count_2++;
		}	
		if(count_0>1)
			ans+=(count_0)*(count_0-1)/2;
		if(count_2>1)
			ans+=(count_2)*(count_2-1)/2;
		cout<<ans<<"\n";
	}
		return 0;
}