#include<iostream>
using namespace std;
int main()
{
    int number1,number2;
    int choice;
    cout<<"Simple Calculator Menu :"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"Enter choice =";
    cin>>choice;
    cout<<"Enter number 1=";
    cin>>number1;
    cout<<"Enter number 2=";
    cin>>number2;

    switch (choice)
    {
    case 1:
    
        cout<<"Addition="<<number1 + number2<<endl;
        break;
    case 2:
        cout<<"Subtraction="<<number1 - number2<<endl;
        break;
    case 3:
        cout<<"multiplication="<<number1 * number2<<endl;
        break;
    case 4:
        if(number2!=0)
        {
            cout<<"Division="<<number1 / number2<<endl;
        }
        else
        {
            cout<<"Division by zero is not possible"<<endl;
        }
        break;
    
    default:
        cout<<"Incorrect enter choice"<<endl;
        break;
    }
    return 0;

}