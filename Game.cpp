# include "Game.h"
# include <string>
// Constructor. 
Game:: Game(){
    isPlaying = false;
    endingCharacter = "";
    choicesMade = -1;
}
// Check if the game is still playing (if the user has not lost yet).
bool Game:: checkIsPlaying(){
    if(isPlaying == false){
        return false;
    } else {
        return true;
    }
}
// Needs to be called in the main function so that checkIsPlaying returns true.
void Game:: startGame(){
    isPlaying = true;
}
// Needs to be called if the user has lost of if the game is over. 
void Game:: endGame(){
    isPlaying = false;
}
// Increment round number and checks the game status. 
void Game:: update(){
    if(isPlaying == true){
        narrativeManager.incrementRound(1);
        choiceManager.incrementRound(1);
        choicesMade ++;
        if(checkStatus() == false){
            endGame();
        }
    }
}
// Evaluates if both characters are still active. 
bool Game:: checkStatus(){
    bool playerActive = player.checkStatus();
    bool demonActive = demon.checkStatus();
    if (playerActive == false){
        endingCharacter = "Player";
        return false;
    } else if (demonActive == false){
        endingCharacter = "Demon";
        return false;
    } else if(choiceManager.getTotalChoices() == choicesMade){
        return false;
    } else {
        return true;
    }
}
// Returns stats so it can be displayed on the main cpp file. 
string Game:: getGameStats(){
    string statText = "\n ============== STATS ============== \nPlayer's Insanity: " + to_string(player.getInsanity()) + "%\nDemon's Impatience: " + to_string(demon.getImpatience()) + "%\n";
    return statText;
}
// Returns the storyline according to the round number. 
string Game:: getCurrentStoryLine(){
    return narrativeManager.getStoryLine(narrativeManager.getRoundNumber());
}
// When the game is over, returns the final storyline based on the type of ending that the user gets. 
string Game:: getCurrentEnding(){
    return narrativeManager.getEndingScene(endingCharacter);
}
// Called in case the round number needs to be increased not only once. 
void Game:: instantUpdateRound(int _num){
    narrativeManager.incrementRound(_num);
    choiceManager.incrementRound(_num);
}
// Called in the main cpp after a choice is made to ensure that the next displayed string in terminal is narrative and not choice again. 
void Game:: reverseUpdateRound(int _revNum){
    narrativeManager.incrementRound(3 - _revNum);
    choiceManager.incrementRound(3 - _revNum);
}
// sets the player and demon stats with the choice managers methods and the user's choice in the main cpp. 
void Game::setStats(int _choice){
    choiceManager.evaluateChoice((_choice - choicesMade) + 1);
    demon.setImpatience(choiceManager.getImpatienceEffects());
    player.setInsanity(choiceManager.getInsanityEffects());
}
