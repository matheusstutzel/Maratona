#include <iostream>
using namespace std;


int main()
{
	int casos;
	cin>>casos;
	for(int i=0;i<casos;i++)
	{
		int x,y,menor,maior;
		menor=10000;
		maior=-100;
		cin>>x;
		for(y=0;y<x;y++)
		{
			int aux;
			cin>>aux;
			if(aux>maior)maior=aux;
			if(aux<menor)menor=aux;
		}
		cout<<(maior-menor)*2<<endl;
	}
	return 0;
}

