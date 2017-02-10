#include <iostream>
#include <string>
using namespace std;

string drehum(string);
bool vergleichen(string, string);
bool checkchar(char);

string drehum(string eingabe)
{
	string umgedreht;
	for (int i = eingabe.length() - 1; i != -1; i--)
	{
		umgedreht += eingabe.at(i);
	}
	return umgedreht;
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

bool checkchar(char check)
{
	if (check < 'A' || ((check > 'Z') && (check < 'a')) || check > 'z')
		return false;
	else
		return true;
}

int main()
{
	string eingabe, temp;
	bool pruefechar = true;

	for (int i = 0; i < eingabe.length(); i++)
	{
		if (checkchar(eingabe.at(i)) != false)
		{
			pruefechar = true;
		}
		else
		{
			pruefechar = false;
			break;
		}

		if (pruefechar == true)
			break;
	}

	cout << "Text: ";
	getline(cin, eingabe);



	temp = drehum(eingabe);

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