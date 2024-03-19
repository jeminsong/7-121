// Jemin Song
// CPSC 121L-02
// 3/18/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 7-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

class Bubble {
 public:
  double GetRadius() const { return radius_; };

  void SetRadius(double radius) { radius_ = radius; };

  double CalculateVolume() const {
    double volume = (4.0 / 3.0) * 3.1415 * (radius_ * radius_ * radius_);
    return volume;
  }

 private:
  double radius_;
};

Bubble CombineBubbles(const Bubble& b1, const Bubble& b2);