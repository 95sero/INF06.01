#include <iostream>
#include <string>
using namespace std;

string umdrehen(string);
bool vergleichen(string, string);

string umdrehen(string eingabe)
{
	string a;
	for (int i = eingabe.length() - 1; i != -1; i--)
	{
		a += eingabe.at(i);
	}
	return a;
}


bool vergleichen(string v1, string v2)
{
	bool pruefe = true;
	for (int i = 0; i < v1.length(); i++)
	{
		if (v1.at(i) == v2.at(i))
		{
			pruefe = true;
		}
		else
		{
			pruefe = false;
			break;
		}
	}
	return pruefe;
}


int main()
{
	string eingabe, temp;
	bool pruefechar = true;


	cout << "Text: ";
	getline(cin, eingabe);


	temp = umdrehen(eingabe);

	if (vergleichen(eingabe, temp) == true)
	{
		cout << "Das eingegebene Wort ist ein Palindrom.";
	}
	else
		cout << "Das eingegebene Wort ist KEIN Palindrom.";
	cout << endl;
							
	system("pause");
	return 0;

}
