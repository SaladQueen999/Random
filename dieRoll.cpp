#include <iostream>
#include <fstream>
#include <string>
#include <vector> 
#include <iomanip>
#include <cmath>
#include <stdlib.h> //För att använda Rand
using namespace std; 


//default argument for 6 sided die

const int SIX_SIDES= 6; 
int rollDie(int = SIX_SIDES);
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
int rollDie(int numsides){
    int roll =0; 
    roll = rand() % numsides +1; 
    return roll;
}