#include <iostream>
#include <windows.h>

// 加载一个心安的进度条(

void wait(int waittime) // 加载动画,waittime为执行动画次数
{
	for (int i = 0; i < waittime; i++)
	{
		std::cout << "-";
		std::cout << "\b";
		Sleep(500);
		std::cout << "\\";
		std::cout << "\b";
		Sleep(500);
		std::cout << "|";
		std::cout << "\b";
		Sleep(500);
		std::cout << "/";
		std::cout << "\b";
		Sleep(500);
		std::cout << "-";
		std::cout << "\b";
		Sleep(500);
		std::cout << "\\";
		std::cout << "\b";
		Sleep(500);
		std::cout << "|";
		std::cout << "\b";
		Sleep(500);
		std::cout << "/";
		std::cout << "\b";
		Sleep(500);
	}
	
	std::cout << "\b";
	std::cout << " ";

	return;
}