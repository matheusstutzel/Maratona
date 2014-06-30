#include <iostream>
#include <bitset>
#include <vector>
using namespace std;
int vet[]={1,32,497,4992,36457,206368,942649,3572224,11460949,31621024,75973189,160645504,301766029,508019104,773201629,1073741824,1374282019,1639464544,1845717619,1986838144,2071510459,2115862624,2136022699,2143911424,2146540999,2147277280,2147447191,2147478656,2147483151,2147483616,2147483647};
int mat[32][32];
long double fact[33];
int cont =0,stop,teste=1;
bitset <32> a;
vector <int> uns;


void imprime()
{
	bitset <32> b;
	vector <int> :: iterator it=uns.begin();
	for(;it!=uns.end();++it) b[*it]=1;
	cout<<b.to_ulong()<<endl;
	b.reset();
}
long double fatorial(int i)
{
	long double aux=1,j;
	for (j=1;j<=i;++j) aux*=j;
	return aux;
}

long double fat(int i)
{
	if(fact[i]==-1)fact[i]=fatorial(i);
	return fact[i];
}
int combinacao(int menor,int maior)
{
	cont++;
	if(menor==0|| menor>maior)return 0;
	return int((fat(maior))/(fat(menor)*fat(maior-menor)));
}
int comb(int menor,int maior)
{
	cont=0;
	if(mat[menor][maior]==-1)mat[menor][maior]=combinacao(menor,maior);

	return mat[menor][maior];
}


int zero(int p)
{
	
	for(int i=0;i<31;++i)
	{
		if (vet[i]>p)return i;
	}
	return 31;
}
int enh (int min,int max,int nh)
{
	int i;
	if (nh<=0) return min;
	for(i=min;i<=max;++i)
	{
		if(comb(min+1,i)>nh)
		{
			i--;
			break;
		}
	}
	if(i>max)i=max;
	return i;
}
int main(void)
{

	int pos;
	int numerode1,nh,pri,max;
	for(int i=0;i<32;++i)for(int j=0;j<32;++j)mat[i][j]=-1;
	for(int i=0;i<33;++i)fact[i]=-1;
	while(cin>>pos)
{
	
	max=31;
	numerode1=zero(pos);
	nh=pos-vet[numerode1-1];
	while(numerode1)
	{
		pri=enh(numerode1-1,max,nh);
		uns.push_back(pri);
		nh-=comb(numerode1,pri);
		if(pri>1)pri--;
		numerode1--;
		max=pri;
	}
	imprime();
	uns.clear();
	}
	return 0;
}
