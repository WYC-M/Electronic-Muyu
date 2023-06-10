#include <iostream>
#include <windows.h>
#include <fstream>
#include <io.h>
#include "header.h"

using namespace std;

void start(int startscore)
{
    char input[64]; // text.txt内的文本最多支持64位字符

    title();

    cout << "公告-----------------------------------------------------------------------------" << endl;

    // 在程序目录下新建text.txt并在里面写上想说的话就可以展示在公告栏里面
    if (_access(".ewf/text.txt", 0) == -1)
    {
        cout << "1 近日有不法分子对佛祖进行DDOS攻击,造成佛祖服务器崩溃.和蔼!任何邪恶,终将绳之以法!" << endl;
        cout << "2 电子木鱼 v4.1 已发布,来看看更新了什么" << endl;
        cout << "  网址: https://github.com/WYC-M/Electronic-Muyu" << endl;
    }

    else
    {
        ifstream in(".ewf/text.txt");
        in >> input;
        cout << input << endl;
        in.close();
    }

    cout << "---------------------------------------------------------------------------------" << endl;

    cout << endl;

    cout << "功能一览--------------------------------------------------------------------------------" << endl;
    cout << "Space_敲木鱼   1_佛祖陪你一起笑   2_抽奖   3_播放大悲咒   a_自动敲木鱼   c_设置   u_更新" << endl;
    cout << "----------------------------------------------------------------------------------------" << endl;

    cout << endl;

    if (_access(".ewf/config_gongde.ini", 0) == -1)
    {
        cout << "您的功德 " << startscore;
    }
    else
    {
        ifstream in(".ewf/config_gongde.ini");
        in >> input;
        cout <<"您的" << input <<" "<<startscore;
        in.close();
    }


    // 称号
    if (startscore < 0)
    {
        cout << "   [道 德 败 坏]" << endl;
    }
    if (startscore >= 0 && startscore < 250)
    {
        cout << "   [我佛只渡有缘人]" << endl;
    }
    if (startscore >= 250 && startscore < 1000)
    {
        cout << "   [嗯...渡一下也不是不可以]" << endl;
    }
    if (startscore >= 1000 && startscore < 5000)
    {
        cout << "   [绝 世 大 好 人]" << endl;
    }
    if (startscore >= 5000)
    {
        cout << "   [来来来,佛祖你来当]" << endl;
    }
}