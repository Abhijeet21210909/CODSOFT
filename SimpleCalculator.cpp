#include<iostream>
using namespace std;

int main(){

    int num1;
    int num2;

    cout<<"Enter number 1"<<endl;
    cin>>num1;
    cout<<"Enter number 2"<<endl;
    cin>>num2;

    cout<<"press 1 to add "<<endl;
    cout<<"press 2 to subtract "<<endl;
    cout<<"press 3 to multiply "<<endl;
    cout<<"press 4 to divide "<<endl;

    int choice;

    cin>>choice;

    if(choice==1){
        
        cout<<"Answer is "<<num1+num2<<endl;
    }
    else if(choice==2){
        
        cout<<"Answer is "<<num1-num2<<endl;
    }
    else if(choice==3){
        cout<<"Answer is "<<num1*num2<<endl;
    }
    else if(choice==4){
        cout<<"Answer is "<<num1/num2<<endl;
    }
    else{
        cout<<"Invalid choice"<<endl;
    }



}