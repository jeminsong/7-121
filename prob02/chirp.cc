// Jemin Song
// CPSC 121L-02
// 3/18/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 7-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "chirp.h"

Chirp::Chirp() : message_(""), likes_(0) {}

Chirp::Chirp(const std::string& message) : message_(message), likes_(0) {}

Chirp::Chirp(const std::string& message, int likes)
    : message_(message), likes_(likes) {}

void Chirp::SetMessage(const std::string& message) { message_ = message; }

std::string Chirp::GetMessage() const { return message_; }

int Chirp::GetLikes() const { return likes_; }

void Chirp::AddLike() { likes_++; }

void Chirp::AddLike(int count) { likes_ += count; }
