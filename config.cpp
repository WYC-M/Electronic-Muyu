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
    cout << "电子木鱼 v3.0 佛祖开光特别版 By WYC-M" << endl;
    cout << "=====================================" << endl;

    cout << endl;

    cout << "设置--------------------------------------------------------------------------------------" << endl;
    cout << "1_自定义功德文本   2_恢复默认功德文本   3_自定义公告文本   4_恢复默认公告文本   5_清除功德" << endl;
    cout << "------------------------------------------------------------------------------------------" << endl;

    configpress = _getch();

    switch (configpress)
    {
    case 49:
    {
        cout << endl;
        cout << "请输入自定义功德文本(64字符以内) ";
        cin >> configgongde;

        // 当没有config_gongde.ini，创建该文件并将内容设置为"功德"
        if (_access(".ewf/config_gongde.ini", 0) == -1)
        {
            ofstream out;
            out.open(".ewf/config_gongde.ini");
            out << "功德";
            out.close();
        }

        ofstream out;
        out.open(".ewf/config_gongde.ini");
        out << configgongde;
        out.close();

        cout << endl;
        cout << "设置完成" << endl;

        Sleep(500);

        return;
    }

    case 50:
    {
        cout << endl;
        system("del /S /Q .ewf\\config_gongde.ini");
        
        cout << endl;
        cout << "设置完成" << endl;

        Sleep(500);

        return;
    }

    case 51:
    {
        cout << endl;
        cout << "请输入自定义公告文本(64字符以内) ";
        cin >> configgongde;

        // 当没有text.txt，创建该文件并将内容设置为"功德"
        if (_access(".ewf/text.txt", 0) == -1)
        {
            ofstream out;
            out.open(".ewf/text.txt");
            out << "功德";
            out.close();
        }

        ofstream out;
        out.open(".ewf/text.txt");
        out << configgongde;
        out.close();

        cout << endl;
        cout << "设置完成" << endl;

        Sleep(500);

        return;
    }

    case 52:
    {
        cout << endl;
        system("del /S /Q .ewf\\text.txt");

        cout << endl;
        cout << "设置完成" << endl;

        Sleep(500);

        return;
    }

    case 53:
    {
        cout << endl;
        system("del /S /Q .ewf\\score.txt");

        cout << endl;
        cout << "设置完成" << endl;

        Sleep(500);

        return;
    }
    }
}