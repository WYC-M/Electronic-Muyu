#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include "header.h"

using namespace std;

int main()
{
    int press; // 键盘按下内容
    int score; // 功德值

    // 读取功德值(score.ewf)
    ifstream in("score.ewf");
    in >> score;
    in.close();

    start(score);

    while (1)
    {
        press = _getch(); // 获取键盘按下内容

        switch (press)
        {
        case 32: // 按下空格
        {
            score++;

            // 输出分数
            out(score);
            cout << endl;
            cout << endl;
            cout << "功德+1";

            Sleep(500);

            system("cls");
            start(score);

            break;
        }

        case 49: // 按下1
        {
            if (score < 50)
            {
                cout << endl;
                cout << endl;

                cout << "功德不足!";
                Sleep(1000);

                system("cls");
                start(score);
            }

            else
            {
                score = score - 50;

                out(score);

                cout << endl;
                cout << endl;
                cout << "哈哈哈哈哈哈哈哈哈哈" << endl;

                Sleep(1000);

                system("cls");
                start(score);
            }

            break;
        }
        }
    }
}