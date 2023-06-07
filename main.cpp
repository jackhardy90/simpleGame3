#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    //roll 5 dice at random
    srand(time(0));
    int dice[5] {};
    for (int i = 0; i < 5; i++){
        dice[i] = rand() % 6 + 1;
    }

    //sort dice lowest to highest
    sort(dice, dice + 5);

    //display the dice on the console
    for (int i = 0; i < 5; i++){
        cout << "|" << dice[i];
    }
    cout << "|" << endl;

    //store the dice in integer variables
    int d1 = dice[0], d2 = dice[1], d3 = dice[2], d4 = dice[3], d5 = dice[4];

    if (d1 == d2 && d2 == d3 && d3 == d4 && d4 == d5){
        cout << "YAHTZEE! +50 Points!" << endl;
    }
    else if (d1 + 1 == d2 && d2 + 1 == d3 && d3 + 1 == d4 && d4 + 1 == d5){
        cout << "Large Straight! +40 Points!";
    }
    else if (d2 == d3 - 1 && d3 == d4 - 1 && d4 == d5 - 1){
        cout << "Small Straight! +30 Points!";
    }else if (d1 == d3 - 1 && d3 == d4 - 1 && d4 == d5 - 1){
        cout << "Small Straight! +30 Points!";
    }else if (d1 == d2 - 1 && d2 == d4 - 1 && d4 == d5 - 1){
        cout << "Small Straight! +30 Points!";
    }else if (d1 == d2 - 1 && d2 == d3 - 1 && d3 == d5 - 1){
        cout << "Small Straight! +30 Points!";
    }else if (d1 == d2 - 1 && d2 == d3 - 1 && d3 == d4 - 1){
        cout << "Small Straight! +30 Points!";
    }
    else if (d1 == d2 && d1 == d3 && d4 == d5){
        cout << "Full House! +25 Points!";
    }else if (d1 == d2 && d3 == d4 && d4 == d5){
        cout << "Full House! +25 Points!";
    }
    else if (d2 == d3 && d3 == d4 && d4 == d5){
        cout << "Four of a kind! +" << d2 + d3 + d4 + d5 << " Points!" << endl;
    }else if (d1 == d2 && d2 == d3 && d3 == d4){
        cout << "Four of a kind! +" << d1 + d2 + d3 + d4 << " Points!" << endl;
    }
    else if (d1 == d2 && d2 == d3){
        cout << "Three of a kind! +" << d1 + d2 + d3 << " Points!" << endl;
    }else if (d2 == d3 && d3 == d4){
        cout << "Three of a kind! +" << d2 + d3 + d4 << " Points!" << endl;
    }else if (d3 == d4 && d4 == d5){
        cout << "Three of a kind! +" << d3 + d4 + d5 << " Points!" << endl;
    }
    else {
        cout << "Chance! +" << d1 + d2 + d3 + d4 + d5 << " Points!" << endl;
    }



    return 0;
}
