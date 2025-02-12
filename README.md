# CS121 Project 5 - File IO

The purpose of this lab is to practice file input and output, data conversion using stringstreams, and reading CSV data. We are given the following file:

```
1, 2, this
3, 3, is
8, 1, a
2, 4, lot
2, 1, of
4, 2, fun
```  

We are then given the task of breaking the data into variables where the numbers are ints and the text is a string. We then add the two numbers together and print the string that many times. For example:

```
input:

1, 2, this

output:

this, this, this
```
## Pseudocode

Include fstream, iostream, sstream, 

### Main()

Call file using std::ifstream and inFile variable. Initialize string variable called currentLine. Initialize stringstream called ss. Initialize integer variable called counter. Initialize string variable called text. 

Open "data.csv". use getline as a sentry variable for while loop. Call 1st column of data num1. Call 2nd column of data num2. Call third line of data text. 

```
while getline:
	Clear stringstreams.
	Load the variables into ss stream. 
	Read the counter as a string and specify a comma delimiter. 
	Read the text with new line as a default delimeter
	Call printLine(num1, num2, text)
```

### printLine()

Create int variable newNum. newNum is num1 + num2. 

```
For any iteration less than newNum:
	print text
```
