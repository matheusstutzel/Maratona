#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int casos;
	cin>>casos;
	for(int i=0;i<casos;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a>20||b>20||c>20)cout<<"Case "<<i+1<<": "<<"bad"<<endl;
		else cout<<"Case "<<i+1<<": "<<"good"<<endl;
	}
	return 0;
}

