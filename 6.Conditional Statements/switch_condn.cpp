#include<iostream>
using namespace std;
int main(){
    int day;
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;     
    switch (day)
    {
    case 1: cout << "Monday";
            break;
    case 2: cout << "Tuesday";
            break;
    case 3: cout << "Wednesday";
            break;
    case 4: cout << "thursday";
            break;
    case 5: cout << "Friday";
            break;
    case 6: cout << "Saturday";
            break;
    case 7: cout << "Sunday";
            break;
    default: cout<<"Invalid";
            break;
    }
    return 0;
}