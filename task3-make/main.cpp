#include <iostream>
#include "check.h"
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int comp_value = rand() % 10;
    int value;
    cout << "Введіть число: " << endl;
    cin >> value;
    int answer = Check(comp_value, value);
    return answer;
}