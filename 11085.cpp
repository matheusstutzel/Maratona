#include <iostream>
using namespace std;
int cont,chess[9],caso,aux,todos[100][9],l,auxv[9];

bool Possivel(int L,int C)
{
	for(int i=0;i<L;i++)
	{
		//cout<<todos[cont][i]<<" "<<C<<endl;
		if(C==auxv[i])return false;
		if(C==auxv[i]+L-i)return false;
		if(C==auxv[i]-L+i)return false;
	}
	return true;
}
void gera()
{
	//for(int k=0;k<92;k++){
	for(int i=1;i<=8;i++)
	{
		if(Possivel(l+1,i))
		{
			l++;auxv[l]=i;
			if(l==8)
			{
				for(int j=1;j<9;j++)todos[cont][j]=auxv[j];
				cont++;
			}
			else gera();
			l--;
		}
	}
//}
}
int compara()
{
	int moves=0,min=9;
	for(int i=0;i<92;i++)
	{
		moves=0;
		for(int j=1;j<=8;j++)
		{
			if(chess[j-1]!=todos[i][j])moves++;
		}
		if(moves<min)min=moves;
	}
	return min;
}
int main()
{
	caso=0;
	l=0;
	cont=0;
	
	for(int j=0;j<8;j++)auxv[j]=-10000;
	
	gera();
	/*
	for(int i=0;i<92;i++)
	{
		for(int j=1;j<=8;j++)cout<<todos[i][j]<<" ";
		cout<<";"<<endl;
	}*/
	while(cin>>chess[0]>>chess[1]>>chess[2]>>chess[3]>>chess[4]>>chess[5]>>chess[6]>>chess[7])
	{
		//for(int i=0;i<8;i++)chess[i]--;
		caso++;cont=0;
		cont=compara();
		cout<<"Case "<<caso<<": "<<cont<<endl;
	}
	return 0;
}
