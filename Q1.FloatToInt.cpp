/* Q1) Create a program that takes user input as a floating-point number, converts it to an integer using typecasting, 
and displays both the original and the typecasted values.*/
#include <iostream>
using namespace std;
int main() 
{
    float input;
    cout<<"Enter a floating-point number to convert into an integer: ";
    cin>>input;
    int TypecastValue = int(input);
    cout<<"Original Float value:"<<input<<endl;
    cout<<"Typecasted value:"<<TypecastValue<<endl;
    return 0;
}
/*Output:
Enter a floating-point number to convert into an integer: 5.56
Original Float value:5.56
Typecasted value:5
*/