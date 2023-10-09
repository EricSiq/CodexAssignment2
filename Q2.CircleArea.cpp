/* Q2) Develop a program that calculates the area of a circle 
using a constant value for pi (p). Use appropriate constants for radius and pi. */
#include<iostream>
using namespace std;
int main()
{
	int radius;
	float area, pi=3.14;
	cout<<"Enter the radius of the circle:";
	cin>>radius;
	area=pi*radius*radius;
	cout<<"The area of the circle is "<<area<<" square units."<<endl;

return 0;
}
/*Output:
Enter the radius of the circle:5
The area of the circle is 78.5 square units.
*/