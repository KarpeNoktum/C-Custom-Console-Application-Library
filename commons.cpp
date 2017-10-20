#include "commons.h"
#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>
#include <cstdlib>

using namespace std;
commons::commons()
{
    cout << "Commons library succesfully linked!" << endl;
}

void commons::clr(){
    cout << "\033[2J\033[1;1H";
}

void commons::wait(){

    cin.get();
}

void commons::clrline(){
cout << "\033[2K";

}


//color must be ALL LOWERCASE AND SPELLED CORRECTLY
void commons::fgcolor(string a){

    if(a =="red"){
    cout << "\033[0;31m";}
    else if( a == "green"){
    cout << "\033[0;32m";}
    else if(a =="brown"){
    cout << "\033[0;33m";}
    else if(a =="blue"){
    cout << "\033[0;34m";}
    else if(a =="magenta"){
    cout << "\033[0;35m";}
    else if(a =="cyan"){
    cout << "\033[0;36m";}
    else if(a =="grey"){
    cout << "\033[0;37m";}
    else if(a =="test"){
    cout << "\033[0;38m";}
    else if (a == "reset"){
    cout << "\033[0m";
    }

}

void commons::bgcolor(string a){

    if(a =="red"){
    cout << "\033[7;31m";}
    else if( a == "green"){
    cout << "\033[7;32m";}
    else if(a =="brown"){
    cout << "\033[7;33m";}
    else if(a =="blue"){
    cout << "\033[7;34m";}
    else if(a =="magenta"){
    cout << "\033[7;35m";}
    else if(a =="cyan"){
    cout << "\033[7;36m";}
    else if(a =="grey"){
    cout << "\033[7;37m";}
    else if (a == "reset"){
    cout << "\033[0m";
    }

}

int commons::seedGen(){
    srand(time(0));
    return 0 + (rand() % 10000);
}

int commons::randGen(int a, int b){
    srand(seedGen());
    return a + (rand() % b);
}
