#include <bits/stdc++.h>
using namespace std;
int main(){

srand(time(0));                     //Differnt random number is generated every time program is run
int variable = rand()%100 + 1;          //Random number will be generated in the range [1,100]
int num;
cout << "Enter the Number between 1-100: ";
cin >> num;
int totalnoofguess = 0;

while(true){
    if(num == variable){
        cout << "Congratulations ! You guessed the correct number in " << totalnoofguess << " number of guesses." << endl;
        break;
    }
    else if(num > variable){
        cout << "is"<<num <<"se thoda chotta no guess kare "  << "." << endl;
        totalnoofguess++;
        cin >> num;
    }
    else{
        cout << "is"<< num <<"se thoda bada no guess kare "  << "." << endl;
        totalnoofguess++;
        cin >> num;
    }
}

return 0;
}