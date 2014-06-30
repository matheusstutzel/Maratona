#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int aux=0;
	while(true){
		aux++;
	int casos;
	cin>>casos;
	if(casos==0)break;
	int cont=0;
	for(int i=0;i<casos;i++)
	{
		int a;
		cin>>a;
		if(a==0)cont++;
	}
	
		cout<<"Case "<<aux<<": "<<casos-(2*cont)<<endl;
	}
	return 0;
}

