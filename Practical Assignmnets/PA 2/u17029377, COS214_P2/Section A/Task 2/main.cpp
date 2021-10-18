#include "Shirt.h"
#include "SoccerBall.h"
#include "Merchandise.h"

#include "ArsenalShirt.h"
#include "ArsenalSoccerBall.h"
#include "ChelseaShirt.h"
#include "ChelseaSoccerBall.h"
#include "LiverpoolShirt.h"
#include "LiverpoolSoccerBall.h"

#include "MerchandiseFactory.h"
#include "ArsenalFactory.h"
#include "ChelseaFactory.h"
#include "LiverpoolFactory.h"

#include <iostream>

using namespace std;

int main(){

    int createMore = 0; int mChoice = 0; int cChoice = 0; int merchAmount = 0; string size = ""; string inflated = "";
    Merchandise** merch; // array of merch
    MerchandiseFactory** merchFactory = new MerchandiseFactory*[3]; // factories
    merchFactory[0] = new ChalseaFactory();
    merchFactory[1] = new ArsenalFactory();
    merchFactory[2] = new LiverpoolFactory();
    do
    {
        cout << "Choose the type of merchandise you want to create: Ball=1, Shirt=2 > "; cin >> mChoice;
        cout << "Choose the club which merchandise should be created: Chelsea=1, Arsenal=2, Liverpool=3 > "; cin >> cChoice;

        if(mChoice == 1){
            // balls here
            cout << "Should the ball(s) be inflated? (y/n) > "; cin >> inflated;
        }
        else if(mChoice == 2){
            // shirts here
            cout << "Choose the size of the shirt(s) should be created > "; cin >> size;
        }
        else{
            cout << "Invalid merchandise input. 1 or 2" << endl;
        }
        cout << "How many merchandise items should be created? > "; cin >> merchAmount;
        // determine the clubs 

        merch = new Merchandise*[merchAmount];
        for (int i = 0; i < merchAmount; i++)
        {
            merch[i] = NULL;
        }
        
        if(cChoice == 1){
            // Chelsea
            if(mChoice == 1){
                // balls here
                for (int i = 0; i < merchAmount; i++)
                {
                    merch[i] = merchFactory[0]->createSoccerBall(inflated);
                }
            }
            else if(mChoice == 2){
                // shirts here
                for (int i = 0; i < merchAmount; i++)
                {
                    merch[i] =  merchFactory[0]->createShirt(size);
                }
            }
        }
        else if(cChoice == 2){
            // Arsenal
            if(mChoice == 1){
                // balls here
                for (int i = 0; i < merchAmount; i++)
                {
                    merch[i] = merchFactory[1]->createSoccerBall(inflated);
                }
            }
            else if(mChoice == 2){
                // shirts here
                for (int i = 0; i < merchAmount; i++)
                {
                    merch[i] = merchFactory[1]->createShirt(size);
                }
            }
        }
        else if(cChoice == 3){
            // Liverpool
            if(mChoice == 1){
                // balls here
                for (int i = 0; i < merchAmount; i++)
                {
                    merch[i] = merchFactory[2]->createSoccerBall(inflated);
                }
            }
            else if(mChoice == 2){
                // shirts here
                for (int i = 0; i < merchAmount; i++)
                {
                    merch[i] = merchFactory[2]->createShirt(size);
                }
            }
        }
        else{
            // invalid club choice
        }

        for(int i = 0 ; i < merchAmount; i++){
            // print descriptions here
            cout << merch[i]->getDescription() << endl;
        }
        
        cout << endl;
        cout << "Enter 1 to create more items or 0 to stop > "; cin >> createMore;
        cout << endl;
    } while (createMore == 1);
    

    return 0;
}