#include "Demon.h"
// Despite being called a setter, it will increase the stat, not change it by the _stat parameter, but rather sum it with the _stat parameter.
void Demon:: setImpatience(int _stat){
    stat += _stat;
}

int Demon:: getImpatience(){
    return stat;
}
