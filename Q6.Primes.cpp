/* Q6) Create a program that uses a loop to find and display the first 5 prime numbers. 
Use the break statement to exit the loop once all prime numbers are found. */
#include <iostream>
using namespace std;

int CheckPrime(int num) 
{
    if(num <= 1)
    {	return 0;}
    for (int i = 2; i * i <= num; ++i) 
	{
        if (num % i == 0)
        {    return 0;}
    }
    return true;
}
int main() 
{
    int count=0;
    int num = 0;
    cout<<"First 5 prime numbers are: ";
    while (count < 5) 
	{
        if (CheckPrime(num)) 
		{
            cout<<num<<" ";
            count++;
        }
        num++;
    }
    return 0;
}
/*Output:
First 5 prime numbers are: 2 3 5 7 11
*/

