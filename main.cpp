#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include "build_bTree.h"
#include "Morse.h"
 #include <cstdlib>
using namespace std;

int main()
{

	morse_code tree;
	string encodedMessage; // morse code encoded message
	string originalMessage; // original message to be encoded or after decoding
	map <char, string> morseMap = populateMap();

	string file_name = "morse.txt";
	cout << "What is the file you would like to read from?\n--->  ";
	cin >> file_name;
	build_tree(file_name, tree);
	/* encodes a message to morse code */
	cout << "Enter a message to encode using morse code:\n--->  ";
	cin >> originalMessage;
        //store morse code encoded message in variable encodedMessage
	encodedMessage = encodeMessage(morseMap, originalMessage);
	cout << "The original message coded with morse code is " + encodedMessage << endl;


	/* This decodes a message from morse code to plain text */
	cout << "Please enter a morse code message ( . and _ only, separate letters with spaces ) to decode into plain text:\n--->  ";
	string temp; getline(cin, temp);	//clears cin buffer
	getline(cin, encodedMessage);
	
	//Pass message to decode message, store decoded message in variable originalMessage
	originalMessage = decodeMessage(tree, encodedMessage);

	//Print morse code encoded message
	cout << "Decoded message with morse code is " + originalMessage << endl;
	system("pause");
}