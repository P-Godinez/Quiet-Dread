#include <string>
#include<iostream>
class NarrativeManager{
    private:
        string textStoryName;
        string storyLine;
    public:
        void readStoryScript(int round);
        string getStoryLine();
};