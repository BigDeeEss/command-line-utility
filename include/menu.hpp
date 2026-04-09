/// @file menu.hpp
/// @brief Declares a menu function

#pragma once

#include <istream>

/// @brief Displays a menu and gets choice from user    
/// @param input Input stream to read user choice from
/// @return Choice as entered by user
char menu(std::istream& input);
