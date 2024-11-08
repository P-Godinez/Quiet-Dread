# include "Player.h"
# include "Demon.h"
# include  "ChoiceManager.h"
# include  "NarrativeManager.h"
class Game{
    private:
        bool isPlaying;
        Player player;
        Demon demon;
        ChoiceManager choiceManager;
        NarrativeManager narrativeManager;

    public:
        void startGame();
        void endGame(bool isOver);
        void update();
        bool checkStatus();

};