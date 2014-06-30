#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm> 

using namespace std;

int sum=0,quant=0, soma=0,ns=0,cont;
vector <int> C;
vector<int> S;
vector<int> Salvo;
int mat[5000][12];
void somasub(int);
void imprime(vector<int>);
bool Diferente();

int main ()
{
    while(cin>>sum>>quant,quant>0)
    {
    cout<<"Sums of "<<sum<<":"<<endl;	
	cont=0;
     for(int j=1;j<=quant;j++)
     {
     	int aux;
      	cin>>aux; 
	  	C.push_back(aux);       
     }
     for(int i=0;i<500;i++)for(int j=0;j<12;j++)mat[i][j]=0;
     sort(C.begin(),C.end(),greater<int>());
     somasub(0);
     if(sum==0)cout<<endl;
     else if(cont==0)cout<<"NONE"<<endl;
     C.clear();
     S.clear();
     Salvo.clear();
     //cout<<endl;
    }     
}
void somasub(int t)
{
	for(int i=t;i<quant;i++)
   {
   		ns++; S.push_back(C[i]); soma=soma+C[i];
   		if(soma==sum&&Diferente()){
   			cont++;
   			Salvo.clear();
   			for(int i=0;i<S.size();i++)mat[cont-1][i]=S[i];
   			imprime(S);
   			}
   		else
   		{
   			somasub(i+1);
   		}
   		S.pop_back(); ns--; soma=soma-C[i];
   }
}
void imprime(vector <int> vet)
{
	
	for(int j=0;j<vet.size();j++)
	{
		if(vet[j]>0)
		{
			if(j<vet.size()-1)cout<<vet[j]<<"+";
			else cout<<vet[j];
		}
	}
	cout<<endl;
}
bool Diferente()
{
	bool aux;
	for(int i=0;i<=cont;i++)
	{
		aux=false;
		for(int j=0;j<S.size();j++)if(S[j]!=mat[i][j])aux=true;
		if(!aux)return false;
	}
	return true;
}

