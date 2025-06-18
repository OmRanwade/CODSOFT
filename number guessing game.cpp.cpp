#include<iostream>
#include<cstdlib>    //These lib is used for rand() and srand().
#include<ctime>      //these is used for time 

using namespace std;

int main()
{
    int secretnum ,guessnum ;
   
    srand(time(0));
    secretnum = rand() %100 +1;       // here generates a random number between 1 to 100.
    
    cout<<"Welcome to the Number Guessing game"<<endl;
    cout<<"guess the number between 1 to 100"<<endl;
    cin>>guessnum;

    if(guessnum==secretnum)
    {
        cout<<"Your Guess is Right !"<<endl;

    }
    else if(guessnum < secretnum)
    {
        cout<<"Sorry!! Your Guess was lower.Try Again"<<endl;
        cout<<"The coreect number was  "<<secretnum<<endl;

    }
    else{
        cout<<"Sorry!! Your Guess was higher.Try Again"<<endl;
        cout<<"The coreect number was  "<<secretnum<<endl;

    }
    return 0;

}
