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
    cout << "电子木鱼 v2.5 佛祖开光特别版 By WYC-M" << endl;
    cout << "=====================================" << endl;

    cout << endl;

    cout << "设置-------------------------" << endl;
    cout << "1_自定义文字   2_恢复默认文字" << endl;
    cout << "-----------------------------" << endl;

    configpress = _getch();

    switch (configpress)
    {
    case 49:
    {
        cout << endl;
        cout << "请输入自定义文字(64字符以内) ";
        cin >> configgongde;

        // 当没有config_gongde.ini，创建该文件并将内容设置为"功德"
        if (_access(".ewf/config_gongde.ini", 0) == -1)
        {
            ofstream out;
            out.open(".ewf/score.txt");
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
        system("del /S /Q .ewf\\config_gongde.ini");
        
        cout << endl;
        cout << "设置完成" << endl;

        Sleep(500);

        return;
    }
    }
}