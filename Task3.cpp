#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "Player.h"

using namespace std;

bool encouterSphinx() {

  char play = 'n';
  cout << "Press any key to continue: ";
  cin >> play;


  
  string guess;

  do{
    cout << "You have encountered a sphinx! In order to pass, you have three tries to answer her riddle..." << endl;
    cout << R"(
                              .sSSSSSSSs
                              sSS=""^^^"s
                  /\       , /  \_\_\|_/_)
                 /';;     /| \\\/.-. .-./
                / \;|    /. \,S'  -   - |
               / -.;|    | '.SS     _|  ;
              ; '-.;\,   |'-.SS\   __  /S
              | _  ';\\.  \' SSS\_____/SS
              |  '- ';\\.  \_SSS[_____]SS
              \ '--.-';;-. __SSS/\    SSS
               \  .--' ';;'.=SSS`\\_\_SSS
                `._ .-'` _';;..=.=.=.\.=\
                   ;-._-'  _.;\.=.=.=.|.=|
         ,     _.-'    `"=._  ;\=.=__/__/
         )\ .'`   __        ".;|.=.=.=./
         (_\   .-`  '.   |    \/=.=.=/`
          /\\         \-,|     |.--'|
         /  \`,       //  \    | |  |
        ( (__) )  _.-'--,  \   | |  '--,
         ;----' -'--,__}}}  \  '--, __}}}
         \_________}}}       \___}}}
  )";
    cout << "\nHow many months of the year have 28 days?" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "1. Only february." << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "2. September, April, June, and November." << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "3. All of them!" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cin >> guess;
    if (guess == "3") {
      cout << "Congratulations! The sphinx lets you pass!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      return true;
    } else if(guess == "1" || guess == "2"){
      cout << "The correct answer is all months have 28 days. You have two more chances." << endl; 
      this_thread::sleep_for(chrono::milliseconds(2000));
    }else{
      cout << "Please enter a number 1-3" << endl;
      guess = "0";
      this_thread::sleep_for(chrono::milliseconds(2000));
    }
    system("clear");
  }while(guess == "0");

  do{
      cout << "\nWhat goes away as soon as you talk about it?" << endl;
      //this_thread::sleep_for(chrono::milliseconds(1000));
      cout << "1. Silence." << endl;
      //this_thread::sleep_for(chrono::milliseconds(1000));
      cout << "2. An idea." << endl;
      //this_thread::sleep_for(chrono::milliseconds(1000));
      cout << "3. A Patronum" << endl;
      //this_thread::sleep_for(chrono::milliseconds(1000));
      cin >> guess;

    if (guess == "1") {
      cout << "Congratulations! The sphinx lets you pass!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      return true;
    } else if(guess == "2" || guess == "3"){
      cout << "The correct answer is silence. You have one more chance." << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
    }else{
      cout << "Please enter a number 1-3" << endl;
      guess = "0";
      this_thread::sleep_for(chrono::milliseconds(2000));
    }
    system("clear");
  }while(guess == "0");


  do{
    cout << "\nWhat has a face and two hands but no arms or legs??" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "1. A dog." << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "2. A clock." << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "3. God" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cin >> guess;
    if (guess == "2") {
      cout << "Congratulations! The sphinx lets you pass!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      return true;
    } else if(guess == "1" || guess == "3"){
      cout << "The correct answer is a clock. You have failed and must restart the maze." << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
    }else{
      cout << "Please enter a number 1-3" << endl;
      guess = "0";
      this_thread::sleep_for(chrono::milliseconds(2000));
    }
    system("clear");
  }while(guess == "0");


  return false;

}

void encounterBoggart(){
  string choice = "0";
  bool done;
  cout << "A boggart has appeared!" << endl;

  do{
    
    cout << R"(
  .-._                                                   _,-,
    `._`-._                                           _,-'_,'
      `._ `-._                                   _,-' _,'
          `._  `-._        __.-----.__        _,-'  _,'
            `._   `#==="""           """===#'   _,'
                `._/)  ._               _.  (\_,'
                )*'     **.__     __.**     '*( 
                #  .==..__  ""   ""  __..==,  # 
                #   `"._(_).       .(_)_."'   #
    )";
  this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "Fight the boggart:" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "1. Engorgio" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "2. Expecto Patronum" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "3. Ridikkulus" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "4. Avis" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "5. Erecto" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "Enter a number between 1-5 to choose your spell: ";
    cin >> choice;

    //Engorgio: causes an object or person to swell to a greater size
    //Expecto Patronum: Patronus charm
    //Ridikkulus: banishes boggarts
    //Avis: conjures a flock of small birds
    //Erecto: erects a tent automatically
    
    if(choice == "1"){
      cout << "Engorgio!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      cout << "Great.. you just made the boggart bigger!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
    }else if(choice == "2"){
      cout << "Expecto Patronum!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      cout << "You have a very nice patronous, but this isn't a dementor. Try again!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
    }else if(choice == "3"){
      cout << "Ridikkulus!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      cout << "The boggart has disappeared! Great job! You can move on with the maze." << endl;
      done = true;
      this_thread::sleep_for(chrono::milliseconds(2000));
    }else if(choice == "4"){
      cout << "Avis!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      cout << "A flock of birds... are you serious right now? This is not the time for games." << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
    }else if(choice == "5"){
      cout << "Erecto!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      cout << "Nice tent. Wanna get back to fighting the boggart now?" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
    }else{
      cout << "You're not scared, are you? Choose a spell!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
    }
  system("clear");
  }while(!done);
}

