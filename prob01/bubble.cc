// Jemin Song
// CPSC 121L-02
// 3/18/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 7-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "bubble.h"

Bubble CombineBubbles(const Bubble& b1, const Bubble& b2) {
  Bubble combined_bubble{};
  double newradius = b1.GetRadius() + b2.GetRadius();
  combined_bubble.SetRadius(newradius);
  return combined_bubble;
}