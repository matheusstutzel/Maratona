#include <iostream>
using namespace std;

int mod(int a,int b)
{
	a=a%b;
	if((a<0 && b>0)||(a>0 &&b<0))return a+b;
	else return a;
}
int main()
{
	int a,b,c,d;
	while(cin>>a>>b>>c>>d)
	{
		if(a==0&&b==0&&c==0&&d==0)break;
		int soma=120;
		a=mod(a-b,40);
		b=mod(c-b,40);
		c=mod(c-d,40);
		soma+=a+b+c;
		cout<<soma*9<<endl;
	}
	return 0;
}
