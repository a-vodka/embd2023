#include <iostream>     // printf, cin
#include <time.h>       // time


using namespace std;

const int MAX = 30000;	//cin buffer clean limit

int randomGen();

int main(){

    printf("Guess number game. Try to guess my number in range [0;9]\n");
    srand(time(0)); 	//plant random seed

	return randomGen();
}

int randomGen(){

	int user,					//var for user input
        computer = rand() % 9;	//random number

    while(1){
        try {
            printf("input >> ");	//prompt
            cin >> user;
            if      ( cin.fail()  )                  throw 1;	//wrong input (not number)
            else if ( (0 > user) || (9 < user) )     throw 2;	//input out of range [0;9]
            else if ( user != computer )             throw 3;	//lose condition
            else if ( user == computer )             throw 4;	//win condition
        }
        catch(int e){

            if ( (e == 1) || (e == 2) ) {
                cin.clear();
                cin.ignore(MAX, '\n');							//clean cin buffer
                printf("Enter a number in range [0;9]\n");		//prompt
            }
            else if (e == 3) {
                printf("You lose! My number was %d\n", computer);
                return 1;	//lose
            }
            else if (e == 4) {
                printf("Wow, you win, you're so smart\n");		//tease
                return 0;	//win
            }
        }
    }

	return 2;	//if while loop did not work
}
