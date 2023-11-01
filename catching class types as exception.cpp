#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
class error
{
	int err_code;
	char *err_desc;
	public:
		error(int c,char *d)
		{
			err_code=c;
			err_desc=new char[strlen(d)+1];
			strcpy(err_desc , d);
		}
		void err_display()
		{
		cout<<"\n Error code: "<<err_code<<"\n Error desc: "<<err_desc;	
		}
};
int main()
{
	try
	{
	cout<<"\n Press any key : ";
	getch();
	error obj(99,"This is error");
	throw obj;	
	}
	catch(error e)
	{
		cout<<"\n Exception caught succesfully";
		e.err_display();
	}
	return 0;
}







