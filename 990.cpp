#include <iostream>
#include <cmath>
#include <list>
using namespace std;
typedef struct {int me; int vm;list <int> aux;} mochila;
int Mcap=0,constant=0,num=0, Wpeso[32],cont,contW,M;
mochila K[32][1005],Coin[32], imprime[32];
bool esta(int max)
{
	for(int i=0;i<max;i++)if(Coin[K[num][M].me].me==imprime[i].me &&Coin[K[num][M].me].vm==imprime[i].vm)return true;
	return false;
}
int main() {
	bool a=false;
    while(cin>>Mcap>>constant)
    {
    	if(a)
		{
			cout<<endl;
		}
		else
			a = true;
     	cin>>num;
     	for(int i=1;i<=num;i++) 
     	{
     	 	cin>>Coin[i].me>>Coin[i].vm;        
     	} 
     	//Mcap=ceil(Mcap/(3.0*constant));
     	
     	for(int i=1;i<=num;i++)
     	{
      		Wpeso[i]=3*constant*Coin[i].me;        
     	} 
     	/*cout<<"Capacidade: "<<Mcap<<endl;
     	cout<<"Constante: "<<constant<<endl;     
     	for(int i=1;i<=num;i++) 
     	{
     		cout<<"Peso Subida Descida: "<<Wpeso[i]<<endl;
     		cout<<"Peso: "<<Coin[i].me<<endl; 
     		cout<<"Coin: "<<Coin[i].vm<<endl; 
     	}
     	cout<<endl;  */
     	K[0][0].me=0;
     	K[0][0].vm=0;
     	for(int j=1;j<=Mcap;j++)
		 {
		 	K[0][j].me=-1;
		 	K[0][j].vm=-1;
		 	K[0][j].aux.clear();
		 }
     	cont=0;
     	contW=0;
     	/*for(int k=1;k<=Mcap;k++)cout<<K[k];*/
     	for(int i=1;i<=num;i++)
     	{
     		for(int aux=0;aux<=Mcap;aux++)K[i][aux]=K[i-1][aux];
      		for(int j=Mcap;j>=Wpeso[i];j--)
      		{
      	 		if((K[i-1][j-Wpeso[i]].me>=0) && ((K[i-1][j-Wpeso[i]].vm+Coin[i].vm)>K[i][j].vm) )
				{
					
					K[i][j].me=i; 
					K[i][j].vm=(K[i-1][j-Wpeso[i]].vm+Coin[i].vm);
				}
      		}
      		/*cout<<"Mochila depois de "<<i<<" "<<Coin[i].me<<" "<<Coin[i].vm<<endl;
      		for(int i=1;i<=Mcap;i++)
		 {
		 	if(K[num][i].me>0)
			 {
			 	cout<<K[num][i].me<<" "<<i<<" "<<K[num][i].vm<<" "<<Wpeso[K[num][i].me];
			 	//if(Wpeso[K[num][i].me]==0)for(int kl=0;kl<K[num][i].aux.size();kl++)	cout<<" "<<Wpeso[K[num][i].aux.front()]<<" ";
			 	cout<<endl;
			 }
		}*/
		//cout<<endl;
     	} 
     	/*for(int i=1;i<=Mcap;i++)
		 {
		 	if(K[i].me>0)
			 {
			 	cout<<K[i].me<<" "<<i<<" "<<K[i].vm<<" "<<Wpeso[K[i].me];
			 	if(Wpeso[K[i].me]==0)for(int kl=0;kl<K[i].aux.size();kl++)	cout<<" "<<Wpeso[K[i].aux.front()]<<" ";
			 	cout<<endl;
			 }
		}*/
     	int max=-2, aux=0;
     	for(M=0;M<=Mcap;M++)
		 if( K[num][M].vm>max)
		 {
		 	max=K[num][M].vm;
		 	aux=M;
		}
     	M=aux;

     	cont=0;
     	contW=K[num][M].vm;
     	
     	int i=0;
     	while(M>0)
     	{
     		//cout<<"teste "<<M<<" "<<Wpeso[K[M].me]<<" "<<K[M].me<<" "<<K[M].vm<<endl;
			 //contW+=Coin[K[M].me].vm;
     		if(!esta(i))
			 {
			 	imprime[i]=Coin[K[num][M].me];
				i++;
			}
     		 M-=Wpeso[K[num][M].me];
     		 num--;     		
     	}
		//cout<<endl;
		cout<<contW<<endl;
     	cout<<i<<endl;
        for(int j=i-1;j>=0;j--)cout<<imprime[j].me<<" "<<imprime[j].vm<<endl;     	
    }
	return 0;
}
