main: fileIO.cpp
	g++ -g fileIO.cpp -o fileIO

clean:
	rm fileIO

run:
	./fileIO

debug: 
	gdb fileIO

git:
	git status
	git add .

