/* Q5) Develop a program that uses a while loop to continuously prompt 
the user for a password until the correct password is entered. (You can decide the correct password)
*/
#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string input,password = "1Qaz2Wsx";

     
	do{
        cout << "Enter password: ";
        cin >> input;
        if (input == password) 
		{
            cout<<"Access granted!"<<endl;
            break;
        } 
		else 
		{
            cout<<"Incorrect password. Try again."<<endl;
        }
    }
	while(true);

    return 0;
}
/*Output:
Enter password: 1Qaz2WsX
Incorrect password. Try again.
Enter password: 1qaz2wsx
Incorrect password. Try again.
Enter password: 1Qaz2Wsx
Access granted!
*/