void encounterSkrewt() {
  string choice = "0";
  bool done;
  cout << "A Blast-Ended Skrewt has appeared!" << endl;

  this_thread::sleep_for(chrono::milliseconds(2000));
  do{
    cout << R"(
    /|  |\            /|  |\
    /|  |\            /|  |\
  / |  | \          / |  | \
  | |  | |          | |  | |
  \  \/  /  __  __  \  \/  /
    \    /  / /  \ \  \    /
    \  /   \ \__/ /   \  /
    \  /   /      \   \  /
    _ \ \__/ O    O \__/ / _
    \\ \___          ___/ //
  _  \\___/  ______  \___//  _
  \\  ----(          )----  //
  \\_____( ________ )_____//
    ~-----(          )-----~ _
    _____( ________ )_____  \\
    /,----(          )----  _//
  //     (  ______  )     /  \
  ~       \        /      \  /
            \  __  /       / /
            \    /       / /
              \   \      / /
              \   ~----~ /
                \________/
    )";
    cout << "Fight the skrewt:" << endl;
    cout << "1. Expelliarmus" << endl;
    cout << "2. Incendio" << endl;
    cout << "3. Stupefy" << endl;
    cout << "4. Wingardium Leviosa" << endl;
    cout << "5. Apparate" << endl;
    cout << "Enter a number between 1-5 to choose your spell: ";
    cin >> choice;

    //Expelliarmus: used to disarm another wizard
    //Incendio: Creates fire
    //Stupefy: stunned an object
    //Wingardium Leviosa: levitate object
    //Apparate: teleports an object
    
    if(choice == "1"){
      cout << "Expelliarmus!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      cout << "Well that would disarm a wizard, but not quite a skrewt..." << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
    }else if(choice == "2"){
      cout << "Incendio!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      cout << "You have lit the skrewt on fire  You can escape now" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      done = true;
    }else if(choice == "3"){
      cout << "Stupefy!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      cout << "The skrewt has been stunned. You are able to escape" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      done = true;
    }else if(choice == "4"){
      cout << "Wingardium Leviosa!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      cout << "The skrewt is currently levitating, but try another spell to get away." << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
    }else if(choice == "5"){
      cout << "Apparate!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      cout << "You have teleported the skrewt somewhere else." << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      done = true;
    }else{
      cout << "The skrewt is coming closer... choose a spell!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
    }
    system("clear");
  }while(!done);
}

