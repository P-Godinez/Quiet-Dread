class ChoiceManager{
    private:
        int choice;
        int insanityEffects;
        int impatienceEffects;
    public:
        int getChoice();
        int getInsanityEffects();
        int getImpatienceEffects();
        void evaluateChoice(int choice);

};