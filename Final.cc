#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

int countLine(char* pName);
int countChar(char* pName);

int main()
{
	char* pName;
	cout << "Enter a string: " << endl;
	cin >> pName;
	int countLine(char* pName);
	int countChar(char* pName);
	
}
	int countLine(char* pName);
	int countChar(char* pName);

	int countLine(char* pName)
	{
		int line;
		
		if(pName == "")
		{
			pName = "Ohio University";
		}
		
		else if(pName == "\n")
		{
			line++;
		}
		
		cout << pName << " is " << line << " lines long." << endl;
		
		return 0;
	}
	
	int countChar(char* pName)
	{
		int count;
		
		if(pName == "")
		{
			pName = "Athens";
		}
		
		else if(pName == " ")
		{
			count++;
		}
		
		cout << pName << " is " << count << " characters long." << endl;
		
		return 0;
	}
