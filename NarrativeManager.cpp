#include "NarrativeManager.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
// Constructor
NarrativeManager :: NarrativeManager(): Manager(){
    textStoryName = "QuietDreadStory.txt";
    storyLine = "";
    storyScriptSize = 0;
}
// Reads the .txt file and returns the desired text line (string).
string NarrativeManager:: getStoryLine(int _round){
    vector <string> contents;
    string text;
    ifstream file(textStoryName);
    if(file.fail()){
        cerr << "Error" << endl;
        return "";
    } 
    while(getline(file, text)){
            contents.push_back(text);
    }
    file.close();
    if (_round < 0 || _round >= contents.size()){
        cerr << "Error" << endl;
        return "";
    }
    storyScriptSize = contents.size();
    return contents[_round];
}
// Returns the ending text line according to the type of ending of _character.
string NarrativeManager:: getEndingScene(string _character){
    if (_character == "Demon"){
        return getStoryLine(storyScriptSize - 3);
    } else if (_character == "Player"){
        return getStoryLine(storyScriptSize - 2);
    } else {
        return getStoryLine(storyScriptSize - 1);
    }
}
