#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#include "header.h"

using namespace std;

int main()
{
    int press;      // ���̰�������
    int score;      // ����ֵ
    int backrandom; // ���ص������

    // ��û��score.ewfʱ���������ļ�������������Ϊ0
    if (access("score.ewf", F_OK) == -1)
    {
        ofstream out;
        out.open("score.ewf");
        out << "0";
        out.close();
    }

    // ��ȡ����ֵ(score.ewf)
    ifstream in("score.ewf");
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

            cout << "����+1";
            
            // �������
            out(score);

            Sleep(500);

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

                cout << "���²���!";

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

                cout << "���²���!";

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

                    cout << "����+50";

                    Sleep(2000);

                    break;
                }

                case 2: // 2 ����-75
                {
                    score = score - 75;

                    out(score);

                    cout << endl;

                    cout << "����-75";

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

                system("cls");
                start(score);
            }
        }
        }
    }
}