#include <iostream>
using namespace std;


int main()
{
	int casos;
	while(cin>>casos)
	{
		int x,y,x1,y1;
		if(casos==0)break;
		cin>>x>>y;
		for(int i=0;i<casos;i++)
		{
			cin>>x1>>y1;
			if(x1==x||y1==y)cout<<"divisa";
			else if(x1>x&&y1>y)cout<<"NE";
			else if(x1>x&&y1<y)cout<<"SE";
			else if(x1<x&&y1>y)cout<<"NO";
			else if(x1<x&&y1<y)cout<<"SO";
			cout<<endl;
		}
	}
	return 0;
}