bool encounterFluffy(Player& p){
  int count = 0;
  string choice = "0";
  bool done = false;
  cout << "Fluffy the three-headed dog has appeared!" << endl;
  this_thread::sleep_for(chrono::milliseconds(2000));
  do{
    cout << R"(
                              /\_/\____,
                    ,___/\_/\ \  ~     /
                    \     ~  \ )   XXX
                      XXX     /    /\_/\___,
                        \o-o/-o-o/   ~    /
                          ) /     \    XXX
                        _|    / \ \_/
                      ,-/   _  \_/   \
                    / (   /____,__|  )
                    (  |_ (    )  \) _|
                  _/ _)   \   \__/   (_
                  (,-(,(,(,/      \,),),)
    )";
    cout << "Get around Fluffy: " << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "1. Impedimenta" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "2. Deprimo" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "3. Crucio" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "4. Confundo" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "5. Serpensortia" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "6. Pertrificus Totalus" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "Enter a number between 1-6 to choose your spell: ";
    cin >> choice;
    //Impedimenta: slows down a moving object
    //Deprimo: blasts a hole in the floor
    //Crucio: unforgivable curse :(
    //Confundo: causes confusion
    //Serpensortia: conjures a snake that attacks the victim
    //Pertrificus Totalus: victim is completely paralysed

    if(choice == "1"){
      cout << "Impedimenta!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      cout << "You've slowed Fluffy down for now..." << endl;
    }else if(choice == "2"){
      cout << "Deprimo!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      cout << "You blasted a hole underneath Fluffy. You are able to escape him." << endl;
      done = true;
    }else if(choice == "3"){
      if(count > 0){
        p.setTask1Points(0);
        p.setTask2Points(0);
        p.setTask3Points(0);
        cout << "You have 0 points now for using an illegal spell twice." << endl;
        return false;
      }
      cout << "Crucio!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      cout << "No! This is an illegal spell. If used again, you will lose all of your points and restart the maze." << endl;
      count++;
      this_thread::sleep_for(chrono::milliseconds(2000));
    }else if(choice == "4"){
      cout << "Confundo!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      cout << "Fluffy is very confused! You are now able to escape him." << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      done = true;
    }else if(choice == "5"){
      cout << "Serpensortia!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      cout << "Fluffy has dodged the snake you threw at him." << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
    }else if(choice == "6"){
      cout << "Pertrificus Totalus!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
      cout << "Fluffy is paralysed! You are able to escape him now!" << endl;
      done = true;
      this_thread::sleep_for(chrono::milliseconds(2000));
    }else{
      cout << "Do something to get around Fluffy!" << endl;
      this_thread::sleep_for(chrono::milliseconds(2000));
    }
    system("clear");
  }while(!done);
  return true;
}


void TaskThree(Player& p, Player& p2, Player& p3, bool& task){
  system("clear");
  cout << R"(
          ___________________________________  
        | _____ |   | ___ | ___ ___ | |   | |
        | |   | |_| |__ | |_| __|____ | | | |
        | | | |_________|__ |______ |___|_| |
        | |_|   | _______ |______ |   | ____|
        | ___ | |____ | |______ | |_| |____ |
        |___|_|____ | |   ___ | |________ | |
        |   ________| | |__ | |______ | | | |
        | | | ________| | __|____ | | | __| |
        |_| |__ |   | __|__ | ____| | |_| __|
        |   ____| | |____ | |__ |   |__ |__ |
        | |_______|_______|___|___|___|_____|
  )";

  cout << "\nToday is the third day of the Triwizard Tournament! " << endl;
  cout << "Your task is to complete the maze and retrieve the Triwizard Cup. " << endl;

  int move = 0; //number of moves throughout the maze 
  srand (time(NULL));
  int sphinx = rand() % 300 + 1;
  int boggart = rand() % 300 + 1;
  int fluffy = rand() % 300 + 1;
  int skrewt = rand() % 300 + 1;

  bool completed = true;
  //move throug the maze
  char play = 'n';
  cout << "\nPress any key to continue: ";
  cin >> play;
  do{
    p.SetupTask("task3map.txt");
    char playerMove;

    do {
      p.pDisplay();
      //cout << "Moves: " << move << endl; 
      cout << "Next Move:";
      cin >> playerMove;
      p.move(playerMove);
      move++;
      //encounter 5 monsters
      if(move == sphinx){
        completed = encouterSphinx();
        //if false, return to the beginning of the maze
        if(!completed){
          cout << "Restarting the maze..." << endl;
          return;
        }
      }

      if(move == boggart){
        encounterBoggart();
      }
      
      if(move == skrewt){
        encounterSkrewt();
      }

      if(move == fluffy){
        completed = encounterFluffy(p);
        //if false, return to the beginning of the maze
        if(!completed){
          cout << "Restarting the maze..." << endl;
          return;
        }
      }
    } while(!p.mapOver);
      play = 'n';
  } while(play == 'y');
  system("clear");
  // encounterSkrewt();
  task = true;
  //calculate the scores based on moves made
  float p1score = 80.00 - (move/10.0);

  // prevent scores from being less than 0 and greater than 50
  if (p1score > 50) {
    p.setTask3Points(50);
  }
  
  if (p1score < 0) {
    p.setTask3Points(0);
  }

  //randomly generate scores for the npc
  srand (time(NULL));
  int p2moves = rand() % 50 + 30;
  int p3moves = rand() % 50 + 30;

  float p2score = 80.00 - (p2moves);
  float p3score = 80.00 - (p3moves);

  //set the scores
  p.setTask3Points(p1score);
  p2.setTask3Points(p2score);
  p3.setTask3Points(p3score);

}