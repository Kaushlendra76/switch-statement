#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"enter the day";
    cin>>day;
    switch (day)
    {
    case  1:
           cout<<"sunday";                                             /* code */
        break;
    case 2:
    cout<<"Monday";
        break;
     case 3:
    cout<<"tuesday";
    break;
     case 4:
    cout<<"wednesday";
    break;
     case 5:
    cout<<"thursday";
    break;
     case 6:
    cout<<"friday";
    break;
     case 7:
    cout<<"saturday";
    break;
    default:
    cout<<"I am still learning.";
        break;
    }
    return 0;
}