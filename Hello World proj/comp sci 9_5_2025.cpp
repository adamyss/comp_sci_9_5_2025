#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int num = (rand() %10);
    cout << "Hello World! Lets play a game! Pick a number 1 - 10" << endl;
    int numberInputed = 0;
    cin >> numberInputed;
    if(numberInputed == num){
        cout << "Good job the number was " + to_string(num) +"!" << endl;
    } else{ 
        cout << "thats not the number >:( the number was: " + to_string(num) << endl;     
    }
    string word = "";
    float totalTypeTime = 500.5f;
    cout << "Enter a word: " << endl;
    cin >> word;
    cout << "Okay, lets animate it: " << endl;
    for(int i = 0; i < word.length(); i++){
        char c = word[i];
        cout << c;
        _sleep(totalTypeTime / word.length());
    }
    cout << "\n";
    bool likedProgram = false;
    cout << "Did you like this program? if yes type Yes (capitilization does not matter) if you dont type anything else" << endl;
    string input = "";
    cin >> input;
    for(int i = 0; i < input.length(); i++){
        char cha = input[i];
        input[i] = toupper(cha);
    }
    if (input == "YES"){
        likedProgram = true;
    } 
    if(likedProgram == true){
        cout << "YIPPIE :D";
    } else{
        cout << "Sad :(";
    }
    return 0;
}

