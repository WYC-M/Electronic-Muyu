#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include "header.h"

using namespace std;

int main()
{
    int press; // ���̰�������
    int score; // ����ֵ

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

            // �������
            out(score);
            cout << endl;
            cout << endl;
            cout << "����+1";

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
        }
    }
}