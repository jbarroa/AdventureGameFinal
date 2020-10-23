#include<iostream>
#include <thread>
#include "Player.h"
using namespace std;

void bonusRound(Player &p1) {
  string vname;
  cout << "Welcome to the Bonus Round! We must break the tie to declare our Triwizard Champion!" << endl << endl;
  this_thread::sleep_for(chrono::milliseconds(2000));
  cout << "Answer this question correctly and you will recieve 100 points! However, if you answer incorrectly you will lose 100 points!" << endl << endl;
  cout << "What is Lord Voldemort's full name? ";
  cin.ignore();
  getline(cin, vname);
  if(vname == "Tom Marvolo Riddle" || vname == "tom marvolo riddle") {
    cout << "Congratulations! You received 100 points!" << endl;
    int newTotal = p1.getPoints() + 100;
    p1.setPoints(newTotal);
  }
  else
  {
    cout << "WRONG! You lost 100 points!" << endl;
    int newTotal = p1.getPoints() - 100;
    p1.setPoints(newTotal);
  }

  this_thread::sleep_for(chrono::milliseconds(5000));
}

void displayPoints(Player &p1, Player &p2, Player &p3) {
  cout << "========== STANDINGS ==========" << endl;
  p1.display();
  p2.display();
  p3.display();
} 

void displayFinalPoints(Player &p1, Player &p2, Player &p3) {

/*  p1.setPoints(1000);
  cout << "Should be 1000: " << p1.getPoints() << endl;
  p2.setPoints(1000);
  p3.setPoints(500);*/
  
  int firstPoints = p1.getTotalPoints(), secondPoints = p2.getTotalPoints(),
  thirdPoints = p3.getTotalPoints();
  
  //Check for ties from player and computer
  if(firstPoints == secondPoints){
      cout << "You are tied with " << p2.getPlayerName() << endl;
      bonusRound(p1);
      firstPoints = p1.getPoints();
  }
  if(firstPoints == thirdPoints){
      cout << "You are tied with " << p3.getPlayerName() << endl;
      bonusRound(p1);
      firstPoints = p1.getPoints();
  }

  system("clear");
  cout << R"(
       ___________
      '._==_==_=_.'
      .-\:      /-.
     | (|:.     |) |
      '-|:.     |-'
        \::.    /
         '::. .'
           ) (
         _.' '._
        `"""""""`
  )";

  cout << "\nCongratualations! You have finished the Triwizard Tournament.\n\nIn THIRD place with ";

  if (firstPoints < secondPoints && firstPoints < thirdPoints) {
    //Player 1 is in last
    
    cout << firstPoints << " points is " << p1.getPlayerName() << " from " << p1.getSchool() << "! \n\nIn SECOND place with ";
    if (secondPoints > thirdPoints) {
      //Player 3 is in 2nd
      //Player 2 is in 1st
        cout << thirdPoints << " points is " << p3.getPlayerName() << " from " << p3.getSchool() << "! \n\nFinally, in FIRST place with " << secondPoints << " points is " << p2.getPlayerName() << " from " << p2.getSchool() << "! \n\nCongratualations to all of our players!";
      }
    if (secondPoints < thirdPoints) {
      //Player 2 is in 2nd
      //Player 3 is in 1st
        cout << secondPoints << " points is " << p2.getPlayerName() << " from " << p3.getSchool() << "! \n\nFinally, in FIRST place with " << thirdPoints << " points is " << p3.getPlayerName() << " from " << p3.getSchool() << "! \n\nCongratualations to all of our players!";
    }
  }// end of p1 in third

  if (firstPoints > secondPoints && secondPoints < thirdPoints) {
    //Player 2 is in last
    cout << secondPoints << " points is " << p2.getPlayerName() << " from " << p2.getSchool() << "! \n\nIn SECOND place with ";
    if (firstPoints > thirdPoints) {
      //Player 3 is in 2nd
      //Player 1 is 1st
      cout << thirdPoints << " points is " << p3.getPlayerName() << " from " << p3.getSchool() << "! \n\nFinally, in FIRST place with " << firstPoints << " points is " << p1.getPlayerName() << " from " << p1.getSchool() << "! \n\nCongratualations to all of our players!";
    }
    if (firstPoints < thirdPoints) {
      //Player 1 is in 2nd
      //Player 3 is in 1st
      cout << firstPoints << " points is " << p1.getPlayerName() << " from " << p1.getSchool() << "! \n\nFinally, in FIRST place with " << thirdPoints << " points is " << p3.getPlayerName() << " from " << p3.getSchool() << "! \n\nCongratualations to all of our players!";
    }
  }
  
  if (firstPoints > thirdPoints && thirdPoints < secondPoints) {
    //Player 3 is in last
    cout << thirdPoints << " points is " << p3.getPlayerName() << " from " << p3.getSchool() << "! \n\nIn SECOND place with ";
    if (firstPoints > secondPoints) {
      //Player 2 is 2nd
      //Player 1 is 1st
      cout << secondPoints << " points is " << p2.getPlayerName() << " from " << p2.getSchool() << "! \n\nFinally, in FIRST place with " << firstPoints << " points is " << p1.getPlayerName() << " from " << p1.getSchool() << "! \n\nCongratualations to all of our players!";
    }
    if (secondPoints > firstPoints) {
      //Player 1 is 2nd
      //Player 2 is 1st
      cout << firstPoints << " points is " << p1.getPlayerName() << " from " << p1.getSchool() << "! \n\nFinally, in FIRST place with " << secondPoints << " points is " << p2.getPlayerName() << " from " << p2.getSchool() << "! \n\nCongratualations to all of our players!";
    }
  }
}