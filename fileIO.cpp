#include <fstream>
#include <iostream>
#include <sstream>

int main(){
	std::ifstream inFile;
	std::string currentLine;
	std::stringstream converter;
	
	std::string sNum1;
	std::string sNum2;
	std::string text;

	int num1;
	int num2;
	int sum;

	inFile.open("data.csv");
	while (getline(inFile, currentLine)){
		std::cout << currentLine << std::endl;

		converter.clear();
		converter.str(currentLine);

		getline(converter, sNum1, ',');
		getline(converter, sNum2, ',');
		getline(converter, text);

		std::cout << sNum1 << std::endl;
		std::cout << sNum2 << std::endl;
		std::cout << text << std::endl;

		converter >> sNum1 >> num1;
		converter >> sNum2 >> num2;
		
		int sum = num1 + num2;
		for (int i = 0; i < sum; i++){
			std::cout << text;
		}//end for loop

		std::cout << std::endl;

		converter.clear();
		converter.str("");
	}//end while loop

	inFile.close();
}//end main


