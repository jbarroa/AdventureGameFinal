#include <iostream>
#include <string> 
#include <chrono>
#include <thread>
#include "Player.h"
using namespace std;

int fightGrindylow(){
  int points = 0;
  string choice = "0";
  cout << "A grindylow has appeared!" << endl;
  cout << "You can be awarded an additional 10 points if you properly defeat the grindylow." << endl;
  this_thread::sleep_for(chrono::milliseconds(1000));
  do{
      cout << R"(
          ,'""`.
         / _  _ \
         |(@)(@)|
         )  __  (
        /,'))((`.\
       (( ((  )) ))      
        `\ `)(' /'
  )";
      cout << "Fight the grindylow:" << endl;
      //this_thread::sleep_for(chrono::milliseconds(1000));
      cout << "1. Confringo" << endl;
      //this_thread::sleep_for(chrono::milliseconds(1000));
      cout << "2. Relashio" << endl;
      //this_thread::sleep_for(chrono::milliseconds(1000));
      cout << "3. Ridikkulus" << endl;
      //this_thread::sleep_for(chrono::milliseconds(1000));
      cout << "4. Stupefy" << endl;
      //this_thread::sleep_for(chrono::milliseconds(1000));
      cout << "Enter a number between 1-4 to choose your spell: ";
      cin >> choice;

      //Confringo: causes fireballs to shoot from the users wand
      //Relashio: forces something gripping the user to release
      //Ridikkulus: banishes boggarts
      //Stupefy: stuns an opponent

      if(choice == "1"){
        points -= 10;
        cout << "Confringo!" << endl;
        this_thread::sleep_for(chrono::milliseconds(2000));
        cout << "You tried to shoot a fireball underwater. This obviously did not work. Out of confusion, the grindylow released you and returned the Merpeople." << endl;
        cout << "You have been deducted 10 points." << endl;
        this_thread::sleep_for(chrono::milliseconds(2000));
      }else if(choice == "2"){
        points += 10;
        cout << "Relashio!" << endl;
        this_thread::sleep_for(chrono::milliseconds(2000));
        cout << "You have forced the grindylow off of you." << endl;
        cout << "You have earned 10 points for properly defeating the grindylow." << endl;
        this_thread::sleep_for(chrono::milliseconds(2000));
      }else if(choice == "3"){
        points -= 5;
        cout << "Ridikkulus!" << endl;
        this_thread::sleep_for(chrono::milliseconds(2000));
        cout << "How ridiculous! You tried to banish a different monster instead of a grindylow. The Merpeople called their grindylow back." << endl;
        cout << "You have been deducted 5 points" << endl;
        this_thread::sleep_for(chrono::milliseconds(2000));
      }else if(choice == "4"){
        points += 5;
        cout << "Stupefy!" << endl;
        this_thread::sleep_for(chrono::milliseconds(2000));
        cout << "You have stunned the grindylow and have escaped its grasp." << endl;
        cout << "You have earned 5 points for defeating the grindylow." << endl;
        this_thread::sleep_for(chrono::milliseconds(2000));
      }else{
        cout << "Seriously. Enter a spell. The grindylow is choking you." << endl;
        this_thread::sleep_for(chrono::milliseconds(2000));
        choice = "0";
      }
      system("clear");
  }while(choice == "0");
  
  return points;
}

