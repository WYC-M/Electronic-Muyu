#include <iostream>
#include <fstream>

using namespace std;

void out(int outscore) // 输出分数
{
    ofstream out;
    out.open("score.ewf");
    out << outscore;
    out.close();
}