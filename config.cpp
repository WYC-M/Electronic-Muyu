#include <iostream>
#include <conio.h>
#include <fstream>
#include <io.h>
#include <windows.h>

using namespace std;

void config()
{
    int configpress = 0;
    char configgongde[64];
    
    cout << "=====================================" << endl;
    cout << "����ľ�� v2.5 ���濪���ر�� By WYC-M" << endl;
    cout << "=====================================" << endl;

    cout << endl;

    cout << "����-------------------------" << endl;
    cout << "1_�Զ�������   2_�ָ�Ĭ������" << endl;
    cout << "-----------------------------" << endl;

    configpress = _getch();

    switch (configpress)
    {
    case 49:
    {
        cout << endl;
        cout << "�������Զ�������(64�ַ�����) ";
        cin >> configgongde;

        // ��û��config_gongde.ini���������ļ�������������Ϊ"����"
        if (_access(".ewf/config_gongde.ini", 0) == -1)
        {
            ofstream out;
            out.open(".ewf/score.txt");
            out << "����";
            out.close();
        }

        ofstream out;
        out.open(".ewf/config_gongde.ini");
        out << configgongde;
        out.close();

        cout << endl;
        cout << "�������" << endl;

        Sleep(500);

        return;
    }

    case 50:
    {
        system("del /S /Q .ewf\\config_gongde.ini");
        
        cout << endl;
        cout << "�������" << endl;

        Sleep(500);

        return;
    }
    }
}