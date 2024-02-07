// main.cpp
#include <iostream>
#include "playerinfo.h"


int main () {
    
   Player player;

   std::cout << "Enter the height of the player." << std::endl;
   std::cin >> player.height;

   std::cout << "Enter the weight of the player." << std::endl;
   std::cin >> player.weight;

   std::cout << "Stats info: " << player.StatsInfo() << std::endl;

   return 0;
}