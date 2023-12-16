#include<iostream>
using namespace std;
int main() 
{
	int user_input,result;
	cout << "enter  a value for user_input:";
	cin >> user_input;
	
	if (user_input < 0)
		result = -1;
	else if (user_input >= 0 && user_input <= 5)
		result = 0;
	else if (user_input >= 6 && user_input <= 12)
		result = 1;
	else if (user_input >= 13 && user_input <= 19)
		result = 2;
	else if (user_input >= 20 && user_input <= 50)
		result = 3;
	else if (user_input >= 51 && user_input <= 60)
		result = 4;
	else if (user_input >= 61 && user_input <= 101)
		result = 5;
	else
		result = -1;
	 
	
	return 0;
}