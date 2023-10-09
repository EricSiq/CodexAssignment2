/*Q3) Write a program that uses manipulators to format and display the current date and time.
*/
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
int main()
{
    time_t currentTime=time(nullptr);
    tm *localTime=localtime(&currentTime);

    cout<<"Current Date: ";
    cout<<put_time(localTime, "%d-%m-%Y")<<endl;
    cout<<"Current Time: ";
    cout<<put_time(localTime, "%H:%M:%S")<<endl;

    return 0;
}
/*Output:
Current Date: 09-10-2023
Current Time: 19:42:58
*/
