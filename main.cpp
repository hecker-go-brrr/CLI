#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include "commands.h"
using namespace std;

int main(){
    string ip = "";
    while(getline(cin,ip)){
        cout << ">> " << flush;
        vector<string> tokens;
        string token;
        stringstream ss(ip);
        while(ss>>token) tokens.push_back(token);
    }
}