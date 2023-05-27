#include <fstream>

using namespace std;

void out(int outscore) // 输出分数
{
    ofstream out;
    out.open(".ewf/score.txt");
    out << outscore;
    out.close();
}