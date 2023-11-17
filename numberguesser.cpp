#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
srand(time(0));
int randomNumber = rand() % 101;
int count=0;
int guess;
cout<<"Guess a number between 0 and 100"<<endl;
do{
    count++;
    cout<<"Enter your guess"<<endl;
    cin>>guess;
    if(guess==randomNumber){
        cout<<"You guessed the correct number in "<<count<<" tries."<<endl;
    }
    else if(guess>randomNumber){
        cout<<"Guess is higher than the number."<<endl;
    }
    else if(guess<randomNumber){
        cout<<"Guess is lesser than the number."<<endl;
    }
}while(guess!=randomNumber);
    return 0;
}
