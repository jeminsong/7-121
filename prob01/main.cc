// Jemin Song
// CPSC 121L-02
// 3/18/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 7-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iomanip>
#include <iostream>

#include "bubble.h"

int main() {
  Bubble bubble1{};
  Bubble bubble2{};
  double radius1 = 0.0;
  double radius2 = 0.0;
  std::cout << "Please enter the radius of the first bubble: ";
  std::cin >> radius1;

  bubble1.SetRadius(radius1);

  std::cout << "Please enter the radius of the second bubble: ";
  std::cin >> radius2;

  bubble2.SetRadius(radius2);

  Bubble combined{};
  combined = CombineBubbles(bubble1, bubble2);
  double volume = 0.0;
  volume = combined.CalculateVolume();

  std::cout
      << "The bubbles have now combined and created a bubble with the volume "
         "of: "
      << std::fixed << std::setprecision(2) << volume << std::endl;
  return 0;
}
