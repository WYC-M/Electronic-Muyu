#include <iostream>
#include <windows.h>
#include <fstream>
#include <unistd.h>

using namespace std;

void start(int startscore)
{
    char input[64]; // texe.txt内的文本最多支持64位字符

    cout << "=====================================" << endl;
    cout << "电子木鱼 v2.0 佛祖开光特别版 By WYC-M" << endl;
    cout << "=====================================" << endl;

    cout << endl;

    cout << "公告-----------------------------------------------------------------------------" << endl;

    // 在程序目录下新建text.txt并在里面写上想说的话就可以展示在公告栏里面
    if (access("text.txt", F_OK) == -1)
    {
        cout << "1 近日有不法分子对佛祖进行DDOS攻击,造成佛祖服务器崩溃.和蔼!任何邪恶,终将绳之以法!" << endl;
        cout << "2 近日有不法分子对本程序进行破解,修改功德值,佛祖已将违规数据清零" << endl;
        cout << "3 电子木鱼 v2.0 现已发布,快来围观! https://github.com/WYC-M/Electronic-Wood-Fish" << endl;
    }

    else
    {
        ifstream in("text.txt");
        in >> input;
        cout << input << endl;
        in.close();
    }

    cout << "---------------------------------------------------------------------------------" << endl;

    cout << endl;

    cout << "功能一览-------------------------------" << endl;
    cout << "空格_敲木鱼   1_佛祖陪你一起笑   2_抽奖" << endl;
    cout << "---------------------------------------" << endl;

    cout << endl;

    cout << "您的功德:" << startscore << endl;
}