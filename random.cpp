#include <cstdlib>

using namespace std;

int random(int min, int max)
{
    int value = (rand() % (max - min + 1)) + min; // 范围[min,max]

    return value;
}