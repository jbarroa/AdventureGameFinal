#include <iostream>
#include <string>
#include "Player.h"
#include <stdio.h>


using namespace std;

  int Player::getId() {
    return mId;
  }
  void Player::setId(int id) {
    mId = id;
  }

  int Player::getTotalPoints() {
    return mTask1Points + mTask2Points + mTask3Points;
  }
    
  string Player::getPlayerName() {
    return mPlayerName;
  }
  void Player::setPlayerName(string playerName) {
    mPlayerName = playerName;
  }

  string Player::getSchool() {
    return mSchool;
  }
  
  void Player::setSchool(string school) {
    mSchool = school;
  }

  int Player::getPoints() {
    return mPoints;
  }
  
  void Player::setPoints(int points) {
    mPoints = points;
  }

  void Player::display(){
    cout << getPlayerName() << " - " << getSchool() << endl; 
    cout << "__________________________________" << endl;

    int totalPoints = this->getTask1Points() + this->getTask2Points()  + this->getTask3Points();
    
    cout << "Total Points : " << totalPoints << endl;
    cout << "Task 1: " << this->getTask1Points() << endl;
    cout << "Task 2: " << this->getTask2Points() << endl;
    cout << "Task 3: " << this->getTask3Points() << "\n" << endl;

  }

  int Player::getTask1Points(){
    return mTask1Points;
  }
  void Player::setTask1Points(int taskPoints){
    mTask1Points = taskPoints;
  }

  int Player::getTask2Points(){
    return mTask2Points;
  }
  
  void Player::setTask2Points(int taskPoints){
    mTask2Points = taskPoints;
  }

  int Player::getTask3Points(){
    return mTask3Points;
  }
  
  void Player::setTask3Points(int taskPoints){
    mTask3Points = taskPoints;
  }

  void Player::SetupTask(string filename) {
    pMap.setMap(filename);
    pRow = 1;
    pColumn = 1;
    pElement = getPlayerName()[0];
    pMap.setElement(pRow, pColumn, pElement);
  }

  void Player::pDisplay() {

    system("clear");
    int width = pMap.getWidth();
    int height = pMap.getHeight();

    if(pRow < 8 && pColumn < 8)
    {
      for(int i = 8 ; i >= 0; i--)
      {
        for(int j = 0 ; j <= 16; j++)
        {
          cout << pMap[i][j];
        }
        cout << endl;
      }
    }
    else if ((height - 1 - pRow) < 8 && pColumn < 8)
    {
      for(int i = height - 1 ; i >= height - 9; i--)
      {
        for(int j = 0 ; j <= 16; j++)
        {
          cout << pMap[i][j];
        }
        cout << endl;
      }
    }
    else if ((height - 1 - pRow) < 8 && (width - 1 - pColumn) < 8)
    {
      for(int i = height - 1; i >= height - 9; i--)
      {
        for(int j = width - 17; j <= width - 1; j++)
        {
          cout << pMap[i][j];
        }
        cout << endl;
      }
    }
    else if (pRow < 8 && (width - 1 - pColumn) < 8)
    {
      for(int i = 8 ; i >=0; i--)
      {
        for(int j = width - 17; j <= width - 1; j++)
        {
          cout << pMap[i][j];
        }
        cout << endl;
      }
    }
    else if (pRow < 8)
    {
      for(int i = 8; i >=0; i--)
      {
        for (int j = pColumn - 8; j <= pColumn + 8 ; j++)
        {
          cout << pMap[i][j];
        }
        cout << endl;
      }
    }
    else if((height - 1 - pRow) < 8)
    {
      for (int i = height - 1; i >= height - 9; i--)
      {
        for(int j = pColumn - 8; j <= pColumn + 8; j++)
        {
          cout << pMap[i][j];
        }
        cout << endl;
      }
    }
    else if (pColumn < 8)
    {
      for (int i = pRow + 4; i >= pRow - 4; i--)
      {
        for(int j = 0; j <= 16; j++)
        {
          cout << pMap[i][j];
        }  
        cout << endl;
      }
    }
    else if((width - 1 - pColumn) < 8)
    {
      for (int i = pRow + 4; i >= pRow - 4 ; i--)
      {
        for (int j = width - 17; j <= width - 1; j++)
        {
          cout << pMap[i][j];
        }
        cout << endl;
      }
    }
    else
    {
      for( int i = pRow + 4 ; i >= pRow - 4 ; i--)
      {
        for(int j = pColumn - 8; j <= pColumn + 8; j++)
        {
          std::cout << pMap[i][j];
        }  
        std::cout << endl;
      }
    }

  }

  bool Player::isLegalMove(int row, int column) {
    if(pMap[row][column] == ' ' || pMap[row][column] == '*')
      return true;
    return false;
  }

  void Player::move(char playerMove) {

    switch(playerMove) {
      case 'a':
        if(isLegalMove(pRow, pColumn - 1) == true) {
          if(pMap[pRow][pColumn - 1] == '*') {
            pMap[pRow][pColumn - 1] = pElement;
            pMap[pRow][pColumn] = ' ';
            mapOver = true;
          }
          else
          {
            pMap[pRow][pColumn - 1] = pElement;
            pMap[pRow][pColumn] = ' ';
          }
          pColumn = pColumn - 1;
        }
        break;

      case 'd':
        if(isLegalMove(pRow, pColumn + 1) == true) {
          if(pMap[pRow][pColumn + 1] == '*') {
            pMap[pRow][pColumn + 1] = pElement;
            pMap[pRow][pColumn] = ' ';
            mapOver = true;
          }
          else 
          {
            pMap[pRow][pColumn + 1] = pElement;
            pMap[pRow][pColumn] = ' ';
          }
          pColumn = pColumn + 1;
        }
        break;

      case 's':
        if(isLegalMove(pRow - 1, pColumn) == true) {
          if(pMap[pRow - 1][pColumn] == '*') {
            pMap[pRow - 1][pColumn] = pElement;
            pMap[pRow][pColumn] = ' ';
            mapOver = true;
          }
          else
          {
            pMap[pRow - 1][pColumn] = pElement;
            pMap[pRow][pColumn] = ' ';
          }
          pRow = pRow - 1;
        }

        break;
      case 'w':
        if(isLegalMove(pRow + 1, pColumn) == true) {
          if(pMap[pRow + 1][pColumn] == '*') {
            pMap[pRow + 1][pColumn] = pElement;
            pMap[pRow][pColumn] = ' ';
            mapOver = true;
          }
          else 
          {
            pMap[pRow + 1][pColumn] = pElement;
            pMap[pRow][pColumn] = ' ';
          }
          pRow = pRow + 1;
        }

        break;
    }
  }