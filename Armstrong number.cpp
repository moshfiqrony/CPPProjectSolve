#include <iostream>

using namespace std;

int main()
{
    int num1,num2,rem,arm=0;

    cout << "Enter number: ";
    cin >> num1;

    num2=num1;

    while(num1>0)
    {
        rem = num1%10;
        arm += rem*rem*rem;
        num1 /= 10;
    }
    if(arm==num2)
    {
        cout << "Number is An Armstrong number.";
    }
    else
    {
        cout << "Number is not An Armstrong number.";
    }
}
