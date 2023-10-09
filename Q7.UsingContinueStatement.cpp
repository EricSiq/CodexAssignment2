/*Q7) Build a program that uses a loop to display all even numbers 
between 1 and 20 but skips the number 10 using the continue statement.
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	for (int i=0;i<21;i++)
	{
		if (i%2==0)
		{
			num=i;
			cout<<num<<" is an even number."<<endl;
		}
		else if(i==10)
		{	continue;}
		else
		{	continue;}
	}
}
/*Output:
0 is an even number.
2 is an even number.
4 is an even number.
6 is an even number.
8 is an even number.
10 is an even number.
12 is an even number.
14 is an even number.
16 is an even number.
18 is an even number.
20 is an even number.
*/