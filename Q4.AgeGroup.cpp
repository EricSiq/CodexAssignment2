/*Q4) Build a program that takes a user's age as input and uses if-else statements 
to determine if the user is a child, teenager, adult, or senior citizen.
*/
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter how many years old are you:";
	cin>>age;
	if (age>=0 & age<13)
	{
		cout<<"You are a child.";
	}
	else if (age>=13 & age<18)
	{
		cout<<"You are a teenager.";
	}
	else if (age>=18 & age<60)
	{
		cout<<"You are an adult.";
	}
	else if (age>=60 & age<115)
	{
		cout<<"You are a senior citizen.";
	}
	else
	{
	cout<<"You are not human.";
	}
}
/*Output:
Enter how many years old are you:13
You are a teenager.

Enter how many years old are you:18
You are an adult.

Enter how many years old are you:60
You are a senior citizen.

Enter how many years old are you:150
You are not human.
*/