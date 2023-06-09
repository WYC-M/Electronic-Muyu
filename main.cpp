#include <iostream>
#include <fstream>
#include <conio.h>//_getch()
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#include <dsound.h>
#include <io.h>
#include "header.h"

#pragma comment(lib, "WINMM.LIB")

using namespace std;

int main()
{
    int press;      // 键盘按下内容
    int score;      // 功德值
    int backrandom; // 返回的随机数
    int autotimes;//自动敲击木鱼次数
    char maininput[64];

    // 检查.ewf文件夹是否存在，若不存在则创建
    string dir = ".ewf";              // 文件夹路径
    if (_access(dir.c_str(), 0) == -1) // 判断该文件夹是否存在
    {
        CreateDirectory(".ewf", NULL);                   // 创建文件夹
    }

    // 当没有score.txt时，创建该文件并将内容设置为0
    if (_access(".ewf/score.txt", 0) == -1)
    {
        ofstream out;
        out.open(".ewf/score.txt");
        out << "0";
        out.close();
    }

    // 读取功德值(score.txt)
    ifstream in(".ewf/score.txt");
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

            cout << endl;
            cout << endl;

            if (_access(".ewf/config_gongde.ini", 0) == -1)
            {
                cout << "功德+1";
            }
            else
            {
                ifstream in(".ewf/config_gongde.ini");
                in >> maininput;
                cout << maininput << "+1";
                in.close();
            }

            // 输出分数
            out(score);

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

                if (_access(".ewf/config_gongde.ini", 0) == -1)
                {
                    cout << "功德不足!";
                }
                else
                {
                    ifstream in(".ewf/config_gongde.ini");
                    in >> maininput;
                    cout << maininput << "不足!";
                    in.close();
                }

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

        case 50: // 按下2
        {
            if (score < 25)
            {
                cout << endl;
                cout << endl;

                if (_access(".ewf/config_gongde.ini", 0) == -1)
                {
                    cout << "功德不足!";
                }
                else
                {
                    ifstream in(".ewf/config_gongde.ini");
                    in >> maininput;
                    cout << maininput << "不足!";
                    in.close();
                }

                Sleep(1000);

                system("cls");
                start(score);
            }

            else
            {
                score = score - 25;

                out(score);

                cout << endl;
                cout << endl;

                system("cls");
                start(score);

                cout << endl;

                cout << "按任意键开始抽奖 ";

                _getch();

                wait(1);
                cout << endl;

                backrandom = random(1, 3);

                switch (backrandom)
                {
                case 1: // 1 功德+50
                {
                    score = score + 50;

                    out(score);

                    cout << endl;

                    if (_access(".ewf/config_gongde.ini", 0) == -1)
                    {
                        cout << "功德+50";
                    }
                    else
                    {
                        ifstream in(".ewf/config_gongde.ini");
                        in >> maininput;
                        cout << maininput << "+50";
                        in.close();
                    }

                    Sleep(2000);

                    break;
                }

                case 2: // 2 功德-75
                {
                    score = score - 75;

                    out(score);

                    cout << endl;

                    if (_access(".ewf/config_gongde.ini", 0) == -1)
                    {
                        cout << "功德-75";
                    }
                    else
                    {
                        ifstream in(".ewf/config_gongde.ini");
                        in >> maininput;
                        cout << maininput << "-75";
                        in.close();
                    }

                    Sleep(2000);

                    break;
                }

                case 3: // 3 感谢惠顾
                {
                    cout << endl;

                    cout << "感谢惠顾" << endl;

                    Sleep(2000);

                    system("cls");
                    start(score);

                    break;
                }

                system("cls");
                start(score);
                }

                press = 0;

                system("cls");
                start(score);
            }
        }
        }

        if(press==51)
        {                    
            score = score + 10;
            system("cls");
            start(score);
            
            cout << endl;

            if (_access(".ewf/config_gongde.ini", 0) == -1)
            {
                cout << "正在播放大悲咒...功德+10";
            }
            else
            {
                ifstream in(".ewf/config_gongde.ini");
                in >> maininput;
                cout <<"正在播放大悲咒..." << maininput << "+10";
                in.close();
            }

            mciSendString("open .ewf/backgroundmusic.mp3 alias mysong", NULL, 0, NULL);
            mciSendString("play mysong wait", NULL, 0, NULL);
        }

        if(press==99)//c
        {
            system("cls");
            
            config();

            // 当没有score.txt时，创建该文件并将内容设置为0
            if (_access(".ewf/score.txt", 0) == -1)
            {
                ofstream out;
                out.open(".ewf/score.txt");
                out << "0";
                out.close();
            }

            // 读取功德值(score.txt)
            ifstream in(".ewf/score.txt");
            in >> score;
            in.close();

            system("cls");
            start(score);
        }

        if (press == 97)//a
        {
            cout << endl;
            cout << "请输入自动敲击木鱼次数 ";
            cin >> autotimes;
            
            system("cls");

            for (int i = 0; i < autotimes; i++)
            {
                cout << endl;

                if (_access(".ewf/config_gongde.ini", 0) == -1)
                {
                    cout << "功德+1 (自动)";
                }
                else
                {
                    ifstream in(".ewf/config_gongde.ini");
                    in >> maininput;
                    cout << maininput << "+1 (自动)";
                    in.close();
                }

                score++;
                out(score);
                system("cls");
                start(score);
            }
        }

        if (press == 117)//u
        {
            system("start updater.exe");
            return 0;
        }
    }
}