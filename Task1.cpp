#include <iostream>
#include <chrono>
#include <string>
#include <cstdlib>
#include <thread>

#include "Player.h"

using namespace std;

void encounterDragon() {
  system("clear");
  //generate a random dragon
  cout << "You will fight a ...." << endl;
  this_thread::sleep_for(chrono::milliseconds(2000));
  /* generate secret number between 1 and 4: */
    srand (time(NULL));
    int randNum = rand() % 4 + 1;
    switch (randNum) {
      case 1:
        cout << "Swedish Short-Snout!" << endl;
        break;
      case 2:
        cout << "Common Welsh Green!" << endl;
        break;
      case 3:
        cout << "Chinese Fireball!" << endl;
        break;
      case 4: 
        cout << "Hungarian Horntail!" << endl;
        break;
    }
    cout << R"(
                 ___====-_  _-====___
           _--^^^#####//      \\#####^^^--_
        _-^##########// (    ) \\##########^-_
       -############//  |\^^/|  \\############-
     _/############//   (@::@)   \\############\_
    /#############((     \\//     ))#############\
   -###############\\    (oo)    //###############-
  -#################\\  / VV \  //#################-
 -###################\\/      \//###################-
_#/|##########/\######(   /\   )######/\##########|\#_
|/ |#/\#/\#/\/  \#/\##\  |  |  /##/\#/  \/\#/\#/\#| \|
`  |/  V  V  `   V  \#\| |  | |/#/  V   '  V  V  \|  '
   `   `  `      `   / | |  | | \   '      '  '   '
                    (  | |  | |  )
                   __\ | |  | | /__
                  (vvv(VVV)(VVV)vvv)
    )" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
}

void fightDragon(Player& player) {
  string choice = "0";

  do{
    cout << "How will you fight the dragon?" << endl;
    cout << "1. Use Transfiguration spell to change a rock into a dog to distract the dragon." << endl;
    cout << "2. Enchant the dragon to sleep." << endl;
    cout << "3. Used Conjunctivitis Curse to blind the dragon." << endl;
    cout<< "4. Used a Summoning Charm to bring your broom." << endl;
    cout << "\nEnter a number between 1-4 to choose how you will fight the dragon: ";
    cin.clear();
    cin >> choice;
    this_thread::sleep_for(chrono::milliseconds(2000));

    if(choice == "1"){
      cout << "\nYou was partially successful; the dragon took the bait, and you went for the Golden Egg. Halfway through, the dragon turned its attention back to you, and burned your face. You retrieved the egg, however, and passed the task." << endl << endl;
      player.setTask1Points(35);
    }else if(choice == "2"){
      cout << "\nWhile retrieving the golden egg, the dragon snored and let out a jet of flame that set your clothes alight. You extinguished the flames and retrieved your egg." << endl << endl;
      player.setTask1Points(45);    
    }else if(choice == "3"){
      cout << "\nYou take the egg, but the dragon stumbled around and smashed half of its real eggs." << endl << endl;
      player.setTask1Points(25);    
    }else if(choice == "4"){
      cout << "\nYou maneuvered  past the dragon to retrieve your egg. Though slashed on the shoulder, which took off points, you were successful." << endl;
      player.setTask1Points(40);  
    }else{
      cout << "\nPlease enter 1-4 to choose your action." << endl << endl;
      choice = "0";
    }
  }while(choice == "0");
  this_thread::sleep_for(chrono::milliseconds(5000));
} //end of fight dragon

void TaskOne(Player& p, Player& p2, Player& p3, bool& task){
  system("clear");
  cout << R"(
          + ,'"`. + 
        +  /     \  +
          :       :
          :       :
           `.___,' 
  )";

  cout << "\nToday is the first day of the Triwizard Tournament! " << endl;
  cout << "Your task is to retrieve a dragon's egg.\n" << endl;
  
  char play = 'n';
  cout << "Press any key to continue: ";
  cin >> play;
  do{
    p.SetupTask("task1map.txt");
    char playerMove;

    do {
      p.pDisplay();
      cout << "Next Move:";
      cin >> playerMove;
      p.move(playerMove);

    } while(!p.mapOver);

    system("clear");
      

    //have user go through the map

    int fightChoice;
    //have them click on the egg
    //have user encounter the dragon
    encounterDragon();
    

    //have the user choose a method to fight the dragon
    fightDragon(p);
    system("clear");
    //receive the egg and get a score

    task = true;
    play = 'n';
    p.mapOver = false;
    
  } while(play == 'y');

    srand (time(NULL));
    int points2 = rand() % 4 + 1;
    int points3 = rand() % 4 + 1;

    switch (points2) {
      case 1:
        p2.setTask1Points(25);
        break;
      case 2:
        p2.setTask1Points(35);
        break;
      case 3:
        p2.setTask1Points(45);
        break;
      case 4:
        p2.setTask1Points(50);
        break;
    }

    switch (points3) {
      case 1:
        p3.setTask1Points(25);
        break;
      case 2:
        p3.setTask1Points(35);
        break;
      case 3:
        p3.setTask1Points(45);
        break;
      case 4:
        p3.setTask1Points(50);
        break;
    }

} 