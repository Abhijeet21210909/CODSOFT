#include<iostream>
#include<time.h>
using namespace std;

int main(){
    
    // int N = 100;
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
}