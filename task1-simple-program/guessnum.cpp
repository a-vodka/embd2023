#include <iostream>     // printf, cin
#include <time.h>       // time

using namespace std;

const int MAX = 30000;	//cin buffer clean limit

int main(){

	printf("Guess number game. Try to guess my number in range [0;9]\n");
	srand(time(0));				//plant random seed

	return 0;
}
