/*
Angelica Galianese, Jasmine Barroa, Steni Stephan
Triwizard Tournament
Have the user enter their name and they are drawn in for the Triwizard Tournament with two other schools depending on the school that they choose. 
Have them run through 3 different mazes while trying to find certain objects depending on the task. They will also run into various monsters along the way. 
Allocate points depending on how well they complete the tasks. 

Task 1 - retrieve the golden egg (dragon)
Task 2 - retrieve what has been taken from you (grindylow)
Task 3 - retrieve the triwizard cup (sphinx, fluffy, boggart, skrewt)
*/

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "Player.h"

using namespace std;

//Introduction functions : Intro, Instructions, Player Info
void introduction();
void introduction2();
void instructions();
void getPlayerInfo(Player &p1, Player &p2, Player &p3);
void displayPlayers(Player p1, Player p2, Player p3);

//Tasks Functions
void TaskOne(Player& p, Player& p2, Player& p3, bool& task);
void TaskTwo(Player& p, Player& p2, Player& p3, bool& task);
void TaskThree(Player& p, Player& p2, Player& p3, bool& task);

//Display Points functions
void displayPoints(Player &p1, Player &p2, Player &p3);
void displayFinalPoints(Player &p1, Player &p2, Player &p3);

int main() {
  //Display Triwizard Tournament introduction
  introduction();

  //ask the user their name and what school they go to
  Player p1, p2, p3;
  getPlayerInfo(p1, p2, p3);

  //Display Goblet of Fire and contestants 
  displayPlayers(p1, p2, p3);

  //Start game or view instructions
  introduction2();


  bool task1finished = false, task2finished = false, task3finished = false;

  //Task 1  
  do {
    TaskOne(p1, p2, p3, task1finished);
    this_thread::sleep_for(chrono::milliseconds(2000));
    //task1finished = true;
  } while (!task1finished);

  //display player standings
  displayPoints(p1, p2, p3);
  this_thread::sleep_for(chrono::milliseconds(5000));

  //Task 2
  do {
    TaskTwo(p1, p2, p3, task2finished);
    this_thread::sleep_for(chrono::milliseconds(2000));
    //task2finished = true;
  } while (!task2finished);

  //display player standings
  displayPoints(p1, p2, p3);
  this_thread::sleep_for(chrono::milliseconds(7000));

  //Task 3
  do {
    TaskThree(p1, p2, p3, task3finished);
    this_thread::sleep_for(chrono::milliseconds(2000));
    //task3finished = true;
  } while (!task3finished);
  
  displayPoints(p1, p2, p3);
  this_thread::sleep_for(chrono::milliseconds(5000));
  
  //code a tie  breaker
  displayFinalPoints(p1, p2, p3);

}