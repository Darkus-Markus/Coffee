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
    room[0].name = "Мрачный лес\n";
    room[0].dis = "Проснись, ты знаешь где ты? Поскорее уходи!\n";
    room[0].portal.push_back({ "right", 1});

    room[1].name = "Мост\n";
    room[1].dis = "Выходя по тропинке к мосту, Алекс подмечает подозрительную чистоту\n";
    room[1].portal.push_back({ "left", 2 });
    room[1].portal.push_back({ "back", 0 });

    room[2].name = "Заброшенный дом\n";
    room[2].dis = "Выбрав скрытую тропу за кустами,\nАлекс видит дом с покрывшейся мохом крышей\n";
    room[2].portal.push_back({ "back", 1 });

    room[3].name = "Секретная комната\n";
    room[3].dis = "Получив ключ у Алекса появилась возможность зайти в комнату с жёлтой дверью\n";
}

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    //srand(time(NULL));
    InitGame();

    string ch;
    cin >> ch;

    if(ch == "look") {
        cout << "Локации\n";
        for (int i = 0; i < 4; i++) {
            cout << room[i].name;
        }
    }

    cout << room[user.cur_loc].name;
    cout << room[user.cur_loc].dis;
    cin >> ch;
    
    if (ch == "go") {
        cout << "Порталы\n";
        for (int i = 0 ; i < room[user.cur_loc].portal.size(); i++) {
                 
            cout << room[user.cur_loc].portal[i].name;
            
        } 
        for (int x = room[user.cur_loc].portal) {
            if (room->name == target_portal) {
                user.cur_loc = x.target;

            }//чтобы искал портал, чьё название нужно вывести
        }
    }



}