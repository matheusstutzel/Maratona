#include <iostream>
using namespace std;


int main()
{
	int casos;
	cin>>casos;
	for(int i=0;i<casos;i++)
	{
		int x;
		cin>>x;
		x=(((((x*567/9)+7492)*235/47)-498)/10)%10;
		if(x<0)x*=-1;
		cout<<x<<endl;
	}
	return 0;
}

