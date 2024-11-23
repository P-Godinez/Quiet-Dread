# include <iostream>
# include "Demon.cpp"
# include "Player.cpp"
# include "Manager.cpp"
# include "NarrativeManager.cpp"
# include "ChoiceManager.cpp"
# include "Game.cpp"
# include "Character.cpp"

using namespace std;

int main(){  
    Game g1;
    int currentChoice;
    // START GAME with instructions and introduction.
    cout << "\n\n============== QUIET DREAD =============\n\n" << endl;
    g1.startGame();
    cout << "\n " <<  g1.getCurrentStoryLine() << endl;
    g1.update();
    // Start choice cycle
    while(g1.checkIsPlaying() == true){
         cout << "\n " << g1.getCurrentStoryLine() << endl;
         cout << "\n " << "Enter choice number: ";
         cin >> currentChoice;
         while(currentChoice <= 0 || currentChoice > 3){
            cout << "Enter 1, 2 or 3."<< endl;
            cin >> currentChoice;
         }
         g1.instantUpdateRound(currentChoice - 1);
         g1.setStats(currentChoice);
         g1.update();
         cout << "\n " << g1.getCurrentStoryLine() << endl;
         cout << g1.getGameStats() << endl;
         g1.reverseUpdateRound(currentChoice - 1);
    }
    // Get ending scene based on the user's choices. 
    cout << "\n " << g1.getCurrentEnding() << endl;
    cout << "\n " << "Thank you for playing \nPress any number to exit game." << endl;
    cin >> currentChoice;
    return 0;    
}
