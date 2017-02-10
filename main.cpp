#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eingabe;
	string temp;

	cout << "Text: ";
	getline(cin, eingabe);
	for (int i = 0; i <= eingabe.length() - 1; i++)
	{		
		if (eingabe.at(i) == eingabe.at(i))
		{
			temp = eingabe.at(i);
		}
		else
			cout << "Ist kein Palindrom";
	}
	
	system("pause");
	return 0;

}