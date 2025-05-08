#include <iostream>
#include <Windows.h>
#include <vector>

using namespace std;

struct player_{

    int cur_loc = 0;
    bool life = true;
};

struct portal_ {

    string name;
    int target;
};

struct location_ {
    std::string name;
    std::string dis;
    vector<portal_> portal;
};

location_ room[4];

player_ user;

void InitGame(){
    room[0].name = "Тьма";
    room[0].dis = "Проснись, ты знаешь где ты?";
    room[0].portal.push_back({ "right", 1});

    room[1].name = "Мост";
    room[1].dis = "Поиграем?";
    room[1].portal.push_back({ "left", 2 });
    room[1].portal.push_back({ "back", 0 });

    room[2].name = "Дом";
    room[2].dis = "Где еда?";
    room[2].portal.push_back({ "back", 1 });

}

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    srand(time(NULL));
    InitGame();

    int ch;
    cin >> ch;
    
    
    



}