void TaskTwo(Player& p, Player& p2, Player& p3, bool& task){
  system("clear");
  cout << R"(
                                 .-""-.
                              (___/\ \
            ,                 (|\ / ) )
           /(                _)_\=_/  (
     ,..__/ `\          ____(_/_ ` \   )
      `\    _/        _/---._/(_)_  `\ (
        '--\ `-.__..-'    /.    (_), |  )
            `._        ___\_____.'_| |__/
               `~----"`   `-.........'

  )";
  cout << "\nToday is the second day of the Triwizard Tournament! " << endl;
  cout << "Your task is to retrieve what has been taken from you from the Black Lake AND return to your starting point.\n" << endl;
  string continue_;
  cout << "Press any key to continue:";
  cin >> continue_;

  bool task2Finished = false, fought = false;
  int numMoves = 0, grindylowPoints = 0, points = 0;
  string choice = "0";

  system("clear");
  do{
    //give them n moves
    //if they run out of moves, they run out of time
    cout << "\nHow you like to retrive what has been stolen from you by the Merpeople?" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "1. Chew on Gillyweed" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "2. Bubblehead Charm" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "3. Turn into a shark" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "Enter a number between 1-3 to choose how you will swim in the lake: ";
    cin >> choice;
    /*Gillyweed - saves victim including an extra/will be given extra time - 10 extra moves
    Bubbleheard - successful/average time 
    Shark - not quite as successful/gets less time - take off 5 moves*/

    if(choice == "1"){
      system("clear");
      cout << R"(
        You chose Gillyweed!
                    W                             
                   WWW          
                   WWW          
                  WWWWW         
            W     WWWWW     W   
            WWW   WWWWW   WWW   
             WWW  WWWWW  WWW    
              WWW  WWW  WWW     
               WWW WWW WWW      
                 WWWWWWW        
              WWWW  |  WWWW     
                    |           
                    |
      )" << endl;
      cout << "You have 1000 moves to retreive what has been taken from you" << endl;
      numMoves = 1000;
    }else if(choice == "2"){
      system("clear");
      cout << R"(
      You chose the Bubblehead Charm!

              .--.
             /    \
             \    /
              '--'
                                .-""-.
                              /`      `\
                             ;          ;
             .-""-.          ;          ;
            /      \          \        /
           ;        ;          `'-..-'`
            \      /                      
             '-..-'
                            .-'""'-.
                          .'        '.
                         /            \
                        ;              ;           .--.
                        ;              ;          /    \
                         \            /           \    /
                          '.        .'             '--'
                            '-....-'
                    
      )" << endl; 
      cout << "You have 975 moves to retreive what has been taken from you" << endl;
      numMoves = 975;
    }else if(choice == "3"){
      system("clear");
      cout << R"(
      You chose the Shark!
        
         ,|
        / ;
       /  \
      : ,'(
      |( `.\
      : \  `\       \.
       \ `.         | `.
        \  `-._     ;   \
          \     ``-.'.. _ `._
          `. `-.            ```-...__
            .'`.        --..          ``-..____
          ,'.-'`,_-._            ((((   <o.   ,'
              `' `-.)``-._-...__````  ____.-'
                  ,'    _,'.--,---------'
              _.-' _..-'   ),'
              ``--''        `
      )" << endl;
      cout << "You have 950 moves to retreive what has been taken from you" << endl;
      numMoves = 950;
    }else{
      cout << "Enter a number 1-3" << endl;
    }
  }
  while(numMoves == 0);
  cout << "If you run out of moves, then you lose this challenge and must restart." << endl;
  //Have the user go through the maze to find their friend that is being held "hostage" by the mermaids
  char play = 'n';
  cout << "\nPress any key to continue: ";
  cin >> play;
  srand (time(NULL));
  //Generates a number between 100 - 220
  int randNum = rand() % 120 + 100;

  //Move 680-780
  int appear = 900 - randNum;
  
  do{
    p.SetupTask("task2map.txt");
    char playerMove;

    do {
      p.pDisplay();
      cout << "Number of moves left: " << numMoves << endl;
      cout << "Next Move: ";
      cin >> playerMove;
      p.move(playerMove);
      numMoves--;

      //randomly generate a chance to encounter a grindylow
      //will be at the end when the end is in sight
      //must use a spell to fight the grindylow
      //if the user fights a grindylow, can be awarded extra points
      if(numMoves == appear){
        grindylowPoints = fightGrindylow();
      }

    } while((!p.mapOver || p.pRow != 1 || p.pColumn !=1) && numMoves >= 0);
    system("clear");
    play = 'n';
    p.mapOver = false;
  }while(play == 'y');

  //they must retrieve their person

  if(numMoves < 0){//if the user runs out of moves, must restart the level
    cout << "Restarting task 2..." << endl;
  }else if(numMoves >= 0 && numMoves <= 100){//if the user completes the task within 45-60 moves, then they receive 30 points
    points = grindylowPoints + 30;
    task = true;
  }else{//if completed in less than 45 moves, they receive 40 points
    points = grindylowPoints + 40;
    task = true;
  }
  p.setTask2Points(points);
  
  //randomly generate p2 and p3's points from 30 to 50
  srand (time(NULL));
  int points2 = rand() % 20 + 30;
  int points3 = rand() % 20 + 30;

  p2.setTask2Points(points2);
  p3.setTask2Points(points3);
  //task ends 

}