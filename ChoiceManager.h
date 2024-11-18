# pragma once
# include "Manager.h"
// Subclass of Manager
class ChoiceManager: public Manager{
    private:
        int insanityEffects;
        int impatienceEffects;
        int totalNumberOfChoices;
    public:
        ChoiceManager();
        int getInsanityEffects();
        int getImpatienceEffects();
        void evaluateChoice(int);
        int getTotalChoices();
};
