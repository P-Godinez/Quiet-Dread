#include <string>
#include<iostream>
using namespace std;
class NarrativeManager{
    private:
        string textStoryName;
        string storyLine;
    public:
        void readStoryScript(int round);
        string getStoryLine();
};
