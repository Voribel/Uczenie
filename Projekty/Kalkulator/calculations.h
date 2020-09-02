#include <iostream>
#include <vector>
#include <utility>
#include <string>
#ifndef calculations_h
#define calculations_h

std::pair<std::vector<int>, std::vector<char>> parseInput(std::string);
void calculate(std::string);
void Operations(std::vector<int>, std::vector<char>,int);
#endif