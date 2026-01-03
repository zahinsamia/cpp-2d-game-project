#include "Monster.hpp"
#include "Hunter.hpp"
#include "Environtment.hpp"
#include "Healthbar.hpp"
#include "Bomb.hpp"
#include "Items.hpp"
#include "Fruit.hpp"
#include <iostream>
#include <graphics.h>
#include <time.h>

using namespace std;

int main() {
 
    
    int screenWidth = getmaxwidth();
	int screenHeight = getmaxheight();
    char key;
	initwindow(screenWidth, screenHeight,"MIGHTY HUNTER");

    Character *character[3];
    Environtment wall1(0,200,700,300);
    Environtment wall2(400, 500, getmaxwidth(), 600);
    Healthbar healthbar1(1200, 30, 1500, 60, RED);
    Bomb bomb1(1230, 350, 1330, 450);
    Bomb bomb2(200, 50, 300, 150);
    
    Items *item;
    //Fruit fruit1(300,100,400,200);
    item =&fruit1;
    
    //Monster monster1(730, 200, 830, 300);
    //Monster monster2(290, 310, 390, 410);
    //Hunter hunter(800, 700, 900, 800, &healthbar1);
    Monster monster1(730, 200, 830, 300, 20, 0);
    Monster monster2(290, 310, 390, 410, 0,20);
    character[0] = new Hunter(290, 310, 390, 410, &healthbar1, &monster1, &monster2, &wall1,  &wall2, &bomb1, &bomb2);
    monster1.draw();
    monster2.draw();
    wall1.draw();
    wall2.draw();
    healthbar1.draw();
    character[0]->draw();
    bomb1.draw();
    bomb2.draw();
   
    while(key != 27) {
        for( ; ; ) {
            delay(100);
            monster1.move(20, 0);
            monster2.move(0, 20);
            character[0]->colission();
            if (kbhit())
            {
                key = getch();

                if (key == 0) // special keys like arrow keys need to call to getch() twice.
                key = getch();
            

                switch (toupper(key)) {
                    case 80:
                        character[0]->move(0, 20);
                        break;
                    case 72:
                        character[0]->move(0, -20);
                        break;
                    case 77:
                        character[0]->move(20, 0);
                        break;
                    case 75:
                        character[0]->move(-20, 0);
                    break;
                }
            }
        }
    }
  
   
    return 0;
}