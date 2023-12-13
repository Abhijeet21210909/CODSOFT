#include<iostream>
#include<time.h>
using namespace std;

int main(){

    srand(time(0));

    int num = rand() % 100;

    int guess;
    while(true)
    {
        cout<<"Guess the number : ";
        cin>>guess;

        if(guess>num){
            cout<<"Number guessed is larger then the actual number "<<endl;
        }
        else if(guess<num){
            cout<<"Number guessed is smaller then the actual number "<<endl;
        }
        else{
            break;
        }
    }
    cout<<"You have successfully guessed the number"<<endl;
}