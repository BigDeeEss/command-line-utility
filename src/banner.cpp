/// @file banner.cpp
/// @brief Implements a banner function: displays a welcome message

#include <banner.hpp>

std::stringstream banner() {
    std::stringstream ss;
    ss << "Welcome to the Command Line Utility!\n";
    return ss;
}