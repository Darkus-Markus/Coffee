#include <iostream>
#include <Windows.h>
#include <vector>
//        switch (bot) {
    //
//            case 1: 
//                if (user == 1) {
//                    std::cout << "draw\n";
//                }
//                if (user == 2) {
//                    i++;
//                    std::cout << "win\n";
//                }
//                if (user == 3) {
//                    std::cout << "no win\n";
//                }
//                break;
//           
//
//            case 2: 
//                if (user == 2) {
//                    std::cout << "draw\n";
//                }
//                if (user == 3) {
//                    std::cout << "win\n";
//                    i++;
//                }
//                if (user == 1) {
//                    std::cout << "no win\n";
//                }
//                break;
//            

           /* case 3:
                if (user == 3) {
                    std::cout << "draw\n";
                }
                if (user == 1) {
                    std::cout << "win\n";
                    i++;
                }
                if (user == 2) {
                    std::cout << "no win\n";
                }
                break;


                  std::cout << "replay?\n";

            default:
                if (user != 1 || user != 2 || user != 3) {
                    std::cout << "ne verno\n";
                }
                break;
        }*/

   

struct items {

    int compas;
    int watch;
    bool phone = false;
    object heal;
};

struct info {
    int hp, attack;

    items p;
    std::string name;
    std::string ch;

};

std::vector<items>z;

class p {
    int vedro;

public:
    int abs;

    void game() {


        std::cout << "1.Камень\n2.Ножницы\n3.Бумага\n";

        std::string user;

        std::string bot[3]{ "камень","ножницы","бумага" };

        for (int i = 0; i < 3;) {

            std::cin >> user;
            int temp = 1 + rand() % 3;

            if (user == "камень" && bot[temp] == "ножницы" || user == "ножницы" && bot[temp] == "бумага" || user == "бумага" && bot[temp] == "камень") {
                std::cout << "win\n";
                i++;
            }
            else if (user == bot[temp]) {
                std::cout << "draw\n";
            }
            else {
                std::cout << "louse\n";
            }
        }
    }

};

items a;
p x;

info user;
void dom() {

    int numbers[4]{ 1, -5, -8, 6 };
    int n = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Вывод чисел:\n";
    for (int i = 0; i < n;) {
        std::cout << numbers[i] << std::endl;
        i++;
    }

    std::cout << "положительные числа:\n";
    for (int i = 0; i < n; i++) {
        if (numbers[i] > 0) {
            std::cout << numbers[i] << std::endl;
        }
    }

    std::cout << "отрицательные числа:\n";
    for (int i = 0; i < n; i++) {
        if (numbers[i] < 0) {
            std::cout << numbers[i] << std::endl;
        }
    }

    std::cout << "В порядке увеличения:\n";
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j > n; j++) {

            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
        std::cout << numbers[i] << std::endl;
    }
}

struct object {
    int lantern;
    int map;
};

struct items_house {

    int note;
    int watch;
    int mirror;
    object box;
};

struct inventory {
    std::string items [8];
    int QuantityItems = 0;
    void item(std::string items) {

    }
};

void InitGame() {
    std::cout << "Вокруг лес, окутанный серой дымкой.\n";
    std::cout << "Стволы деревьев теряются в ней, словно растворяясь между сном и явью.\n";
    std::cout << "Где - то вдали шепчутся голоса — то ли ветер играет";
    std::cout << " листьями, то ли кто - то зовёт тебя по имени.\n";
    std::cout << "*Алекс снова здесь...*\n";
    std::cout << "Фраза повисает в воздухе, будто её произнесли прямо у тебя в голове.\n";
    std::cout << "*На этот раз всё иначе, ты должен найти выход или погрузиться глубже.*\n";
    std::cout << "Алекс осматривается:\n- Слева угадывается контур старого дома.\n";
    std::cout << "- Справа — шаткий мост, переброшенный через пропасть.\n";

    std::cout << "Куда направишься?\nright - направо\nleft - налево\n";

    std::cin >> user.ch;

    if (user.ch == "left") {
        std::cout << "Свернув налево Алекса приследовало ощущение, что за ним наблюдают\n";
        std::cout << "ВДРУГ! Из кустов нападает тень,чтобы она исчезла\n";
        std::cout << "нужно трижды выиграть в камень,ножницы,бумага\n";
        x.game();
    }
    else if (user.ch == "right") {
        std::cout << "Свернув направо Алекс заходит в дом обросший мхом\n";
        dom();
    }
    else {
        std::cout << "ERROR";
    }
}


int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    srand(time(NULL));
    InitGame();

}