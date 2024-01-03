//
// Created by Bence on 03/01/2024.
//

#pragma once
#include <array>
#include <iostream>

class TwoDArray {
 public:

  bool xCoordinateValid(int x) {

    if(maxX > x){
      p_currentX = &x;
      p_nextX = p_currentX++;
      return true;
    } else if(maxX == x){
      p_currentX = &x;
      return true;
    }

    return false;
  }

  bool yCoordinateValid(int y){

    for(int num : dataArray[*p_nextX]){
      std::cout << std::to_string(num) << ", ";
    }
    return true;
  }

  int* getNearbyElement(const int& x, const int& y, const int range){
    return nullptr;
  };

 private:
  int* p_currentX;
  int* p_nextX;
  const static int maxX = 3;
  const static int maxY = 12;

  const int dataArray[maxX][maxY] = {
      {2, 0, 4, 1241, 12, 5, 11, 1110, -42, 424, 1, 12323},
      {1, 3, 5, 7},
      {321, 320, 32, 3, 41241, -11, -12, -13, -66, -688}
  };
};
