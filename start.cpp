#include <iostream>
#include <windows.h>
#include <fstream>
#include <unistd.h>

using namespace std;

void start(int startscore)
{
    char input[64]; // texe.txt�ڵ��ı����֧��64λ�ַ�

    cout << "=====================================" << endl;
    cout << "����ľ�� v2.0 ���濪���ر�� By WYC-M" << endl;
    cout << "=====================================" << endl;

    cout << endl;

    cout << "����-----------------------------------------------------------------------------" << endl;

    // �ڳ���Ŀ¼���½�text.txt��������д����˵�Ļ��Ϳ���չʾ�ڹ���������
    if (access("text.txt", F_OK) == -1)
    {
        cout << "1 �����в������ӶԷ������DDOS����,��ɷ������������.�Ͱ�!�κ�а��,�ս���֮�Է�!" << endl;
        cout << "2 �����в������ӶԱ���������ƽ�,�޸Ĺ���ֵ,�����ѽ�Υ����������" << endl;
        cout << "3 ����ľ�� v2.0 ���ѷ���,����Χ��! https://github.com/WYC-M/Electronic-Wood-Fish" << endl;
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

    cout << "����һ��-------------------------------" << endl;
    cout << "�ո�_��ľ��   1_��������һ��Ц   2_�齱" << endl;
    cout << "---------------------------------------" << endl;

    cout << endl;

    cout << "���Ĺ���:" << startscore << endl;
}