#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
/*

*/
char l;
int bitmap[200][200];
void imprimeB();
int lin, col;
string a,B;
/*


*/	
void imprime();
void converte(int x1,int y1,int x2,int y2);
bool eIgual(int x1,int y1,int x2,int y2);
void preenche(int x1,int y1,int x2,int y2);
void imprimeMat();
/*


*/
int main()
{
	while(cin>>l)
	{
		if( l=='#')break;
		cin>>lin>>col;
		imprime();
		
		for(int i=0;i<lin;i++)for(int j=0;j<col;j++)bitmap[i][j]=-1;
		//imprimeMat();
		if(l=='B'|| l=='b')
		{	
			string aux;int mat=0;
			for(int k=0;k<=((lin*col)-1)/50;k++)
			{
				cin>>aux;
				//cout<<aux<<endl;
				for(int i=0;i<aux.length();i++)
				{
					bitmap[mat/col][mat%col]=aux[i]-'0';
					mat++;
				}
			}
			//cout<<endl;imprimeMat();
			//cout<<mat<<endl;
			B="";
			converte(0,0,lin,col);
			imprimeB();
			//cout<<endl;
		}
		else if(l=='D'||l=='d')
		{
			
			preenche(0,0,lin,col);
			imprimeMat();
		}
	}
}
		
void imprime()
{
	char aux;
	if(l=='B'|| l=='b')aux='D';
	else if(l=='D'||l=='d')aux='B';
	printf("%c%4d%4d\n",aux,lin,col);
}
void converte(int x1,int y1,int x2,int y2)
{
	if(x1<x2&&y1<y2){
	bool igual;
	igual=eIgual(x1,y1,x2,y2);
	if(igual)B+=bitmap[x1][y1];
	else
	{
		int c,d;
		c=((x2-x1)/2)+x1;
		d=((y2-y1)/2)+y1;
		
		if((x2-x1)%2!=0)c++;
		if((y2-y1)%2!=0)d++;	
		B+='D'-'0';
		if(x2-x1==1)
		{
			 converte(x1,y1,x2,d);
			converte(x1,d,x2,y2);	
		}
		else if(y2-y1==1)
		{
			converte(x1,y1,c,y2);
			 converte(c,y1,x2,y2);			
		}
		else
		{
			converte(x1,y1,c,d);
			converte(x1,d,c,y2);
			converte(c,y1,x2,d);
			converte(c,d,x2,y2);
		}
		
	}
}
}
bool eIgual(int x1,int y1,int x2,int y2)
{
	for(int i=x1;i<x2;i++)for(int j=y1;j<y2;j++)if(bitmap[x1][y1]!=bitmap[i][j])return false;
	return true;
}
void preenche(int x1,int y1,int x2,int y2)
{
	if(x1<x2&&y1<y2){
	char aux;
	aux=getc(stdin);
	while(aux!='1'&&aux!='0'&&aux!='D'&& aux!='d')aux=getc(stdin);
	if(aux=='1'|| aux=='0')	{for(int i=x1;i<x2;i++)for(int j=y1;j<y2;j++){bitmap[i][j]=aux-'0';}}
	else if(aux=='D'|| aux=='d')
	{
		int c,d;
		c=((x2-x1)/2)+x1;
		d=((y2-y1)/2)+y1;
		
		if((x2-x1)%2!=0)c++;
		if((y2-y1)%2!=0)d++;	
		//cout<<"D";
		if(x2-x1==1)
		{
			 preenche(x1,y1,x2,d);
			preenche(x1,d,x2,y2);	
		}
		else if(y2-y1==1)
		{
			preenche(x1,y1,c,y2);
			 preenche(c,y1,x2,y2);			
		}
		else
		{
			preenche(x1,y1,c,d);
			preenche(x1,d,c,y2);
			preenche(c,y1,x2,d);
			preenche(c,d,x2,y2);
		}
	}
}
}

void imprimeMat()
{
	for(int i=0;i<lin*col;i++)
	{
		if(i%50==0&&i!=0)cout<<endl;
		cout<<bitmap[i/col][i%col];
	}
	cout<<endl;
	//for(int i=0;i<lin;i++)for(int j=0;j<col;j++)cout<<bitmap[i][j];
}

void imprimeB()
{
	for(int i=0;i<B.size();i++)
	{
		if(i%50==0&&i!=0)cout<<endl;
		cout<<(char)(B[i]+'0');
	}
	cout<<endl;
	//for(int i=0;i<lin;i++)for(int j=0;j<col;j++)cout<<bitmap[i][j];
}
