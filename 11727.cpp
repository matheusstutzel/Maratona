#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int casos;
	cin>>casos;
	for(int i=0;i<casos;i++)
	{
		vector<int> vet;
		int a,b,c;
		cin>>a>>b>>c;
		vet.push_back(a); 
		vet.push_back(b);
		vet.push_back(c);
		sort(vet.begin(),vet.end());
		cout<<"Case "<<i+1<<": "<<vet[1]<<endl;
	}
	return 0;
}

