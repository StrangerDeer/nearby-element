#include <iostream>
#include <string>
#include "TwoDArray.h"



void run(){
  TwoDArray array;
  int x, y;

  std::string input;

  std::cout << "X coordinate:" << std::endl;
  std::cin >> input;

  while(!array.xCoordinateValid(std::stoi(input))){
    std::cout << "X coordinate:" << std::endl;
    std::cin >> input;
  }

  x = std::stoi(input);

  std::cout << "Y coordinate:" << std::endl;
  std::cin >> input;

  while(!array.yCoordinateValid(std::stoi(input))){
    std::cout << "Y coordinate:" << std::endl;
    std::cin >> input;
  }


  std::cout << "Range:" << std::endl;
}

int main() {
  run();
  return 0;
}
