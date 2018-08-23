#include <iostream>
using namespace std;

int main()
{
	char str[128];
	char ch;
	int pos;
	int i = 0;

	do
	{
		cout<<"Please input a string:";
		cin>>str;
		cout<<"Please input the num:";
		cin>>pos;
	
		while (str[i] != '\0')
		{
			str[i] = str[i] + pos;
			i++;
		}
	
		cout<<"After Changed: "<<str<<endl;
		cout<<"Do you want to continue? (Y/N)";
		cin>>ch;
	}while(ch == 'Y' || ch == 'y');
	
	return 0;
}
