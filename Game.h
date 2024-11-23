# pragma once
# include "Player.h"
# include "Demon.h"
# include "ChoiceManager.h"
# include "NarrativeManager.h"
# include <string>
class Game{
    private:
        bool isPlaying;
        Player player;
        Demon demon;
        ChoiceManager choiceManager;
        NarrativeManager narrativeManager;
        string endingCharacter;
        int choicesMade;

    public:
        Game();
        void startGame();
        void endGame();
        void update();
        void setStats(int);
        string getGameStats();
        bool checkStatus();
        bool checkIsPlaying();
        string getCurrentStoryLine();
        string getCurrentEnding();
        void instantUpdateRound(int);
        void reverseUpdateRound(int);

}; 
