# include "ChoiceManager.h"
// Constructor.
ChoiceManager:: ChoiceManager():Manager(){
    insanityEffects = 0;
    impatienceEffects = 0;
    totalNumberOfChoices = 4;
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
        insanityEffects = 20 * (roundNumber/totalNumberOfChoices);
        impatienceEffects = 0;
    } else if (_choice == 2){
        insanityEffects = 0;
        impatienceEffects = 20 * (roundNumber/totalNumberOfChoices);
    } else {
        insanityEffects = 20 * (roundNumber/totalNumberOfChoices);
        impatienceEffects = 20 * (roundNumber/totalNumberOfChoices);
    }
}
int ChoiceManager:: getTotalChoices(){
    return totalNumberOfChoices;
}
