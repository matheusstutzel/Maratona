#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	string aux;
	int casos=1;
	while(cin>>aux)
	{
		if(aux=="*")break;
		cout<<"Case "<<casos++<<": ";
		if(aux=="Hajj")cout<<"Hajj-e-Akbar"<<endl;
		else cout<<"Hajj-e-Asghar"<<endl;

	}
	return 0;
}

