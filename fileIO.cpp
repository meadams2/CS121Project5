#include <fstream>
#include <iostream>
#include <sstream>

int main(){
	std::ifstream inFile;
	std::string currentLine;
	std::stringstream converter;
	std::stringstream ss;
	int counter;
	std::string sCounter;
	std::string text;

	inFile.open("data.csv");
	while (getline(inFile, currentLine)){

		ss.clear();
		ss.str("");
		converter.clear();
		converter.str("");


