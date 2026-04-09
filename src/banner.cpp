/// @file banner.cpp
/// @brief Implements a banner function: displays a welcome message

#include "banner.hpp"


std::stringstream banner() {
    // Create a stringstream to hold the banner message
    std::stringstream ss{"Welcome to the Command Line Utility!\n"};
    return ss;
}