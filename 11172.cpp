#include <iostream>
using namespace std;


int main()
{
	int casos;
	cin>>casos;
	for(int i=0;i<casos;i++)
	{
		int x,y;
		cin>>x>>y;
		if(x<y)cout<<"<";
		else if(x>y)cout<<">";
		else if(x==y)cout<<"=";
		cout<<endl;
	}
	return 0;
}

