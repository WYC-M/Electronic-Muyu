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
    int press;      // ���̰�������
    int score;      // ����ֵ
    int backrandom; // ���ص������
    char maininput[64];

    // ���.ewf�ļ����Ƿ���ڣ����������򴴽�
    string dir = ".ewf";              // �ļ���·��
    if (_access(dir.c_str(), 0) == -1) // �жϸ��ļ����Ƿ����
    {
        CreateDirectory(".ewf", NULL);                   // �����ļ���
    }

    // ��û��score.txtʱ���������ļ�������������Ϊ0
    if (_access(".ewf/score.txt", 0) == -1)
    {
        ofstream out;
        out.open(".ewf/score.txt");
        out << "0";
        out.close();
    }

    // ��ȡ����ֵ(score.txt)
    ifstream in(".ewf/score.txt");
    in >> score;
    in.close();

    start(score);

    while (1)
    {
        press = _getch(); // ��ȡ���̰�������

        switch (press)
        {
        case 32: // ���¿ո�
        {
            score++;

            cout << endl;
            cout << endl;

            if (_access(".ewf/config_gongde.ini", 0) == -1)
            {
                cout << "����+1";
            }
            else
            {
                ifstream in(".ewf/config_gongde.ini");
                in >> maininput;
                cout << maininput << "+1";
                in.close();
            }

            // �������
            out(score);

            system("cls");
            start(score);

            break;
        }

        case 49: // ����1
        {
            if (score < 50)
            {
                cout << endl;
                cout << endl;

                if (_access(".ewf/config_gongde.ini", 0) == -1)
                {
                    cout << "���²���!";
                }
                else
                {
                    ifstream in(".ewf/config_gongde.ini");
                    in >> maininput;
                    cout << maininput << "����!";
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

                cout << "��������������������" << endl;

                Sleep(1000);

                system("cls");
                start(score);
            }

            break;
        }

        case 50: // ����2
        {
            if (score < 25)
            {
                cout << endl;
                cout << endl;

                if (_access(".ewf/config_gongde.ini", 0) == -1)
                {
                    cout << "���²���!";
                }
                else
                {
                    ifstream in(".ewf/config_gongde.ini");
                    in >> maininput;
                    cout << maininput << "����!";
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

                cout << "���������ʼ�齱 ";

                _getch();

                wait(1);
                cout << endl;

                backrandom = random(1, 3);

                switch (backrandom)
                {
                case 1: // 1 ����+50
                {
                    score = score + 50;

                    out(score);

                    cout << endl;

                    if (_access(".ewf/config_gongde.ini", 0) == -1)
                    {
                        cout << "����+50";
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

                case 2: // 2 ����-75
                {
                    score = score - 75;

                    out(score);

                    cout << endl;

                    if (_access(".ewf/config_gongde.ini", 0) == -1)
                    {
                        cout << "����-75";
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

                case 3: // 3 ��������һ��Ц
                {
                    cout << endl;

                    cout << "��������������������" << endl;

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
                cout << "���ڲ��Ŵ���...����+10";
            }
            else
            {
                ifstream in(".ewf/config_gongde.ini");
                in >> maininput;
                cout <<"���ڲ��Ŵ���..." << maininput << "+10";
                in.close();
            }

            mciSendString("open .ewf/backgroundmusic.mp3 alias mysong", NULL, 0, NULL);
            mciSendString("play mysong wait", NULL, 0, NULL);
        }

        if(press==99)//c
        {
            system("cls");
            
            config();

            system("cls");
            start(score);
        }
    }
}