#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main() {


int user = 0;
 int user2 =0;
 
string rock = "pick 1 for ROCK\n";
string paper = "pick 2 for PAPER\n";
string scissors = "pick 3 for SCISSORS\n";
  

cout<<"WELCOME TO ROCK PAPER & SCISSORS!" <<endl;
cout <<"ID: 32199 Name: M zubair raza"<<endl;

cout << rock;
cout << paper;
cout << scissors;

cout << "Pick player one option:";
cin >> user;
cout << "pick player two option";
cin >> user2;
  
cout << " player one  ";

  switch(user){
    case 1 :
    cout << rock;
    	break;
    case 2 :
    cout << paper;
    	break;
    case 3 :
     cout << scissors;
    	break;
    default :
    	cout << "Invalid!\n";
  }
  
  //COMPUTER
cout << "player two choice ";
    switch(user2){
    case 1 :
    cout << rock;
    	break;
    case 2 :
    cout << paper;
    	break;
    case 3 :
    cout << scissors;
    	break;
    default :
    cout << "Invalid Option\n";
  }
  
  
  //Battle Outcome
  if(user == user2){
    cout << "Tied\n";
  }
  else if(user == 1 && user2 == 3){
    cout << "player one Won!\n";
  }
  else if(user == 3 && user2 == 2){
    cout << "player one Won!\n";
  }
  else if(user == 2 && user2 == 1){
    cout << "player one Won!\n";
  }
  else{
    cout << "player two  Won!\n";
  }
  
}
