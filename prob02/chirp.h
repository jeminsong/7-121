// Jemin Song
// CPSC 121L-02
// 3/18/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 7-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#ifndef CHIRP_H
#define CHIRP_H

#include <string>

class Chirp {
 public:
  Chirp();
  explicit Chirp(const std::string& message);
  Chirp(const std::string& message, int likes);

  std::string GetMessage() const;
  void SetMessage(const std::string& message);
  void AddLike();
  void AddLike(int count);
  int GetLikes() const;

 private:
  std::string message_;
  int likes_;
};
#endif  // CHIRP_H