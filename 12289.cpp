#include <iostream>
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
		string aux;
		int r;
		cin>>aux;
		if(aux.length()==5)r=3;
		else
		{
			if((aux[0]=='o'&&aux[1]=='n')||
				(aux[0]=='o'&&aux[2]=='e')||
				(aux[1]=='n'&&aux[2]=='e')) r=1;
			else r=2;
		}
		cout<<r<<endl;
	}
	return 0;
}

