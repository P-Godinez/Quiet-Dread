# pragma once
# include "Manager.h"
#include <string>
using namespace std;
class NarrativeManager: public Manager{
    private:
        string textStoryName;
        string storyLine;
        int storyScriptSize;
    public:
        NarrativeManager();
        string getStoryLine(int round);
        string getEndingScene(string character);
}; 
