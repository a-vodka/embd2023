#include <iostream>     // printf, cin
#include <time.h>       // time
#include "randomGen.h" 	// randomGen

using namespace std;

int main(){

    printf("Guess number game. Try to guess my number in range [0;9]\n");
    srand(time(0));	//plant random seed

    return randomGen();
}
