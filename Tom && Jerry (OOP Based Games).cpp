#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<graphics.h>
#include <windows.h>
using namespace std;
/*
Tom & Jerry(Game)

	Objective:
1.	Jerry will be left in the screen and it can jump.
2.	Cheese and Tom will come from right randomly
3.	If jerry can touch cheese, then jerry will get point.
4.	If jerry touch Tom, then jerry lose it's one life.

*/
class road
{
protected:
    int position;
    int i;
public:
    void moves(int h)
    {
        //for(i=0; i<1200; i++)
        if(h==1)
        {
            setcolor(WHITE);
            line(-600+i,390,63999,390);  ///ROAD
            //setcolor(WHITE);
        }
        else
        {
            setcolor(WHITE);
            line(0,390,63999,390);
            //setcolor(WHITE);
        }
    }
    void chease_position();
    void tom_position();

};
class tom:virtual public road
{
protected:
    int position;
    int life_decrement;
    int t1;
    //int randomTom[500];
public:
    void showTom();
    //void set_random();

};
class jerry:public tom
{
    int position;
    int life_decrement;
public:
    void show()
    {
        ///jerry
        setcolor(RED);
        arc(130,330,30,50,-50);
        circle(115,370,17);
        circle(140,375,7);
        circle(143,375,2);
        arc(70,416,30,40,50);
        arc(80,416,30,40,50);
        arc(109,410,30,40,50);
        arc(109,404,30,40,50);

        moves(0);

        delay(3);



    }
    void jump()
    {
        for (int i=1; i<200; i+=2)
        {
            ///jerry
            setcolor(RED);
            arc(130,330-i,30,50,-50);
            circle(115,370-i,17);
            circle(140,375-i,7);
            circle(143,375-i,2);
            arc(70,416-i,30,40,50);
            arc(80,416-i,30,40,50);
            arc(109,410-i,30,40,50);
            arc(109,404-i,30,40,50);
            moves(0);
            //setcolor(RED);
            /// line(0,390,63999,390);  ///ROAD
            delay(1);
            cleardevice();
        }
        for (int i=200; i>0; i-=2)
        {
            ///jerry
            setcolor(RED);
            arc(130,330-i,30,50,-50);
            circle(115,370-i,17);
            circle(140,375-i,7);
            circle(143,375-i,2);
            arc(70,416-i,30,40,50);
            arc(80,416-i,30,40,50);
            arc(109,410-i,30,40,50);
            arc(109,404-i,30,40,50);
            moves(0);
            ///line(0,390,63999,390);  ///ROAD
            delay(1);
            cleardevice();
        }
    }

};


void set_random() ///not used yet
{

    int randomTom[500];
    for(int i=0; i<500; i++)
    {
        randomTom[i]=(rand() %6)*2;

    }
}

void tom::showTom()
{

    for (i=500; i>-100; i-=3)
    {
        ///Tom
        road::moves(1);
        setcolor(BLUE);
        arc(167+i,320,30,60,-50);
        circle(95+i,345,30);
        circle(51+i,350,15);
        circle(52+i,350,6);
        arc(-7+i,370,30,45,50);
        t1=72+i;
        arc(t1,320,30,45,-50);
        arc(135+i,350,30,53,-50);
        arc(150+i,350,30,53,-50);

        //road::moves();
        /*
         arc(187+i,320,30,60,-50);
         circle(115+i,345,30);
         circle(71+i,350,15);
         circle(72+i,350,6);
         arc(13+i,370,30,45,50);
         arc(92+i,320,30,45,-50);
         arc(155+i,350,30,53,-50);
         arc(170+i,350,30,53,-50);*/

//line(0,390,63999,390);  ///ROAD
        delay(1);
        cleardevice();
    }

}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\tc\\bgi");
    tom t[5];
    jerry j;
    char jmp;
    int i;
    j.show();
    while(!kbhit())
    {

        //getch();
        j.show();
        cin>>jmp;

        //  line(0,390,63999,390);  //ROAD
        j.show();

        if(jmp='j')
            j.jump();
        j.show();


        //set_random();

        t[0].showTom();


    }
    return 0;
}


