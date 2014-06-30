#include <iostream>
using namespace std;

int mat[200][200];
void percorre(int,int);
int t,lin,col,maxi,local,cont;
int main ()
{
	
	string nome;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		maxi=0;local=0;
		cin>>nome>>lin>>col;
		for(int j=0;j<lin;j++)
		for(int k=0;k<col;k++)
		{
			cin>>mat[j][k];
		}
		
		for(int j=0;j<lin;j++)
		for(int k=0;k<col;k++)
		{
			cont=0;
			percorre(j,k);
			
		}
		cout<<nome<<": "<<maxi<<endl;
	}
	return 0;
}
void percorre(int i,int j)
{
	if(i>=0 && j>=0&& i<lin&&j<col)
	{
		
		cont++;
		(cont>maxi)?maxi=cont:maxi;
		int a,b,c,d;
		a=b=c=d=0;
		if(mat[i][j]>mat[i-1][j])percorre(i-1,j);
		if(mat[i][j]>mat[i][j-1])percorre(i,j-1);
		if(mat[i][j]>mat[i][j+1])percorre(i,j+1);
		if(mat[i][j]>mat[i+1][j])percorre(i+1,j);
		(cont>maxi)?maxi=cont:maxi;
		cont--;
	}
	
}

