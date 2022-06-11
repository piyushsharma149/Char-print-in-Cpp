#include <iostream> 
#include <fstream> 
#include <string> 
#include "LexicalAnalyzer.h"

using namespace std;

LexicalAnalyzer::LexicalAnalyzer(ifstream* scf) { 
	sourceCodeFile = scf;
	charPosition = 0;
	
}
bool LexicalAnalyzer::isEOF() { 
	if (sourceCodeFile->eof()) { 
		return true;
	}
	return false;
}
char LexicalAnalyzer::getChar() {
	
	if (charPosition == 0){
		myChar = s[charPosition++];
		return myChar;
	}
	
	else if(s.length() <= charPosition){
		readNextLine();
		return '\n';
	}	
	
	myChar = s.at(charPosition++);
	return myChar;
	
}
void LexicalAnalyzer::readNextLine() 
{ 	
	if (!sourceCodeFile->eof()) { 
		getline(*sourceCodeFile, s);
		charPosition = 0 ;  
		 
	}
	
}
