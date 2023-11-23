#include <iostream>
#include <random>

using namespace std;

int Check (int comp_value, int value)
{
    if (comp_value == value)
    {
	cout << "You win! ^-^" << endl;
	return 0;
    }
    else
    {
	cout << "You lose! т_т" << endl;
	return 1;
    }
}

int main()
{
    int comp_value = rand() % 10;
    int value;
    cout << "Введіть число: " << endl;
    cin >> value;
    int answer = Check(comp_value, value);
    return answer;
}