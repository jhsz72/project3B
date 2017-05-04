#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include "build_bTree.h"
#include "Morse.h"
using namespace std;

void build_tree(string file, morse_code& tree);
map <char, string> populateMap(); //Populate map for english char and morse code eqivilent
string encodeMessage(map <char, string> map, string message); //Encode message using morse code
string decodeMessage(morse_code tree, string message); //Decode message from morse code into plain text