#ifndef LEXICALANALYZER_H 
#define LEXICALANALYZER_H

#include <fstream> 
#include <string>

using namespace std; 

class LexicalAnalyzer 
{ 
private: 
	ifstream *sourceCodeFile; 
	string s; 
	int charPosition = 0;
	char myChar;

public: 
	LexicalAnalyzer(ifstream*); 
	bool isEOF(); 
	char getChar(); 
	void readNextLine();
};

#endif
