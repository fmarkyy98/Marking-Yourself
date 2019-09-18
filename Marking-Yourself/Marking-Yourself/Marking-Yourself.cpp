#include <iostream>
#include <string>

using namespace std;

bool intTryParse(string s, int& out)
{
	bool result = true;
	int i = 0;
	while (i < s.length() && result)
	{
		if (!isdigit(s[i]))
		{
			result = false;
		}
		++i;
	}
	if (result) { out = stoi(s); }
	return result;
}

int main()
{
	string input;
	int mark = -1;
	do
	{
		cout << "As mark type a number between 1 an 5!\nFor Exite type nothing.\n";
		cin >> input;
	} while (!intTryParse(input, mark) || !(mark >= 1 && mark <= 5));
	cout << "Thankyou for the selfreflection, you got" << mark << ".\n";

	//cin >> input;//Get the injput.
	//cin.fail(); //returns with a boolean that reprezents the succes of the cin.
	//cin.clear(); //reset the False value of .fail.
	//cin.ignore(); //ignore the current stream until the next enter.
	//cin.peek(); // peeks the next element of the input.
}
