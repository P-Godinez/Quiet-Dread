# include "Manager.h"
// increments the round number (line in the .txt file). 
void Manager :: incrementRound(int _num){
    roundNumber = roundNumber + _num;
}
// constructor.
Manager:: Manager(){
    roundNumber = 0;
} 
// returns the round number.
int Manager:: getRoundNumber(){
    return roundNumber;
}
