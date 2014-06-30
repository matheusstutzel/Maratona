#include <iostream>
#include <string>
using namespace std;

//teste github
int main()
{
	string aux;
	while(cin>>aux)
	{
		float resp;
		int h,m,pos;
		
		if(aux=="0:00")break;
		
		pos=aux.find(":");
		h=stoi(aux.substr(0,pos));
		m=stoi(aux.substr(pos+1));
		resp=(((60*h)-(11*m))/2.0);
		if(resp<0)resp*=-1;
		if(resp>180)resp=360-resp;
		printf("%.3f\n",resp);
	}
	return 0;
}
