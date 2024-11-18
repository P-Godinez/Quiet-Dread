# include "Character.h"
// Default constructor
Character:: Character(){
    stat = 0;
}
// Checks is the character is still active.
bool Character:: checkStatus(){
    if (stat >= 100){
        return false;
    } else {
        return true;
    }
}
