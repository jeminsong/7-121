// Jemin Song
// CPSC 121L-02
// 3/18/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 7-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>
#include <string>
#include <vector>

#include "chirp.h"

int main() {
  std::string input;
  const std::string prompt =
      "\nYou can \"chirp\" a new message to Chirper, "
      "or \"like\" an existing chirp, or \"exit\". What do you want to do? ";
  std::cout << prompt;
  std::getline(std::cin, input);
  std::vector<Chirp> chirps;

  while (input != "exit") {
    if (input == "chirp") {
      std::string user_message;
      std::cout << "What's your message? ";
      std::getline(std::cin, user_message);

      Chirp new_chirp(user_message);
      chirps.push_back(new_chirp);

    } else if (input == "like") {
      std::string user_index_string;
      std::cout << "Which index do you want to like? ";
      std::getline(std::cin, user_index_string);
      int user_index = std::stoi(user_index_string) - 1;
      if (user_index >= 0 && user_index < chirps.size()) {
        chirps[user_index].AddLike();
      } else {
        std::cout << "Invalid index.\n";
      }
    }

    std::cout << "Chirper has " << chirps.size() << " chirps:\n";
    for (size_t i = 0; i < chirps.size(); ++i) {
      std::cout << i + 1 << ". " << chirps[i].GetMessage() << " ("
                << chirps[i].GetLikes() << " likes)\n";
    }
    std::cout << prompt;
    std::getline(std::cin, input);
  }
  return 0;
}
