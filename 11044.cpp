#include <iostream>
using namespace std;


int main()
{
	int casos;
	cin>>casos;
	for(int i=0;i<casos;i++)
	{
		int x,y,aux1,aux2;
		cin>>x>>y;
		aux1=x/3;
		aux2=y/3;
		cout<<aux1*aux2<<endl;
	}
	return 0;
}

