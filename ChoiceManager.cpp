# include "ChoiceManager.h"
// Constructor.
ChoiceManager:: ChoiceManager():Manager(){
    insanityEffects = 0;
    impatienceEffects = 0;
    totalNumberOfChoices = 4;
}
// The following two setters are not direct since the value fo the effects depends of other factors such as round number and total choices. 
void ChoiceManager:: setInsanityEffect(int _num){
    insanityEffects = _num *  (roundNumber/totalNumberOfChoices);
}

void ChoiceManager:: setImpatienceEffect(int _num){
    impatienceEffects = _num *  (roundNumber/totalNumberOfChoices);
}

int ChoiceManager::getImpatienceEffects(){
    return impatienceEffects;
}
int ChoiceManager::getInsanityEffects(){
    return insanityEffects;
}
// Will modify the insanity and impatience effects based on the choice made as well as taking into account the current round number.
void ChoiceManager:: evaluateChoice(int _choice){
    if (_choice == 1){
        setInsanityEffect(20);
        setImpatienceEffect(0);
    } else if (_choice == 2){
        setInsanityEffect(0);
        setImpatienceEffect(20);
    } else {
        setInsanityEffect(20);
        setImpatienceEffect(20);
    }
}
int ChoiceManager:: getTotalChoices(){
    return totalNumberOfChoices;
}
