#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int casos,tot=0;
	cin>>casos;
	for(int i=0;i<casos;i++)
	{
		string aux;
		int a;
		cin>>aux;
		if(aux=="donate")
		{
			cin>>a;
			tot+=a;
		}
		else cout<<tot<<endl;
	}
	return 0;
}

