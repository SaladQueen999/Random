#include "functions.h"

const int SIX_SIDES= 6; 
int rollDie();
void displayRollResult(int);
int main(){
    int roll = 0;
    srand(time(0));
    roll =rollDie();
    displayRollResult(roll);

return 0; 
}
void displayRollResult(int result){
    cout << "You just rolled a " << result << endl;
}
int rollDie(){
    int roll =0; 
    roll = rand() % SIX_SIDES +1; 
    return roll;
}