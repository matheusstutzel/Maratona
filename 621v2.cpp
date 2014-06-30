#include <iostream>
using namespace std;


int main()
{
	int casos;
	cin>>casos;
	for(int i=0;i<casos;i++)
	{
		string s;
		cin>>s;
		int a=s.length();
		if(s=="1"||s=="4"||s=="78")cout<<"+"<<endl;
		else if(s[a-2]=='3'&&s[a-1]=='5')cout<<"-"<<endl;
		else if(s[0]=='9'&&s[a-1]=='4') cout<<"*"<<endl;
		else cout<<"?"<<endl;
	}
	return 0;
}
