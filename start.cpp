#include <iostream>
#include <windows.h>
#include <fstream>
#include <io.h>
#include "header.h"

using namespace std;

void start(int startscore)
{
    char input[64]; // text.txt�ڵ��ı����֧��64λ�ַ�

    title();

    cout << "����-----------------------------------------------------------------------------" << endl;

    // �ڳ���Ŀ¼���½�text.txt��������д����˵�Ļ��Ϳ���չʾ�ڹ���������
    if (_access(".ewf/text.txt", 0) == -1)
    {
        cout << "1 �����в������ӶԷ������DDOS����,��ɷ������������.�Ͱ�!�κ�а��,�ս���֮�Է�!" << endl;
        cout << "2 ����ľ�� v4.1 �ѷ���,������������ʲô" << endl;
        cout << "  ��ַ: https://github.com/WYC-M/Electronic-Muyu" << endl;
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

    cout << "����һ��--------------------------------------------------------------------------------" << endl;
    cout << "Space_��ľ��   1_��������һ��Ц   2_�齱   3_���Ŵ���   a_�Զ���ľ��   c_����   u_����" << endl;
    cout << "----------------------------------------------------------------------------------------" << endl;

    cout << endl;

    if (_access(".ewf/config_gongde.ini", 0) == -1)
    {
        cout << "���Ĺ��� " << startscore;
    }
    else
    {
        ifstream in(".ewf/config_gongde.ini");
        in >> input;
        cout <<"����" << input <<" "<<startscore;
        in.close();
    }


    // �ƺ�
    if (startscore < 0)
    {
        cout << "   [�� �� �� ��]" << endl;
    }
    if (startscore >= 0 && startscore < 250)
    {
        cout << "   [�ҷ�ֻ����Ե��]" << endl;
    }
    if (startscore >= 250 && startscore < 1000)
    {
        cout << "   [��...��һ��Ҳ���ǲ�����]" << endl;
    }
    if (startscore >= 1000 && startscore < 5000)
    {
        cout << "   [�� �� �� �� ��]" << endl;
    }
    if (startscore >= 5000)
    {
        cout << "   [������,����������]" << endl;
    }
}