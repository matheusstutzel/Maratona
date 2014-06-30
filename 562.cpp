#include <iostream>
#include <cmath>
using namespace std;
int m[200],k[30000],Mcap;
int main ()
{
    int t;
    cin>>t;
    for(int casos=0;casos<t;casos++)
    {
        int num,soma;
        soma=0;
        cin>>num;
        for(int i =1;i<=num;i++)
        {
            cin>>m[i];
            soma+=m[i];
        }
        Mcap=soma/2;
        k[0]=0;
        for(int i=1;i<=Mcap;i++)k[i]=-1;
        for(int i =1;i<=num;i++)
        {
            for(int j=Mcap;j>=m[i];j--)
            {
                if(k[j]==-1 && k[j-m[i]]>=0)
                {
                    k[j]=i;
                }
            }
        }
        int i;
        for(i=Mcap;i>0;i--)if( k[i]>0)break;
        cout<<abs(soma-(2*i))<<endl;
    }
    return 0;
}
