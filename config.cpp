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
    cout << "����ľ�� v3.0 ���濪���ر�� By WYC-M" << endl;
    cout << "=====================================" << endl;

    cout << endl;

    cout << "����--------------------------------------------------------------------------------------" << endl;
    cout << "1_�Զ��幦���ı�   2_�ָ�Ĭ�Ϲ����ı�   3_�Զ��幫���ı�   4_�ָ�Ĭ�Ϲ����ı�   5_�������" << endl;
    cout << "------------------------------------------------------------------------------------------" << endl;

    configpress = _getch();

    switch (configpress)
    {
    case 49:
    {
        cout << endl;
        cout << "�������Զ��幦���ı�(64�ַ�����) ";
        cin >> configgongde;

        // ��û��config_gongde.ini���������ļ�������������Ϊ"����"
        if (_access(".ewf/config_gongde.ini", 0) == -1)
        {
            ofstream out;
            out.open(".ewf/config_gongde.ini");
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
        cout << endl;
        system("del /S /Q .ewf\\config_gongde.ini");
        
        cout << endl;
        cout << "�������" << endl;

        Sleep(500);

        return;
    }

    case 51:
    {
        cout << endl;
        cout << "�������Զ��幫���ı�(64�ַ�����) ";
        cin >> configgongde;

        // ��û��text.txt���������ļ�������������Ϊ"����"
        if (_access(".ewf/text.txt", 0) == -1)
        {
            ofstream out;
            out.open(".ewf/text.txt");
            out << "����";
            out.close();
        }

        ofstream out;
        out.open(".ewf/text.txt");
        out << configgongde;
        out.close();

        cout << endl;
        cout << "�������" << endl;

        Sleep(500);

        return;
    }

    case 52:
    {
        cout << endl;
        system("del /S /Q .ewf\\text.txt");

        cout << endl;
        cout << "�������" << endl;

        Sleep(500);

        return;
    }

    case 53:
    {
        cout << endl;
        system("del /S /Q .ewf\\score.txt");

        cout << endl;
        cout << "�������" << endl;

        Sleep(500);

        return;
    }
    }
}