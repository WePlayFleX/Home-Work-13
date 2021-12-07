#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int aArray[50];
    for (int i = 0; i < 50; i++)
    {
        aArray[i] = rand();
    }
    int Max = aArray[0];
    int Min = aArray[0];
    for (int i = 0; i < 50; i++)
    {
        if (aArray[i] > Max)
        {
            Max = aArray[i];
        }
        if (aArray[i] < Min)
        {
            Min = aArray[i];
        }
    }
    cout << "Maximum number - " << Max << ", minimum number - " << Min << endl;
    system("pause");
    return 0;
}