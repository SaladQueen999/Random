#include <iostream>
#include <string>
using namespace std; 

void passwordChecker(){
    string password; 
    int numOfTriesLeft = 5; 
    int tries; 
    string realPassword = "password"; 
    while (true){
        cout << "Type in your password: "; 
        getline(cin, password); 
        if (password!=realPassword){
            cout << "Wrong password! Please try again: "; 
            numOfTriesLeft--;
            cout << "Number of tries left is " << numOfTriesLeft << endl;
        }
                if (numOfTriesLeft==0){
                cout << "Sorry, our of tries." << endl; 
            }
            break;
    }
}

int main (){
    passwordChecker();
}