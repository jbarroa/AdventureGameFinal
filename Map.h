#include<iostream>
#include<vector>
#include<string>

using namespace std;

using Map2d = vector<vector<char> >;

class Map 
{
  private:
    int mWidth = 0;
    int mHeight = 0;
    Map2d map;
    
  public:
    Map();
    void setMap(string filename);
    void Display();
    int getWidth();
    int getHeight();
    char getElement(int row, int column);
    void setElement(int row, int column, char element);
    vector<char> & operator[](int row);
};