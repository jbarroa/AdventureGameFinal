#include<iostream>
#include <string>
#include<fstream>
#include<istream>
#include "Map.h"

using namespace std;
    
Map::Map() : mWidth(0), mHeight(0) {}

void Map::setMap(string filename) {
  std::ifstream fp(filename);

  auto to_next_line = [&fp]() {
    int c;
    do
      c = fp.get();
    while (c != '\n' && c != EOF);
  };
    
  fp >> mWidth;
  fp >> mHeight;
  to_next_line();
    
  map.clear();
  map.resize(mHeight);
  for (auto & row : map)
    row.resize(mWidth, 0);
    
  for (int i = mHeight - 1; i >= 0; i--)
  {
    for (int j = 0; j < mWidth; j++)
        map[i][j] = fp.get();
        to_next_line();
  }
    
  fp.close();
}

void Map::Display() {
    for (int i = mHeight - 1; i >= 0; i--)
    {
      for (auto cell : map[i])
        std::cout << cell;
        std::cout << "\n";
    }
}

int Map::getWidth() {
  return mWidth;
}

int Map::getHeight() {
  return mHeight;
}

char Map::getElement(int row, int column) {
  return map[row][column];
}

void Map::setElement(int row, int column, char element) {
  map[row][column] = element;
}

vector<char> & Map::operator[](int row) {
  return map[row];
}