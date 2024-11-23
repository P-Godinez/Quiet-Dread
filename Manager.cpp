# include "Manager.h"
Manager:: Manager(){
    roundNumber = 0;
} 
// increments the round number (line in the .txt file). 
void Manager :: incrementRound(int _num){
    roundNumber = roundNumber + _num;
}
int Manager:: getRoundNumber(){
    return roundNumber;
}
