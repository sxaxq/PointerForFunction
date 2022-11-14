#include <iostream>
#include <string>

using namespace std;

string GetDataFromBD()
{
	return "Data from BD";
}

string GetDataFromWebServer()
{
	return "Data From WebServer";
}

string GetDataFromAstral()
{
	return "Data From Astral";
}

void ShowInfo(string (*bebra)())
{
	cout << bebra() << endl;
}

void main()
{
	ShowInfo(GetDataFromAstral);
}