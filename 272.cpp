#include <iostream>
using namespace std;


int main()
{
	char c;
	bool aspas=false;
	while((c=getchar())!=EOF)
	{
		if(c=='"')
		{
			if(aspas)
			{
				aspas=false;
				cout<<"''";
			}
			else
			{
				aspas=true;
				cout<<"``";
			}
		}
		else putchar(c);
	}
	return 0;
}
