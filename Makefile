all: comp pokaz

comp:
	g++ -Wall -o app 1.cpp

pokaz:
	app.exe