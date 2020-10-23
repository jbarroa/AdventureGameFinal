#include <string> 
#include "Map.h"

using namespace std;
class Player{
  public: 

  //getters and setters
  int id;
  int getId();
  void setId(int id);
    
  string playerName;
  string getPlayerName();
  void setPlayerName(string playerName);

  string school;
  string getSchool();
  void setSchool(string school);

  int points;
  int getPoints();
  void setPoints(int points);

  void display();
  
  int task1Points;
  int getTask1Points();
  void setTask1Points(int task1Points);

  int task2Points;
  int getTask2Points();
  void setTask2Points(int task2Points); 

  int task3Points;
  int getTask3Points();
  void setTask3Points(int task3Points);

  void SetupTask(string filename);
  void pDisplay();
  bool isLegalMove(int row, int column);
  void move(char playerMove);



  Map pMap;
  bool mapOver = false;
  int pRow;
  int pColumn;
  char pElement;
  int getTotalPoints();

  private:
    int mId;
    string mPlayerName;
    string mSchool;
    int mPoints;

    int mTask1Points = 0;
    int mTask2Points = 0;
    int mTask3Points = 0;





};