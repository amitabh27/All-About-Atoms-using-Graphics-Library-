#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

int i456;

char aaa[5];

for(i456 =10 ; i456 >=0 ; i456--)
   {  setcolor(i456+1);
       settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
      circle(getmaxx()/2,getmaxy()/2,50+10*i456);
      sprintf (aaa,"%d",i456);

	  outtextxy(getmaxx()/2-7, getmaxy()/2-10, aaa);
      sound(500-20*i456);
     delay(850);
     nosound();

    cleardevice();
   }



cleardevice();
setbkcolor(BLACK);
int rr=1;
 int xx,yy,ii,jj;

 for( ii=0;ii<91;ii=ii+3)
 {
 setcolor(GREEN);
 ellipse(300,225-ii,0,180,30+ii,10+ii);
 for(jj=0;jj<=6.28;jj++)
 {
 setcolor(GREEN);
 xx=300+((30+ii)*sin(jj));
 yy= 225-ii+((10+ii)*cos(jj));
 circle(xx,yy,rr);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(xx,yy,GREEN);
 sound(300+10*jj);
 delay(20);
 nosound();
 delay(5);

 }
}
for( ii=0;ii<91;ii=ii+3)
 {
 setcolor(GREEN);
 ellipse(300,225+ii,0,180,30+ii,10+ii);
 for(jj=0;jj<=6.28;jj++)
 {
 setcolor(GREEN);
 xx=300+((30+ii)*sin(jj));
 yy= 225+ii+((10+ii)*cos(jj));
 circle(xx,yy,rr);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(xx,yy,GREEN);
 sound(300+10*ii);
 delay(20);
 nosound();
 delay(5);
 }
}
delay(700);
for( ii=0;ii<91;ii=ii+3)
 {
 setcolor(GREEN);
 ellipse(300+ii,225,0,180,10+ii,30+ii);
 for(jj=0;jj<=6.28;jj++)
 {
 setcolor(GREEN);
 xx=300+ii+((10+ii)*sin(jj));
 yy= 225+((30+ii)*cos(jj));
 circle(xx,yy,rr);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(xx,yy,GREEN);
 sound(600+10*ii);
 delay(20);
 nosound();
 delay(5);
 }
}



 for( ii=0;ii<91;ii=ii+3)
 {
 setcolor(GREEN);
 ellipse(300-ii,225,0,180,10+ii,30+ii);
 for(jj=0;jj<=6.28;jj++)
 {
 setcolor(GREEN);
 xx=300-ii+((10+ii)*sin(jj));
 yy= 225+((30+ii)*cos(jj));
 circle(xx,yy,rr);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(xx,yy,GREEN);
 sound(800+10*jj);
 delay(20);
 nosound();
 delay(5);
 }
}
 delay(50);
 cleardevice();
delay(950);
setbkcolor(BLACK);
setcolor(GREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(10,60,"FANTASTIC FOUR ");
outtextxy(170,200,"PRESENTS");
delay(1900);

cleardevice();
int i;
    setbkcolor(WHITE);
   for( i=1;i<=10;i++)
   {
    setcolor(i);
    circle(100,65,50-5*i);
    sound(1000+30*i);
    delay(5);
    nosound();
    getch();

    setcolor(i);
    circle(510,350,50-5*i);

    sound(2500+30*i);
    delay(5);
    nosound();
    getch();

    setcolor(i);
    circle(510,65,45);
    setfillstyle(SOLID_FILL,i);
    floodfill(510,65,i);

    sound(4210+30*i);
    delay(10);
    nosound();
    getch();
     setcolor(i);
    circle(100,350,45);
    setfillstyle(SOLID_FILL,i);
    floodfill(100,350,i);

    sound(2420+30*i);
    delay(5);
    nosound();
    getch();

    }

   sound(200);
   delay(300);
   nosound();

    setcolor(GREEN);
   setbkcolor(BLACK);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
   outtextxy(150,160,"ABC OF");

 sound(300);
   delay(600);
   nosound();
   settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
   outtextxy(170,260,"ATOM");

   sound(400);
   delay(800);
   nosound();
   //delay(50);
   delay(2600);
   cleardevice();
   clrscr();

//                    ATOMIC CONCEPT


cleardevice();

setbkcolor(BLACK);
 setcolor(GREEN);
 settextstyle(1,0,5);
 outtextxy(0,0,"CONCEPT 1");
setcolor(CYAN);
 outtextxy(20,40,"DALTON'S ATOMIC CONCEPT");
 delay(1500);
cleardevice();

  setcolor(MAGENTA);
  textcolor(MAGENTA);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
  outtextxy(10,30,"P");
  sound(250);
  delay(200);
  nosound();
  outtextxy(50,30,"R");
  sound(1000);
  delay(200);
  nosound();
  outtextxy(90,30,"A");
  sound(1570);
  delay(200);
  nosound();
  outtextxy(130,30,"C");
  sound(2550);
  delay(200);
  nosound();
  outtextxy(170,30,"T");
  sound(4200);
  delay(200);
  nosound();
  outtextxy(200,30,"I");
  sound(600);
  delay(200);
  nosound();
  outtextxy(240,30,"C");
  sound(700);
  delay(200);
  nosound();
  outtextxy(280,30,"A");
  sound(2800);
  delay(200);
  nosound();
  outtextxy(320,30,"L");
  sound(1900);
  delay(500);
  nosound();
  delay(200);
  setcolor(CYAN);
  textcolor(CYAN);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
  outtextxy(10,100,"E");
  sound(750);
  delay(200);
  nosound();
  outtextxy(50,100,"X");
  sound(1500);
  delay(200);
  nosound();
  outtextxy(90,100,"P");
  sound(2510);
  delay(200);
  nosound();
  outtextxy(130,100,"E");
  sound(4250);
  delay(200);
  nosound();
  outtextxy(170,100,"R");
  sound(400);
  delay(200);
  nosound();
  outtextxy(200,100,"I");
  sound(4600);
  delay(200);
  nosound();
  outtextxy(240,100,"M");
  sound(700);
  delay(200);
  nosound();
  outtextxy(280,100,"E");
  sound(1800);
  delay(200);
  nosound();
  outtextxy(320,100,"N");
  sound(2900);
  delay(200);
  nosound();
  outtextxy(360,100,"T");
  sound(100);
  delay(200);
  nosound();

  outtextxy(400,100,"---");
   sound(900);
  delay(500);
  nosound();
  outtextxy(400,120,"---");
   sound(700);
  delay(500);
  nosound();

  settextstyle(DEFAULT_FONT,HORIZ_DIR,10);
  outtextxy(480,80,">>>");
   setlinestyle(DOTTED_LINE,0,2);

   sound(400);
  delay(500);
  nosound();
  delay(500);

  cleardevice();
  setcolor(GREEN);
 rectangle(40,320,80,340);
 rectangle(360,320,400,340);
 line(80,320,120,200);
 line(80,340,135,200);
 line(360,320,320,200);
 line(360,340,305,200);
 setcolor(RED);
 rectangle(100,190,340,200);


 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
  bar3d(120,40,320,190,20,1);

 setcolor(GREEN);
 rectangle(170,240,220,320);
 rectangle(160,320,230,340);

setcolor(YELLOW);
 line(170,235,160,198);
 sound(900);
 delay(5);
 nosound();
 line(175,235,165,198);
  sound(1200);
 delay(5);
 nosound();

 setcolor(RED);
 line(180,235,170,198);
  sound(100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(185,235,175,198);
  sound(200);
 delay(5);
 nosound();
 line(187,235,177,198);

  sound(300);
 delay(5);
 nosound();
 line(192,235,182,198);
  sound(1400);
 delay(5);
 nosound();
 line(196,235,186,198);
  sound(900);
 delay(5);
 nosound();
 line(200,235,200,198);
  sound(800);
 delay(5);
 nosound();

 line(203,235,203,198);
  sound(600);
 delay(5);
 nosound();
 line(206,235,206,198);
  sound(1000);
 delay(5);
 nosound();
 setcolor(RED);
 line(209,235,209,198);
  sound(1100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(212,235,212,198);
  sound(1300);
 delay(5);
 nosound();
 line(215,235,215,198);
  sound(700);
 delay(5);
 nosound();
 line(217,235,223,198);
  sound(700);
 delay(5);
 nosound();
 line(220,235,226,198);
  sound(1500);
 delay(5);
 nosound();
 //getch();
 delay(5);

 setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(150,140,5);
 floodfill(150,140,YELLOW);
 circle(160,140,5);
 floodfill(160,140,YELLOW);
 circle(140,140,5);
 floodfill(140,140,YELLOW);
 circle(150,130,5);
 floodfill(150,130,YELLOW);
 circle(150,150,5);
 floodfill(150,150,YELLOW);




 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 circle(155,133,5);
 floodfill(155,133,RED);
 circle(145,133,5);
 floodfill(145,133,RED);
 circle(155,147,5);
 floodfill(155,147,RED);
 circle(145,147,5);
 floodfill(145,147,RED);
 sound(300);
 delay(50);
 nosound();

  setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(250,140,5);
 floodfill(250,140,GREEN);
 circle(260,140,5);
 floodfill(260,140,GREEN);
 circle(240,140,5);
 floodfill(240,140,GREEN);
 circle(250,130,5);
 floodfill(250,130,GREEN);
 circle(250,150,5);
 floodfill(250,150,GREEN);




 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 circle(255,133,5);
 floodfill(255,133,RED);
 circle(245,133,5);
 floodfill(245,133,RED);
 circle(255,147,5);
 floodfill(255,147,RED);

 circle(245,147,5);
 floodfill(245,147,RED);
 sound(300);
 delay(50);
 nosound();
delay(800);
cleardevice();

 setcolor(RED);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
 outtextxy(5,20,"AFTER HEATING");
 outtextxy(5,100,"MOLECULES GET EXCITED...");
 outtextxy(5,170,"MOLECULES START");
 outtextxy(5,240," MOVING RANDOMLY");
 //getch();
 delay(2700);
 cleardevice();




  setcolor(GREEN);
 rectangle(40,320,80,340);
 rectangle(360,320,400,340);
 line(80,320,120,200);
 line(80,340,135,200);
 line(360,320,320,200);
 line(360,340,305,200);
 setcolor(RED);
 rectangle(100,190,340,200);


 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
 bar3d(120,40,320,190,20,1);



 setcolor(GREEN);
 rectangle(170,240,220,320);
 rectangle(160,320,230,340);

 setcolor(YELLOW);
 line(170,235,160,198);
 sound(900);
 delay(5);
 nosound();
 line(175,235,165,198);
  sound(1200);
 delay(5);
 nosound();

 setcolor(RED);
 line(180,235,170,198);
  sound(100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(185,235,175,198);
  sound(200);
 delay(5);
 nosound();
 line(187,235,177,198);

  sound(300);
 delay(5);
 nosound();
 line(192,235,182,198);
  sound(1400);
 delay(5);
 nosound();
 line(196,235,186,198);
  sound(900);
 delay(5);
 nosound();
 line(200,235,200,198);
  sound(800);
 delay(5);
 nosound();

 line(203,235,203,198);
  sound(600);
 delay(5);
 nosound();
 line(206,235,206,198);
  sound(1000);
 delay(5);
 nosound();
 setcolor(RED);
 line(209,235,209,198);
  sound(1100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(212,235,212,198);
  sound(1300);
 delay(5);
 nosound();
 line(215,235,215,198);
  sound(700);
 delay(5);
 nosound();
 line(217,235,223,198);
  sound(700);
 delay(5);
 nosound();
 line(220,235,226,198);
  sound(1500);
 delay(5);
 nosound();
// getch();
 delay(5);



 setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(130,110,5);
 floodfill(130,110,YELLOW);
 circle(140,110,5);
 floodfill(140,110,YELLOW);

 circle(125,110,5);
 floodfill(125,110,YELLOW);
 circle(130,100,5);
 floodfill(130,100,YELLOW);
 circle(130,120,5);
 floodfill(130,120,YELLOW);




 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 circle(135,103,5);
 floodfill(135,103,RED);
 circle(125,103,5);
 floodfill(125,103,RED);
 circle(135,117,5);
 floodfill(135,117,RED);
 circle(125,117,5);
 floodfill(125,117,RED);
 sound(300);
 delay(50);
 nosound();


  setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(230,80,5);
 floodfill(230,80,GREEN);
 circle(240,80,5);
 floodfill(240,80,GREEN);
 circle(220,80,5);
 floodfill(220,80,GREEN);
 circle(230,70,5);
 floodfill(230,70,GREEN);
 circle(230,90,5);
 floodfill(230,90,GREEN);




 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 circle(235,73,5);
 floodfill(235,73,RED);
 circle(225,73,5);
 floodfill(225,73,RED);
 circle(235,87,5);
 floodfill(235,87,RED);
 circle(225,87,5);
 floodfill(225,87,RED);
 sound(600);
 delay(50);
 nosound();
delay(500);
cleardevice();



  setcolor(GREEN);
 rectangle(40,320,80,340);
 rectangle(360,320,400,340);
 line(80,320,120,200);
 line(80,340,135,200);
 line(360,320,320,200);
 line(360,340,305,200);
 setcolor(RED);
 rectangle(100,190,340,200);


 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
 bar3d(120,40,320,190,20,1);



 setcolor(GREEN);
 rectangle(170,240,220,320);
 rectangle(160,320,230,340);
 setcolor(YELLOW);
 line(170,235,160,198);
 sound(900);
 delay(5);
 nosound();
 line(175,235,165,198);
  sound(1200);
 delay(5);
 nosound();

 setcolor(RED);
 line(180,235,170,198);
  sound(100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(185,235,175,198);
  sound(200);
 delay(5);
 nosound();
 line(187,235,177,198);

  sound(300);
 delay(5);
 nosound();
 line(192,235,182,198);
  sound(1400);
 delay(5);
 nosound();
 line(196,235,186,198);
  sound(900);
 delay(5);
 nosound();
 line(200,235,200,198);
  sound(800);
 delay(5);
 nosound();

 line(203,235,203,198);
  sound(600);
 delay(5);
 nosound();
 line(206,235,206,198);
  sound(1000);
 delay(5);
 nosound();
 setcolor(RED);
 line(209,235,209,198);
  sound(1100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(212,235,212,198);
  sound(1300);
 delay(5);
 nosound();
 line(215,235,215,198);
  sound(700);
 delay(5);
 nosound();
 line(217,235,223,198);
  sound(700);
 delay(5);
 nosound();
 line(220,235,226,198);
  sound(1500);
 delay(5);
 nosound();
 //getch();
 delay(5);



 setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(160,120,5);
 floodfill(160,120,YELLOW);
 circle(170,120,5);
 floodfill(170,120,YELLOW);
 circle(155,120,5);
 floodfill(155,120,YELLOW);
 circle(160,110,5);
 floodfill(160,110,YELLOW);
 circle(160,130,5);
 floodfill(160,130,YELLOW);




 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 circle(165,113,5);
 floodfill(165,113,RED);
 circle(155,113,5);
 floodfill(155,113,RED);
 circle(165,127,5);
 floodfill(165,127,RED);
 circle(155,127,5);
 floodfill(155,127,RED);
 sound(600);
 delay(50);
 nosound();
/*mol-2*/

  setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(260,80,5);
 floodfill(260,80,GREEN);
 circle(270,80,5);
 floodfill(270,80,GREEN);
 circle(250,80,5);
 floodfill(250,80,GREEN);
 circle(260,70,5);
 floodfill(260,70,GREEN);
 circle(260,90,5);
 floodfill(260,90,GREEN);




 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 circle(265,73,5);
 floodfill(265,73,RED);
 circle(255,73,5);
 floodfill(255,73,RED);
 circle(265,87,5);
 floodfill(265,87,RED);

 circle(255,87,5);
 floodfill(255,87,RED);
 sound(1500);
 delay(50);
 nosound();
delay(500);
cleardevice();

  setcolor(GREEN);
 rectangle(40,320,80,340);
 rectangle(360,320,400,340);
 line(80,320,120,200);
 line(80,340,135,200);
 line(360,320,320,200);
 line(360,340,305,200);
 setcolor(RED);
 rectangle(100,190,340,200);


 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
 bar3d(120,40,320,190,20,1);



 setcolor(GREEN);
 rectangle(170,240,220,320);
 rectangle(160,320,230,340);
 setcolor(YELLOW);
 line(170,235,160,198);
 sound(900);
 delay(5);
 nosound();
 line(175,235,165,198);
  sound(1200);
 delay(5);
 nosound();

 setcolor(RED);
 line(180,235,170,198);
  sound(100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(185,235,175,198);
  sound(200);
 delay(5);
 nosound();
 line(187,235,177,198);

  sound(300);
 delay(5);
 nosound();
 line(192,235,182,198);
  sound(1400);
 delay(5);
 nosound();
 line(196,235,186,198);
  sound(900);
 delay(5);
 nosound();
 line(200,235,200,198);
  sound(800);
 delay(5);
 nosound();

 line(203,235,203,198);
  sound(600);
 delay(5);
 nosound();
 line(206,235,206,198);
  sound(1000);
 delay(5);
 nosound();
 setcolor(RED);
 line(209,235,209,198);
  sound(1100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(212,235,212,198);
  sound(1300);
 delay(5);
 nosound();
 line(215,235,215,198);
  sound(700);
 delay(5);
 nosound();
 line(217,235,223,198);
  sound(700);
 delay(5);
 nosound();
 line(220,235,226,198);
  sound(1500);
 delay(5);
 nosound();
//getch();
 delay(5);



 setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(150,90,5);
 floodfill(150,90,YELLOW);
 circle(160,90,5);
 floodfill(160,90,YELLOW);
 circle(145,90,5);
 floodfill(145,90,YELLOW);
 circle(150,80,5);
 floodfill(150,80,YELLOW);
 circle(150,100,5);
 floodfill(150,100,YELLOW);




 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 circle(155,83,5);
 floodfill(155,83,RED);
 circle(145,83,5);
 floodfill(145,83,RED);
 circle(155,97,5);
 floodfill(155,97,RED);
 circle(145,97,5);
 floodfill(145,97,RED);
 sound(300);
 delay(50);
 nosound();


  setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(250,60,5);
 floodfill(250,60,GREEN);
 circle(260,60,5);
 floodfill(260,60,GREEN);
 circle(240,60,5);
 floodfill(240,60,GREEN);
 circle(250,50,5);
 floodfill(250,50,GREEN);
 circle(250,70,5);
 floodfill(250,70,GREEN);




 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 circle(255,53,5);
 floodfill(255,53,RED);
 circle(245,53,5);
 floodfill(245,53,RED);
 circle(255,67,5);
 floodfill(255,67,RED);
 circle(245,67,5);
 floodfill(245,67,RED);
 sound(1000);
 delay(50);
 nosound();
delay(500);
cleardevice();



  setcolor(GREEN);
 rectangle(40,320,80,340);
 rectangle(360,320,400,340);
 line(80,320,120,200);
 line(80,340,135,200);
 line(360,320,320,200);
 line(360,340,305,200);
 setcolor(RED);
 rectangle(100,190,340,200);


 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
 bar3d(120,40,320,190,20,1);



 setcolor(GREEN);
 rectangle(170,240,220,320);
 rectangle(160,320,230,340);
 setcolor(YELLOW);
 line(170,235,160,198);
 sound(900);
 delay(5);
 nosound();
 line(175,235,165,198);
  sound(1200);
 delay(5);
 nosound();

 setcolor(RED);
 line(180,235,170,198);
  sound(100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(185,235,175,198);
  sound(200);
 delay(5);
 nosound();
 line(187,235,177,198);

  sound(300);
 delay(5);
 nosound();
 line(192,235,182,198);
  sound(1400);
 delay(5);
 nosound();
 line(196,235,186,198);
  sound(900);
 delay(5);
 nosound();
 line(200,235,200,198);
  sound(800);
 delay(5);
 nosound();

 line(203,235,203,198);
  sound(600);
 delay(5);
 nosound();
 line(206,235,206,198);
  sound(1000);
 delay(5);
 nosound();
 setcolor(RED);
 line(209,235,209,198);
  sound(1100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(212,235,212,198);
  sound(1300);
 delay(5);
 nosound();
 line(215,235,215,198);
  sound(700);
 delay(5);
 nosound();
 line(217,235,223,198);
  sound(700);
 delay(5);
 nosound();
 line(220,235,226,198);
  sound(1500);
 delay(5);
 nosound();
 //getch();
 delay(5);



 setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(190,160,5);
 floodfill(190,160,YELLOW);
 circle(200,160,5);
 floodfill(200,160,YELLOW);
 circle(190,160,5);
 floodfill(190,160,YELLOW);
 circle(190,150,5);
 floodfill(190,150,YELLOW);
 circle(190,170,5);
 floodfill(190,170,YELLOW);




 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 circle(195,153,5);
 floodfill(195,153,RED);
 circle(185,153,5);
 floodfill(185,153,RED);
 circle(195,167,5);
 floodfill(195,167,RED);
 circle(185,167,5);
 floodfill(185,167,RED);
 sound(900);
 delay(50);
 nosound();


  setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(260,110,5);
 floodfill(260,110,GREEN);
 circle(270,110,5);
 floodfill(270,110,GREEN);
 circle(250,110,5);
 floodfill(250,110,GREEN);
 circle(260,100,5);
 floodfill(260,100,GREEN);
 circle(260,120,5);
 floodfill(260,120,GREEN);




 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 circle(265,103,5);
 floodfill(265,103,RED);
 circle(255,103,5);
 floodfill(255,103,RED);
 circle(265,117,5);
 floodfill(265,117,RED);
 circle(255,117,5);
 floodfill(255,117,RED);
 sound(700);
 delay(50);
 nosound();
delay(500);
cleardevice();


  setcolor(GREEN);
 rectangle(40,320,80,340);
 rectangle(360,320,400,340);
 line(80,320,120,200);
 line(80,340,135,200);
 line(360,320,320,200);
 line(360,340,305,200);
 setcolor(RED);
 rectangle(100,190,340,200);


 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
 bar3d(120,40,320,190,20,1);



 setcolor(GREEN);
 rectangle(170,240,220,320);
 rectangle(160,320,230,340);


 setlinestyle(DOTTED_LINE,0,2);
 setcolor(YELLOW);
 line(170,235,160,198);
 sound(900);
 delay(5);
 nosound();
 line(175,235,165,198);
  sound(1200);
 delay(5);
 nosound();

 setcolor(RED);
 line(180,235,170,198);
  sound(100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(185,235,175,198);
  sound(200);
 delay(5);
 nosound();
 line(187,235,177,198);

  sound(300);
 delay(5);
 nosound();
 line(192,235,182,198);
  sound(1400);
 delay(5);
 nosound();
 line(196,235,186,198);
  sound(900);
 delay(5);
 nosound();
 line(200,235,200,198);
  sound(800);
 delay(5);
 nosound();

 line(203,235,203,198);
  sound(600);
 delay(5);
 nosound();
 line(206,235,206,198);
  sound(1000);
 delay(5);
 nosound();
 setcolor(RED);
 line(209,235,209,198);
  sound(1100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(212,235,212,198);
  sound(1300);
 delay(5);
 nosound();
 line(215,235,215,198);
  sound(700);
 delay(5);
 nosound();
 line(217,235,223,198);
  sound(700);
 delay(5);
 nosound();
 line(220,235,226,198);
  sound(1500);
 delay(5);
 nosound();
 //getch();
 delay(5);



 setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(150,140,5);
 floodfill(150,140,YELLOW);
 circle(160,140,5);
 floodfill(160,140,YELLOW);
 circle(140,140,5);
 floodfill(140,140,YELLOW);
 circle(150,130,5);
 floodfill(150,130,YELLOW);
 circle(150,150,5);
 floodfill(150,150,YELLOW);




 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 circle(155,133,5);
 floodfill(155,133,RED);
 circle(145,133,5);
 floodfill(145,133,RED);
 circle(155,147,5);
 floodfill(155,147,RED);
 circle(145,147,5);
 floodfill(145,147,RED);
 sound(300);
 delay(50);
 nosound();


 setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(180,140,5);
 floodfill(180,140,GREEN);
 circle(190,140,5);
 floodfill(190,140,GREEN);
 circle(170,140,5);
 floodfill(170,140,GREEN);
 circle(180,130,5);
 floodfill(180,130,GREEN);
 circle(180,150,5);
 floodfill(180,150,GREEN);




 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 circle(185,133,5);
 floodfill(185,133,RED);
 circle(175,133,5);
 floodfill(175,133,RED);
 circle(185,147,5);
 floodfill(185,147,RED);
 circle(175,147,5);
 floodfill(175,147,RED);
 sound(300);
 delay(50);
 nosound();


setcolor(YELLOW);
textcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(300,50,"!! BOOM !!");
sound(120);
delay(500);
nosound();

setcolor(YELLOW);
textcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(80,100,"!! BOOM !!");


sound(100);
delay(500);
nosound();

setcolor(YELLOW);
textcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(400,420,"!! BOOM !!");

sound(50);
delay(800);
nosound();

delay(1000);






 setcolor(RED);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
 outtextxy(360,80,"AFTER COLLISION,");
 outtextxy(360,130,"MOLECULES");
 outtextxy(360,200," BREAK");
 //getch();
 delay(3600);

 cleardevice();




  setcolor(GREEN);
 rectangle(40,320,80,340);
 rectangle(360,320,400,340);
 line(80,320,120,200);
 line(80,340,135,200);
 line(360,320,320,200);
 line(360,340,305,200);
 setcolor(RED);
 rectangle(100,190,340,200);


 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
 bar3d(120,40,320,190,20,1);



 setcolor(GREEN);
 rectangle(170,240,220,320);
 rectangle(160,320,230,340);


 setlinestyle(DOTTED_LINE,0,2);
 setcolor(YELLOW);
 line(170,235,160,198);
 sound(900);
 delay(5);
 nosound();
 line(175,235,165,198);
  sound(1200);
 delay(5);
 nosound();

 setcolor(RED);
 line(180,235,170,198);
  sound(100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(185,235,175,198);
  sound(200);
 delay(5);
 nosound();
 line(187,235,177,198);

  sound(300);
 delay(5);
 nosound();
 line(192,235,182,198);
  sound(1400);
 delay(5);
 nosound();
 line(196,235,186,198);
  sound(900);
 delay(5);
 nosound();
 line(200,235,200,198);
  sound(800);
 delay(5);
 nosound();

 line(203,235,203,198);
  sound(600);
 delay(5);
 nosound();
 line(206,235,206,198);
  sound(1000);
 delay(5);
 nosound();
 setcolor(RED);
 line(209,235,209,198);
  sound(1100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(212,235,212,198);
  sound(1300);
 delay(5);
 nosound();
 line(215,235,215,198);
  sound(700);
 delay(5);
 nosound();
 line(217,235,223,198);
  sound(700);
 delay(5);
 nosound();
 line(220,235,226,198);
  sound(1500);
 delay(5);
 nosound();
 //getch();
 delay(5);

 setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(170,140,10);
 floodfill(170,140,GREEN);

 setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(270,110,10);
 floodfill(270,110,YELLOW);

  setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(230,70,10);
 floodfill(230,70,GREEN);

  setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(210,170,10);
 floodfill(210,170,YELLOW);


  setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(290,50,10);
 floodfill(290,50,GREEN);

  setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(250,85,10);
 floodfill(250,85,YELLOW);



  setcolor(RED);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
 outtextxy(360,80,"INDIVIDUAL ");
 outtextxy(360,150,"ATOMS ARE ");
 outtextxy(360,220,"   FORMED");
 //getch();
 delay(3200);
cleardevice();





 setcolor(GREEN);
 rectangle(40,320,80,340);
 rectangle(360,320,400,340);
 line(80,320,120,200);
 line(80,340,135,200);
 line(360,320,320,200);
 line(360,340,305,200);
 setcolor(RED);
 rectangle(100,190,340,200);


 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
 bar3d(120,40,320,190,20,1);








 setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(180,180,10);
 floodfill(180,180,YELLOW);
 setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(220,180,10);
 floodfill(220,180,GREEN);
 setcolor(GREEN);
 rectangle(170,240,220,320);
 rectangle(160,320,230,340);


  setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(480,380,10);
 floodfill(480,380,YELLOW);
 setcolor(RED);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 outtextxy(500,375,"ATOM-1");

  setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(480,410,10);
 floodfill(480,410,GREEN);
 setcolor(RED);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 outtextxy(500,405,"ATOM-2");


 setlinestyle(DOTTED_LINE,0,2);
 setcolor(YELLOW);
 line(170,235,160,198);
 sound(900);
 delay(5);
 nosound();
 line(175,235,165,198);
  sound(1200);
 delay(5);
 nosound();

 setcolor(RED);
 line(180,235,170,198);
  sound(100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(185,235,175,198);
  sound(200);
 delay(5);
 nosound();
 line(187,235,177,198);

  sound(300);
 delay(5);
 nosound();
 line(192,235,182,198);
  sound(1400);
 delay(5);
 nosound();
 line(196,235,186,198);
  sound(900);
 delay(5);
 nosound();
 line(200,235,200,198);
  sound(800);
 delay(5);
 nosound();

 line(203,235,203,198);
  sound(600);
 delay(5);
 nosound();
 line(206,235,206,198);
  sound(1000);
 delay(5);
 nosound();
 setcolor(RED);
 line(209,235,209,198);
  sound(1100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(212,235,212,198);
  sound(1300);
 delay(5);
 nosound();
 line(215,235,215,198);
  sound(700);
 delay(5);
 nosound();
 line(217,235,223,198);
  sound(700);
 delay(5);
 nosound();
 line(220,235,226,198);
  sound(1500);
 delay(5);
 nosound();
 //getch();
 delay(5);

/* area1=imagesize(170,170-2*m,190,190-2*m);
 p1=malloc(area1);
 while(!kbhit())
 {
 t1=1+random(200);
 t2=1+random(160);
   getimage(170, 170-2*m, 170 + 20, 170-2*m + 20, p1);
      putimage(170, 170-2*m, p1, XOR_PUT);
      putimage(t1 , t2, p1, XOR_PUT);
      delay(1000);


      l1 = t1;
      top1 = t2;}
  */

  delay(1000);
 cleardevice();


  /* 2nd execution */
 setcolor(RED);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
 outtextxy(10,20,"AFTER HEATING");
 outtextxy(20,100,"ATOMS GET EXCITED...");
 outtextxy(10,170,"ATOMS START");
 outtextxy(20,240," MOVING RANDOMLY");
 //getch();
 delay(3600);
 cleardevice();

 setcolor(GREEN);
 rectangle(40,320,80,340);
 rectangle(360,320,400,340);
 line(80,320,120,200);
 line(80,340,135,200);
 line(360,320,320,200);
 line(360,340,305,200);
 setcolor(BLUE);
 rectangle(100,190,340,200);


 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
 bar3d(120,40,320,190,20,1);
 setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(140,140,10);
 floodfill(140,140,YELLOW);
 setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(250,110,10);
 floodfill(250,110,GREEN);
 setcolor(GREEN);
 rectangle(170,240,220,320);
 rectangle(160,320,230,340);

 setlinestyle(DOTTED_LINE,0,2);
 setcolor(YELLOW);
 line(170,235,160,198);
 sound(900);
 delay(5);
 nosound();
 line(175,235,165,198);
  sound(1200);
 delay(5);
 nosound();

 setcolor(RED);
 line(180,235,170,198);
  sound(100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(185,235,175,198);
  sound(200);
 delay(5);
 nosound();
 line(187,235,177,198);

  sound(300);
 delay(5);
 nosound();
 line(192,235,182,198);
  sound(1400);
 delay(5);
 nosound();
 line(196,235,186,198);
  sound(900);
 delay(5);
 nosound();
 line(200,235,200,198);
  sound(800);
 delay(5);
 nosound();

 line(203,235,203,198);
  sound(600);
 delay(5);
 nosound();
 line(206,235,206,198);
  sound(1000);
 delay(5);
 nosound();
 setcolor(RED);
 line(209,235,209,198);
  sound(1100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(212,235,212,198);
  sound(1300);
 delay(5);
 nosound();
 line(215,235,215,198);
  sound(700);
 delay(5);
 nosound();
 line(217,235,223,198);
  sound(700);
 delay(5);
 nosound();
 line(220,235,226,198);
  sound(1500);
 delay(5);
 nosound();
//getch();

delay(200);
 cleardevice();





 setcolor(GREEN);
 rectangle(40,320,80,340);
 rectangle(360,320,400,340);
 line(80,320,120,200);
 line(80,340,135,200);
 line(360,320,320,200);
 line(360,340,305,200);
 setcolor(BLUE);
 rectangle(100,190,340,200);


 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
 bar3d(120,40,320,190,20,1);
 setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(170,90,10);
 floodfill(170,90,YELLOW);
 setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(290,140,10);
 floodfill(290,140,GREEN);
 setcolor(GREEN);
 rectangle(170,240,220,320);
 rectangle(160,320,230,340);

 setlinestyle(DOTTED_LINE,0,2);
 setcolor(YELLOW);
 line(170,235,160,198);
 sound(900);
 delay(5);
 nosound();
 line(175,235,165,198);
  sound(1200);
 delay(5);
 nosound();

 setcolor(RED);
 line(180,235,170,198);
  sound(100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(185,235,175,198);
  sound(200);
 delay(5);
 nosound();
 line(187,235,177,198);

  sound(300);
 delay(5);
 nosound();
 line(192,235,182,198);
  sound(1400);
 delay(5);
 nosound();
 line(196,235,186,198);
  sound(900);
 delay(5);
 nosound();
 line(200,235,200,198);
  sound(800);
 delay(5);
 nosound();

 line(203,235,203,198);
  sound(600);
 delay(5);
 nosound();
 line(206,235,206,198);
  sound(1000);
 delay(5);
 nosound();
 setcolor(RED);
 line(209,235,209,198);
  sound(1100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(212,235,212,198);
  sound(1300);
 delay(5);
 nosound();
 line(215,235,215,198);
  sound(700);
 delay(5);
 nosound();
 line(217,235,223,198);
  sound(700);
 delay(5);
 nosound();
 line(220,235,226,198);
  sound(1500);
 delay(5);
 nosound();
// getch();

 delay(300);
 cleardevice();



 setcolor(GREEN);
 rectangle(40,320,80,340);
 rectangle(360,320,400,340);
 line(80,320,120,200);
 line(80,340,135,200);
 line(360,320,320,200);
 line(360,340,305,200);
 setcolor(BLUE);
 rectangle(100,190,340,200);


 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
 bar3d(120,40,320,190,20,1);
 setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(150,60,10);
 floodfill(150,60,YELLOW);
 setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(220,110,10);
 floodfill(220,110,GREEN);
 setcolor(GREEN);
 rectangle(170,240,220,320);
 rectangle(160,320,230,340);

 setlinestyle(DOTTED_LINE,0,2);
 setcolor(YELLOW);
 line(170,235,160,198);
 sound(900);
 delay(5);
 nosound();
 line(175,235,165,198);
  sound(1200);
 delay(5);
 nosound();

 setcolor(RED);
 line(180,235,170,198);
  sound(100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(185,235,175,198);
  sound(200);
 delay(5);
 nosound();
 line(187,235,177,198);

  sound(300);
 delay(5);
 nosound();
 line(192,235,182,198);
  sound(1400);
 delay(5);
 nosound();
 line(196,235,186,198);
  sound(900);
 delay(5);
 nosound();
 line(200,235,200,198);
  sound(800);
 delay(5);
 nosound();

 line(203,235,203,198);
  sound(600);
 delay(5);
 nosound();
 line(206,235,206,198);
  sound(1000);
 delay(5);
 nosound();
 setcolor(RED);
 line(209,235,209,198);
  sound(1100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(212,235,212,198);
  sound(1300);
 delay(5);
 nosound();
 line(215,235,215,198);
  sound(700);
 delay(5);
 nosound();
 line(217,235,223,198);
  sound(700);
 delay(5);
 nosound();
 line(220,235,226,198);
  sound(1500);
 delay(5);
 nosound();
 //getch();

 delay(300);
 cleardevice();







 setcolor(GREEN);
 rectangle(40,320,80,340);
 rectangle(360,320,400,340);
 line(80,320,120,200);
 line(80,340,135,200);
 line(360,320,320,200);
 line(360,340,305,200);
 setcolor(BLUE);
 rectangle(100,190,340,200);


 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
 bar3d(120,40,320,190,20,1);
 setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(190,50,10);
 floodfill(190,50,YELLOW);
 setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(290,160,10);
 floodfill(290,160,GREEN);
 setcolor(GREEN);
 rectangle(170,240,220,320);
 rectangle(160,320,230,340);

 setlinestyle(DOTTED_LINE,0,2);
 setcolor(YELLOW);
 line(170,235,160,198);
 sound(900);
 delay(5);
 nosound();
 line(175,235,165,198);
  sound(1200);
 delay(5);
 nosound();

 setcolor(RED);
 line(180,235,170,198);
  sound(100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(185,235,175,198);
  sound(200);
 delay(5);
 nosound();
 line(187,235,177,198);

  sound(300);
 delay(5);
 nosound();
 line(192,235,182,198);
  sound(1400);
 delay(5);
 nosound();
 line(196,235,186,198);
  sound(900);
 delay(5);
 nosound();
 line(200,235,200,198);
  sound(800);
 delay(5);
 nosound();

 line(203,235,203,198);
  sound(600);
 delay(5);
 nosound();
 line(206,235,206,198);
  sound(1000);
 delay(5);
 nosound();
 setcolor(RED);
 line(209,235,209,198);
  sound(1100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(212,235,212,198);
  sound(1300);
 delay(5);
 nosound();
 line(215,235,215,198);
  sound(700);
 delay(5);
 nosound();
 line(217,235,223,198);
  sound(700);
 delay(5);
 nosound();
 line(220,235,226,198);
  sound(1500);
 delay(5);
 nosound();
// getch();

 delay(500);
 cleardevice();




 setcolor(GREEN);
 rectangle(40,320,80,340);
 rectangle(360,320,400,340);
 line(80,320,120,200);
 line(80,340,135,200);
 line(360,320,320,200);
 line(360,340,305,200);
 setcolor(BLUE);
 rectangle(100,190,340,200);


 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
 bar3d(120,40,320,190,20,1);
 setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(140,70,10);
 floodfill(140,70,YELLOW);
 setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(240,130,10);
 floodfill(240,130,GREEN);
 setcolor(GREEN);
 rectangle(170,240,220,320);
 rectangle(160,320,230,340);

 setlinestyle(DOTTED_LINE,0,2);
 setcolor(YELLOW);
 line(170,235,160,198);
 sound(900);
 delay(5);
 nosound();
 line(175,235,165,198);
  sound(1200);
 delay(5);
 nosound();

 setcolor(RED);
 line(180,235,170,198);
  sound(100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(185,235,175,198);
  sound(200);
 delay(5);
 nosound();
 line(187,235,177,198);

  sound(300);
 delay(5);
 nosound();
 line(192,235,182,198);
  sound(1400);
 delay(5);
 nosound();
 line(196,235,186,198);
  sound(900);
 delay(5);
 nosound();
 line(200,235,200,198);
  sound(800);
 delay(5);
 nosound();

 line(203,235,203,198);
  sound(600);
 delay(5);
 nosound();
 line(206,235,206,198);
  sound(1000);
 delay(5);
 nosound();
 setcolor(RED);
 line(209,235,209,198);
  sound(1100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(212,235,212,198);
  sound(1300);
 delay(5);
 nosound();
 line(215,235,215,198);
  sound(700);
 delay(5);
 nosound();
 line(217,235,223,198);
  sound(700);
 delay(5);
 nosound();
 line(220,235,226,198);
  sound(1500);
 delay(5);
 nosound();
 //getch();

 delay(500);
 cleardevice();




 setcolor(GREEN);
 rectangle(40,320,80,340);
 rectangle(360,320,400,340);
 line(80,320,120,200);
 line(80,340,135,200);
 line(360,320,320,200);
 line(360,340,305,200);
 setcolor(BLUE);
 rectangle(100,190,340,200);


 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
 bar3d(120,40,320,190,20,1);
 setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(280,150,10);
 floodfill(280,150,YELLOW);
 setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(290,100,10);
 floodfill(290,100,GREEN);
 setcolor(GREEN);
 rectangle(170,240,220,320);
 rectangle(160,320,230,340);

 setlinestyle(DOTTED_LINE,0,2);
 setcolor(YELLOW);
 line(170,235,160,198);
 sound(900);
 delay(5);
 nosound();
 line(175,235,165,198);
  sound(1200);
 delay(5);
 nosound();

 setcolor(RED);
 line(180,235,170,198);
  sound(100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(185,235,175,198);
  sound(200);
 delay(5);
 nosound();
 line(187,235,177,198);

  sound(300);
 delay(5);
 nosound();
 line(192,235,182,198);
  sound(1400);
 delay(5);
 nosound();
 line(196,235,186,198);
  sound(900);
 delay(5);
 nosound();
 line(200,235,200,198);
  sound(800);
 delay(5);
 nosound();

 line(203,235,203,198);
  sound(600);
 delay(5);
 nosound();
 line(206,235,206,198);
  sound(1000);
 delay(5);
 nosound();
 setcolor(RED);
 line(209,235,209,198);
  sound(1100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(212,235,212,198);
  sound(1300);
 delay(5);
 nosound();
 line(215,235,215,198);
  sound(700);
 delay(5);
 nosound();
 line(217,235,223,198);
  sound(700);
 delay(5);
 nosound();
 line(220,235,226,198);
  sound(1500);
 delay(5);
 nosound();
 //getch();

 delay(500);
 cleardevice();

















 setcolor(GREEN);
 rectangle(40,320,80,340);
 rectangle(360,320,400,340);
 line(80,320,120,200);
 line(80,340,135,200);
 line(360,320,320,200);
 line(360,340,305,200);
 setcolor(BLUE);
 rectangle(100,190,340,200);


 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
 bar3d(120,40,320,190,20,1);

 setcolor(GREEN);
 rectangle(170,240,220,320);
 rectangle(160,320,230,340);

 setlinestyle(DOTTED_LINE,0,2);
 setcolor(YELLOW);
 line(170,235,160,198);
 sound(900);
 delay(5);
 nosound();
 line(175,235,165,198);
  sound(1200);
 delay(5);
 nosound();

 setcolor(RED);
 line(180,235,170,198);
  sound(100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(185,235,175,198);
  sound(200);
 delay(5);
 nosound();
 line(187,235,177,198);

  sound(300);
 delay(5);
 nosound();
 line(192,235,182,198);
  sound(1400);
 delay(5);
 nosound();
 line(196,235,186,198);
  sound(900);
 delay(5);
 nosound();
 line(200,235,200,198);
  sound(800);
 delay(5);
 nosound();

 line(203,235,203,198);
  sound(600);
 delay(5);
 nosound();
 line(206,235,206,198);
  sound(1000);
 delay(5);
 nosound();
 setcolor(RED);
 line(209,235,209,198);
  sound(1100);
 delay(5);
 nosound();
 setcolor(YELLOW);
 line(212,235,212,198);
  sound(1300);
 delay(5);
 nosound();
 line(215,235,215,198);
  sound(700);
 delay(5);
 nosound();
 line(217,235,223,198);
  sound(700);
 delay(5);
 nosound();
 line(220,235,226,198);
  sound(1500);
 delay(5);
 nosound();
// getch();

 setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(220,90,10);
 floodfill(220,90,YELLOW);
 setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(240,90,10);
 floodfill(240,90,GREEN);


setcolor(YELLOW);
textcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(300,50,"!! BOOM !!");
//getch();
sound(120);
delay(500);
nosound();

setcolor(YELLOW);
textcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(80,100,"!! BOOM !!");
//getch();


sound(100);
delay(500);
nosound();

setcolor(YELLOW);
textcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(400,420,"!! BOOM !!");
//getch();

sound(50);
delay(800);
nosound();

delay(1000);






 setcolor(RED);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
 outtextxy(360,80,"AFTER COLLISION,");
 outtextxy(360,130,"AN ATOM");
 outtextxy(360,200,"DOESN'T BREAK");
 outtextxy(360,270,"FURTHER ");
 outtextxy(360,370,"LIKE MOLECULE");
 delay(3700);

 cleardevice();



 setcolor(RED);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,3);

 outtextxy(10,20,"AN ATOM IS THE");
   setcolor(MAGENTA);
  textcolor(MAGENTA);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
  outtextxy(10,100,"S");
  sound(250);
  delay(200);
  nosound();
  outtextxy(50,100,"M");
  sound(1000);
  delay(200);
  nosound();
  outtextxy(90,100,"A");
  sound(1570);
  delay(200);
  nosound();
  outtextxy(130,100,"L");
  sound(2550);
  delay(200);
  nosound();
  outtextxy(170,100,"L");
  sound(4200);
  delay(200);
  nosound();
  outtextxy(200,100,"E");
  sound(600);
  delay(200);
  nosound();
  outtextxy(240,100,"S");
  sound(700);
  delay(200);
  nosound();
  outtextxy(280,100,"T");
  sound(2800);
  delay(200);
  nosound();


   setcolor(YELLOW);
  textcolor(YELLOW);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
  outtextxy(10,200,"I");
  sound(2550);
  delay(200);
  nosound();
  outtextxy(50,200,"N");
  sound(5000);
  delay(200);
  nosound();
  outtextxy(90,200,"D");
  sound(1570);
  delay(200);
  nosound();
  outtextxy(130,200,"I");
  sound(3550);
  delay(200);
  nosound();
  outtextxy(170,200,"V");
  sound(4200);
  delay(200);
  nosound();
  outtextxy(200,200,"I");
  sound(600);
  delay(200);
  nosound();
  outtextxy(240,200,"S");
  sound(1700);
  delay(200);
  nosound();
  outtextxy(280,200,"I");
  sound(2800);
  delay(200);
  nosound();
  outtextxy(320,200,"B");
  sound(1300);
  delay(200);
  nosound();
  outtextxy(360,200,"L");
  sound(1700);
  delay(200);
  nosound();
  outtextxy(400,200,"E");
  sound(4800);
  delay(200);
  nosound();
  delay(200);
   setcolor(GREEN);
  textcolor(GREEN);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
  outtextxy(10,300,"P");
  sound(2350);
  delay(200);
  nosound();
  outtextxy(50,300,"A");
  sound(1000);
  delay(200);
  nosound();
  outtextxy(90,300,"R");
  sound(1570);
  delay(200);
  nosound();
  outtextxy(130,300,"T");
  sound(2550);
  delay(200);
  nosound();
  outtextxy(170,300,"I");
  sound(4200);
  delay(200);
  nosound();
  outtextxy(200,300,"C");
  sound(1600);
  delay(200);
  nosound();
  outtextxy(240,300,"L");
  sound(700);
  delay(200);
  nosound();
  outtextxy(280,300,"E");
  sound(2800);
  delay(200);
  nosound();



 delay(2000);



//                              concept 2

cleardevice();
 setlinestyle(SOLID_LINE,0,2);


//int i;

setbkcolor(BLACK);
 setcolor(GREEN);

 settextstyle(1,0,5);
 outtextxy(0,0,"CONCEPT 2:");
 setcolor(CYAN);
 outtextxy(60,40,"THOMPSON'S PLUM PUDDING");
 outtextxy(110,80," MODEL");
 delay(2000);
cleardevice();
 delay(200);

setcolor(GREEN);

 settextstyle(1,0,4);
 outtextxy(5,0,"An atom can be");
 outtextxy(5,45,"considered as a PLUM PUDDING");

 delay(2000);
cleardevice();


settextstyle(1,0,1);
setcolor(CYAN);
 outtextxy(150,147,"POSITIVE PUDDING");
line(250,200,250,160);
line(250,200,247,195);
line(250,200,253,195);

setcolor(YELLOW);
    circle(325,264,3);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(325,264,YELLOW);
	setcolor(CYAN);
outtextxy(316,270,"NEGATIVE ELECTRON PLUMS");

setcolor(RED);
    circle(250,250,50);
    setfillstyle(SOLID_FILL,RED);
    floodfill(250,250,RED);

setcolor(CYAN);
    line(200,330,300,330);
    line(200,330,203,327);
    line(200,330,203,333);
    line(300,330,297,327);
    line(300,330,297,333);
   settextstyle(1,0,2);
outtextxy(240,360,"~10     m");
outtextxy(240,365,"~");
   settextstyle(1,0,1);
outtextxy(270,350,"-10");


setcolor(YELLOW);
    circle(250,250,3);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(250,250,YELLOW);
    sound(300);
    sound(50);
    nosound();

    circle(275,230,3);
    floodfill(275,230,YELLOW);
    sound(600);
    delay(50);
    nosound();

    circle(225,220,3);
    floodfill(225,220,YELLOW);
    sound(900);
    delay(50);
    nosound();


    circle(215,253,3);
    floodfill(215,253,YELLOW);
    sound(1200);
    delay(50);
    nosound();


    circle(280,270,3);
    floodfill(280,270,YELLOW);
    sound(1500);
    delay(50);
    nosound();
    delay(3500);





cleardevice();


//int i;

setbkcolor(BLACK);
 setcolor(GREEN);

 settextstyle(1,0,5);
 outtextxy(0,0,"CONCEPT 3:");
 setcolor(CYAN);
 outtextxy(60,40,"RUTHERFORD'S ATOMIC");
 outtextxy(110,80," CONCEPT");
 delay(1000);
cleardevice();
 delay(200);



setbkcolor(BLACK);
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
bar3d(40,100,80,140,30,1);

setcolor(CYAN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
  outtextxy(50,390,"RUTHERFORD'S ALPHA PARTICLE");
  outtextxy(75,430,"SCATTERING EXPERIMENT");
setcolor(GREEN);
  line(85,116,85,190);
  line(85,116,81,120);
  line(85,116,89,120);

 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(55,200,"Alpha");
 outtextxy(55,210,"particles");
 outtextxy(55,220,"source");
  //delay(50);

  setcolor(WHITE);
  circle(95,110,5);
  delay(500);
  for(i=1;i<=301;i=i+3)
 {
  setcolor(CYAN);
  circle(86+i,110,2);
  setfillstyle(SOLID_FILL,CYAN);
  floodfill(86+i,110,CYAN);

  delay(5);

  setcolor(RED);
  //line(330,50,330,100);
  line(329,100,338,100);
  arc(391,110,0,168,54);
  arc(391,110,0,170,64);

  //line(330,121,330,180);
  line(329,121,338,121);
  arc(391,110,192,360,54);
  arc(391,110,190,360,64);

  setcolor(GREEN);
  line(390,122,390,190);
  line(390,122,386,126);
  line(390,122,394,126);

  sound(200+5*i);
  delay(25);
  nosound();

 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(365,200,"METAL");
 outtextxy(365,210,"FOIL");


setcolor(GREEN);
  line(350,156,350,280);
  line(350,156,346,160);
  line(350,156,354,160);
  sound(200+5*i);
  delay(25);
  nosound();
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(345,300,"FLUOROSCENT");
 outtextxy(345,310,"SCREEN");


  setcolor(YELLOW);
  setfillstyle(SOLID_FILL,YELLOW);
  bar3d(389,100,391,120,10,1);

  delay(25);

 }

  for(i=1;i<=16;i++)
   {
     setcolor(CYAN);

  circle(386-i,110-(3*i),2);
  setfillstyle(SOLID_FILL,CYAN);
  floodfill(386-i,110-(3*i),CYAN);
   delay(15);


   setcolor(CYAN);
  circle(386-i,110+(3*i),2);
  setfillstyle(SOLID_FILL,CYAN);
  floodfill(386-i,110+(3*i),CYAN);
  delay(15);


  setcolor(CYAN);
  circle(386+(3*i),110,2);
  setfillstyle(SOLID_FILL,CYAN);
  floodfill(386+(3*i),110,CYAN);

  sound(300+10*i);
  delay(100);
  nosound();
   }

 delay(500);

setcolor(GREEN);
  line(370,56,370,40);
  line(370,56,366,52);
  line(370,56,374,52);
  sound(200);
  delay(200);
  nosound();
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(345,30,"DEFLECTED ALPHA PARTICLES");

setcolor(GREEN);
  line(440,116,440,170);
  line(440,116,436,120);
  line(440,116,444,120);
  sound(200);
  delay(200);
  nosound();
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(420,180,"UNDEFLECTED ALPHA PARTICLES");

delay(2000);

cleardevice();

setcolor(GREEN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(5,5,"AFTER THIS EXPERIMENT THE");//and further dicoveries
outtextxy(5,40,"ATOMIC CONCEPT ACCEPTED WAS:");
delay(1000);

setcolor(CYAN);
outtextxy(5,80,"AN ATOM consists of");
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(15,130,"1.EMPTY SPACES");
delay(750);

outtextxy(15,180,"2.A SMALL NUCLEUS CONSISTING OF PROTONS");
outtextxy(15,215,"AND NEUTRONS");
delay(1150);

outtextxy(15,265,"3.ELECTRONS REVOLVING AROUND THE ");
outtextxy(15,310,"NUCLEUS IN SPECIFIC ORBITS");
delay(3300);

cleardevice();


setcolor(GREEN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(160,60,"ATOM");

setcolor(GREEN);
circle(250,250,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(250,250,GREEN);

setcolor(RED);
circle(259,250,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(259,250,RED);

setcolor(RED);
circle(250,259,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(250,259,RED);

setcolor(RED);
circle(241,250,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(241,250,RED);

setcolor(RED);
circle(250,241,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(250,241,RED);

  setcolor(GREEN);
circle(242,242,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(242,242,GREEN);

  setcolor(GREEN);
circle(258,242,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(258,242,GREEN);

 setcolor(GREEN);
circle(258,258,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(258,258,GREEN);

  setcolor(GREEN);
circle(242,258,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(242,258,GREEN);


 setcolor(MAGENTA);
 ellipse(250,250,0,360,100,70);
 ellipse(250,250,0,360,140,100);

setcolor(CYAN);
  line(258,264,258,410);
  line(258,264,254,267);
  line(258,264,262,267);
 setcolor(CYAN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(258,410,"NUCLEUS");


setcolor(GREEN);
circle(458,242,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(458,242,GREEN);
setcolor(CYAN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(458,252,"NEUTRONS");


setcolor(RED);
circle(458,292,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(458,292,RED);
setcolor(CYAN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(458,302,"PROTONS");



 setcolor(YELLOW);
 circle(458,342,8);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(458,342,YELLOW);
setcolor(CYAN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(458,362,"ELECTRONS");


 setcolor(YELLOW);
 circle(350,250,8);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(350,250,YELLOW);

 setcolor(YELLOW);
 circle(150,250,8);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(150,250,YELLOW);

 setcolor(YELLOW);
 circle(390,250,8);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(390,250,YELLOW);

 setcolor(YELLOW);
 circle(110,250,8);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(110,250,YELLOW);

 setcolor(YELLOW);
 circle(250,150,8);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(250,150,YELLOW);

 setcolor(YELLOW);
 circle(250,350,8);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(250,350,YELLOW);
 delay(100);

delay(3500);

cleardevice();
















//                      ATOMIC STRUCTURE



cleardevice();

setcolor(RED);
 textcolor(RED);
 textbackground(WHITE);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,RED);
 outtextxy(45,60,"ATOMIC STRUCTURE");
// delay(500);

 setcolor(GREEN);
circle(250,250,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(250,250,GREEN);

setcolor(RED);
circle(259,250,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(259,250,RED);

setcolor(RED);
circle(250,259,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(250,259,RED);

setcolor(RED);
circle(241,250,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(241,250,RED);

setcolor(RED);
circle(250,241,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(250,241,RED);

  setcolor(GREEN);
circle(242,242,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(242,242,GREEN);

  setcolor(GREEN);
circle(258,242,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(258,242,GREEN);

  setcolor(GREEN);
circle(258,258,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(258,258,GREEN);

  setcolor(GREEN);
circle(242,258,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(242,258,GREEN);



 delay(400);
 setcolor(MAGENTA);

ellipse(250,250,0,90,100,70);
 delay(400);
 ellipse(250,250,270,360,100,70);
 delay(400);
 ellipse(250,250,180,90,100,70);
 delay(400);
 ellipse(250,250,270,180,100,70);
 delay(400);

ellipse(250,250,0,90,120,90);
 delay(400);
 ellipse(250,250,270,360,120,90);
 delay(400);
 ellipse(250,250,180,90,120,90);
 delay(400);
 ellipse(250,250,270,180,120,90);
 delay(400);

ellipse(250,250,0,90,140,110);
 delay(400);
 ellipse(250,250,270,360,140,110);
 delay(400);
 ellipse(250,250,180,90,140,110);
 delay(400);
 ellipse(250,250,270,180,140,110);
 delay(400);
 circle(350,250,10);
 delay(100);




int x11,y11,x12,y12;
 float x21,x22,x23,x24,x25,x26,x27,x28,y21,y22,y23,y24,y25,y26,y27,y28,r;
 float ax1,ay1,ax2,ay2;
 float ax11,ay11;

 ax1=100,ay1=70,ax2=150,ay2=100,r=8;
 setcolor(WHITE);
int x,j ,y=0;
 while(y<=1)
 {
 for(float i=0,a=0,b=0.785,c=1.57,d=2.355,e=3.14,f=3.925,g=4.71,h=5.495,t=3.14;i<=6.28;i=i+0.1,a=a+0.1,b=b+0.1,c=c+0.1,d=d+0.1,e=e+0.1,f=f+0.1,g=g+0.1,h=h+0.1,t=t+0.1)
 {

setcolor(MAGENTA);
 ellipse(250,250,0,360,100,70);
 ellipse(250,250,0,360,100,70);
 sound(245);
 delay(4);
 nosound();
 ellipse(250,250,0,360,150,100);
 ellipse(250,250,0,360,150,100);
 sound(500);
 delay(6);
 nosound();

x11=250+(ax1*sin(i));
 y11=250+(ay1*cos(i));
 x12=250+(ax1*sin(t));
 y12=250+(ay1*cos(t));

x21=250+(ax2*sin(a));
 y21=250+(ay2*cos(a));
 x22=250+(ax2*sin(b));
 y22=250+(ay2*cos(b));
 x23=250+(ax2*sin(c));
 y23=250+(ay2*cos(c));
 x24=250+(ax2*sin(d));
 y24=250+(ay2*cos(d));
 x25=250+(ax2*sin(e));
 y25=250+(ay2*cos(e));
 x26=250+(ax2*sin(f));
 y26=250+(ay2*cos(f));
 x27=250+(ax2*sin(g));
 y27=250+(ay2*cos(g));
 x28=250+(ax2*sin(h));
 y28=250+(ay2*cos(h));

setcolor(GREEN);
circle(250,250,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(250,250,GREEN);

setcolor(RED);
circle(259,250,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(259,250,RED);

setcolor(RED);
circle(250,259,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(250,259,RED);

setcolor(RED);
circle(241,250,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(241,250,RED);

setcolor(RED);
circle(250,241,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(250,241,RED);

  setcolor(GREEN);
circle(242,242,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(242,242,GREEN);

  setcolor(GREEN);
circle(258,242,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(258,242,GREEN);

 setcolor(GREEN);
circle(258,258,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(258,258,GREEN);

  setcolor(GREEN);
circle(242,258,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(242,258,GREEN);

 setcolor(YELLOW);
circle(x11,y11,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x11,y11,YELLOW);
 sound(1000);
 delay(4);
 nosound();

 setcolor(YELLOW);
 circle(x12,y12,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x12,y12,YELLOW);
 sound(3857);
 delay(4);
 nosound();

 setcolor(YELLOW);
circle(x21,y21,r);
setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x21,y21,YELLOW);
 sound(1652);
 delay(4);
 nosound();

 setcolor(YELLOW);
 circle(x22,y22,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x22,y22,YELLOW);
 sound(2534);
 delay(4);
 nosound();

 setcolor(YELLOW);
 circle(x23,y23,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x23,y23,YELLOW);
 sound(6390);
 delay(4);
 nosound();

 setcolor(YELLOW);
 circle(x24,y24,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x24,y24,YELLOW);
 sound(789);
 delay(4);
 nosound();

 setcolor(YELLOW);
 circle(x25,y25,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x25,y25,YELLOW);
 sound(165);
 delay(4);
 nosound();

 setcolor(YELLOW);
 circle(x26,y26,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x26,y26,YELLOW);
 sound(1567);
 delay(4);
 nosound();

 setcolor(YELLOW);
 circle(x27,y27,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x27,y27,YELLOW);
 sound(4175);
 delay(4);
 nosound();

 setcolor(YELLOW);
 circle(x28,y28,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x28,y28,YELLOW);
 sound(526);
 delay(4);
 nosound();

 setcolor(RED);
 textcolor(RED);
 textbackground(WHITE);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
 outtextxy(45,60," ");
 delay(6);

cleardevice();
 delay(1);
 }
 y++;
 }












//             CHEMICAL BOND




setcolor(WHITE);
 textbackground(WHITE);
 setcolor(GREEN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
 outtextxy(60,200,"CHEMICAL BOND");
 delay(1000);
 cleardevice();

float i1,t,a,b,c,d,e,f,g,h;

ax1=110,ay1=80,ax2=140,ay2=110,r=8;
 setcolor(MAGENTA);
 y=0;
 int k=0;
 while(y<=3)
 {
 for( i1=0,t=3.14,a=0.785,b=2.355,c=3.925,d=5.495;i1<=6.28;i1=i1+0.1,t=t+0.1,a=a+0.1,b=b+0.1,c=c+0.1,d=d+0.1)
 {


setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(300,200,15);
 floodfill(300,200,GREEN);
 setcolor(MAGENTA);
 ellipse(300,200,0,360,110,80);
 ellipse(300,200,0,360,110,80);
 ellipse(300,200,0,360,140,110);
 ellipse(300,200,0,360,140,110);

x11=300+(ax1*sin(i1));
 y11=200+(ay1*cos(i1));
 x12=300+(ax1*sin(t));
 y12=200+(ay1*cos(t));

x21=300+(ax2*sin(a));
 y21=200+(ay2*cos(a));
 x22=300+(ax2*sin(b));
 y22=200+(ay2*cos(b));
 x23=300+(ax2*sin(c));
 y23=200+(ay2*cos(c));
 x24=300+(ax2*sin(d));
 y24=200+(ay2*cos(d));

setcolor(YELLOW);
 circle(x11,y11,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x11,y11,YELLOW);
 sound(1376+100*t);
 delay(5);
 nosound();

setcolor(YELLOW);
 circle(x12,y12,r);
 setfillstyle(SOLID_FILL,YELLOW);
floodfill(x12,y12,YELLOW);
 sound(2765+256*t);
 delay(5);
 nosound();

setcolor(YELLOW);
 circle(x21,y21,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x21,y21,YELLOW);
 sound(1953+216*t);
 delay(5);
 nosound();

setcolor(YELLOW);
 circle(x22,y22,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x22,y22,YELLOW);
 sound(782+256*t);
 delay(4);
 nosound();

setcolor(YELLOW);
 circle(x23,y23,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x23,y23,YELLOW);
  sound(1518+245*t);
  delay(4);
  nosound();

setcolor(YELLOW);
 circle(x24,y24,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x24,y24,YELLOW);
  sound(2746+266*t);
  delay(4);
  nosound();

setcolor(WHITE);
 textbackground(WHITE);
 setcolor(CYAN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
 outtextxy(280,325,"Carbon");
 delay(57);
 cleardevice();

ax11=70,ay11=30,r=8; //1
 setcolor(MAGENTA);

setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(550-k,50+k,15);
 floodfill(550-k,50+k,GREEN);
 setcolor(MAGENTA);
 ellipse(550-k,50+k,0,360,70,30);
 ellipse(550-k,50+k,0,360,70,30);

x11=(550-k)+(ax11*sin(i1));
 y11=(50+k)+(ay11*cos(i1));
 setcolor(YELLOW);
 circle(x11,y11,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x11,y11,YELLOW);
  sound(1746+164*t);
  delay(3);
  nosound();

setcolor(WHITE);
 textbackground(WHITE);
 setcolor(CYAN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 outtextxy(520-k,100+k,"Hydrogen");

//delay(5);

//2
 setcolor(MAGENTA);

setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(540-k,355-k,15);
 floodfill(540-k,355-k,GREEN);
 setcolor(MAGENTA);
 ellipse(540-k,355-k,0,360,70,30);
 ellipse(540-k,355-k,0,360,70,30);

x11=(540-k)+(ax11*sin(i1));
 y11=(355-k)+(ay11*cos(i1));
 setcolor(YELLOW);
 circle(x11,y11,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x11,y11,YELLOW);
sound(954+155*t);
delay(3);
nosound();

setcolor(WHITE);
 textbackground(WHITE);
 setcolor(CYAN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 outtextxy(520-k,415-k,"Hydrogen");

//delay(5);

//3
 setcolor(MAGENTA);

setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(100+k,380-k,15);
 floodfill(100+k,380-k,GREEN);
 setcolor(MAGENTA);
 ellipse(100+k,380-k,0,360,70,30);
 ellipse(100+k,380-k,0,360,70,30);

x11=(100+k)+(ax11*sin(i1));
 y11=(380-k)+(ay11*cos(i1));
 setcolor(YELLOW);
 circle(x11,y11,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x11,y11,YELLOW);
 sound(1074+598*t);
 delay(2);
 nosound();

setcolor(WHITE);
 textbackground(WHITE);
 setcolor(CYAN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 outtextxy(100+k,430-k,"Hydrogen");

//delay(100);

//4

setcolor(MAGENTA);
 setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(72+k,40+k,15);
 floodfill(72+k,40+k,GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(72+k,40+k,15);
 floodfill(72+k,40+k,GREEN);

setcolor(MAGENTA);
 ellipse(72+k,40+k,0,360,70,30);
 ellipse(72+k,40+k,0,360,70,30);
 ellipse(72+k,40+k,0,360,70,30);

x11=(72+k)+(ax11*sin(i1));
 y11=(40+k)+(ay11*cos(i1));
 setcolor(YELLOW);
 circle(x11,y11,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x11,y11,YELLOW);
 sound(1476+442*t);
 delay(2);
 nosound();

setcolor(WHITE);
 textbackground(WHITE);
 setcolor(CYAN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 outtextxy(50+k,80+k,"Hydrogen");

//delay(2);
 //cleardevice();

}cleardevice();
 y++;
 k=k+20;
 }
 setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(470,130,15);
 floodfill(470,130,GREEN);
 setcolor(MAGENTA);
 ellipse(470,130,0,360,70,30);
 setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(460,265,15);
 floodfill(460,265,GREEN);
 setcolor(MAGENTA);
 ellipse(460,265,0,360,70,30);
 setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(180,300,15);
 floodfill(180,300,GREEN);
 setcolor(MAGENTA);
 ellipse(180,300,0,360,70,30);
 setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(152,120,15);
 floodfill(152,120,GREEN);
 setcolor(MAGENTA);
 ellipse(152,120,0,360,70,30);

x11=470+(70*sin(5.45));
 y11=130+(30*cos(5.45));
 setcolor(YELLOW);
 circle(x11,y11,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x11,y11,YELLOW);
 x11=460+(70*sin(3.61));
 y11=265+(30*cos(3.61));
 setcolor(YELLOW);
 circle(x11,y11,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x11,y11,YELLOW);
 x11=180+(70*sin(1.57));
 y11=300+(30*cos(1.57));
 setcolor(YELLOW);
 circle(x11,y11,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x11,y11,YELLOW);
 x11=152+(70*sin(0.48));
 y11=120+(30*cos(0.48));
 setcolor(YELLOW);
 circle(x11,y11,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x11,y11,YELLOW);

setcolor(GREEN);
 setfillstyle(SOLID_FILL,GREEN);
 circle(300,200,15);
 floodfill(300,200,GREEN);
 setcolor(MAGENTA);
 ellipse(300,200,0,360,110,80);
 ellipse(300,200,0,360,140,110);
 x11=300+(110*sin(0));
 y11=200+(80*cos(0));
 setcolor(YELLOW);
 circle(x11,y11,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x11,y11,YELLOW);
 x11=300+(110*sin(3.14));
 y11=200+(80*cos(3.14));
 setcolor(YELLOW);
 circle(x11,y11,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x11,y11,YELLOW);

x11=300+(140*sin(0.785));
 y11=200+(110*cos(0.785));
 setcolor(YELLOW);
 circle(x11,y11,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x11,y11,YELLOW);
 x11=300+(140*sin(2.355));
 y11=200+(110*cos(2.355));
 setcolor(YELLOW);
 circle(x11,y11,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x11,y11,YELLOW);
 x11=300+(140*sin(3.825));
 y11=200+(110*cos(3.825));
 setcolor(YELLOW);
 circle(x11,y11,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x11,y11,YELLOW);
 x11=300+(140*sin(5.495));
 y11=200+(110*cos(5.495));
 setcolor(YELLOW);
 circle(x11,y11,r);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(x11,y11,YELLOW);

 setcolor(WHITE);
 textbackground(WHITE);
 setcolor(GREEN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
 outtextxy(40,450,"COVALENT BOND FORMATION:Methane");
 line(230,300,300,360);
 line(395,280,300,360);

 setcolor(WHITE);
 textbackground(WHITE);
 setcolor(CYAN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 outtextxy(250,375,"Electron Cloud formation");


delay(2200);


cleardevice();












//                        NUCLEAR FISSION

setcolor(RED);
 textcolor(RED);
 textbackground(WHITE);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
 outtextxy(45,60,"NUCLEAR FISSION");
 delay(1400);
 cleardevice();

for(x=400,j=25;x>=250;x=x-25,j=j+37)
 {cleardevice();
 setcolor(GREEN);
circle(250,250,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(250,250,GREEN);

setcolor(RED);
circle(259,250,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(259,250,RED);

setcolor(RED);
circle(250,259,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(250,259,RED);

setcolor(RED);
circle(241,250,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(241,250,RED);

setcolor(RED);
circle(250,241,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(250,241,RED);

  setcolor(GREEN);
circle(242,242,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(242,242,GREEN);

  setcolor(GREEN);
circle(258,242,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(258,242,GREEN);

 setcolor(GREEN);
circle(258,258,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(258,258,GREEN);

  setcolor(GREEN);
circle(242,258,5);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(242,258,GREEN);


 setcolor(MAGENTA);
 ellipse(250,250,0,360,100,70);
 ellipse(250,250,0,360,140,100);

 setcolor(YELLOW);
 circle(350,250,8);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(350,250,YELLOW);

 setcolor(YELLOW);
 circle(150,250,8);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(150,250,YELLOW);

 setcolor(YELLOW);
 circle(390,250,8);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(390,250,YELLOW);

 setcolor(YELLOW);
 circle(110,250,8);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(110,250,YELLOW);

 setcolor(YELLOW);
 circle(250,150,8);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(250,150,YELLOW);

 setcolor(YELLOW);
 circle(250,350,8);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(250,350,YELLOW);
 delay(100);

setcolor(RED);
 textcolor(RED);
 textbackground(WHITE);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
 outtextxy(100,400,"URANIUM");
 delay(100);

setcolor(GREEN);
 textcolor(GREEN);
 textbackground(WHITE);
 circle(x,j,8);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);

outtextxy(x+12,j,"Incident Neutron");
sound(200+10*j);
delay(100);
nosound();
 delay(500);

 }




delay(500);

 for(int i123=1;i123<=15;i123++)
 {
  setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(250,250,5);
floodfill(250,250,RED);
sound(4276+20*i123);
delay(10);
nosound();

setcolor(RED);
arc(250,250,110-i123,150+i123,35+2*i123);
sound(1536+14*i123);
delay(15);
nosound();

setcolor(RED);
arc(250,250,350-i123,50+i123,35+2*i123);
sound(624+20*i123);
delay(15);
nosound();

setcolor(RED);
arc(250,250,285-i123,315+i123,35+2*i123);
sound(2651+35*i123);
delay(15);
nosound();


setcolor(RED);
arc(250,250,210-i123,250+i123,35+2*i123);
sound(990+20*i123);
delay(15);
nosound();


 }
 delay(500);
cleardevice();
setbkcolor(BLACK);
for(int z=150;z<=375;z=z+50)
 {
 setcolor(RED);
 textcolor(RED);
 textbackground(WHITE);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 outtextxy(300,75,"FISSIONABLE NUCLEUS");
 setcolor(CYAN);
 circle(250,75,30);
 setcolor(MAGENTA);
 for(float i=0;i<=6.28;i=i+0.8)
 {
 int x1=250+(25*sin(i));
 int y1=75+(25*cos(i));
 setfillstyle(SOLID_FILL,MAGENTA);
 circle(x1,y1,5);
 floodfill(x1,y1,MAGENTA);
 sound(479+200*i);
 delay(20);
 nosound();
 }
 for( i=0;i<=6.28;i=i+0.8)
 {
 setcolor(GREEN);
 int x1=250+(15*sin(i));
 int y1=75+(15*cos(i));
 setfillstyle(SOLID_FILL,GREEN);
 circle(x1,y1,5);
 floodfill(x1,y1,GREEN);
 sound(1500+20*i);
 delay(20);
 nosound();
 }
 setfillstyle(SOLID_FILL,GREEN);
 circle(250,75,5);
 floodfill(250,75,GREEN);
 if(z==150)
 {
 delay(500);
 }
 line(210,80,125,160);

 line(125,160,120,155);

 line(125,160,130,155);
 if(z==150)
 {
 delay(500);
 }

setcolor(RED);
 textcolor(RED);
 textbackground(WHITE);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 outtextxy(75,240,"RADIOACTIVE NUCLEI");
 setcolor(CYAN);
 circle(125,200,30);
 setcolor(MAGENTA);
 for( i=0;i<=6.28;i=i+0.8)
 {
 int x1=125+(25*sin(i));
 int y1=200+(25*cos(i));
 setfillstyle(SOLID_FILL,MAGENTA);
 circle(x1,y1,5);
 floodfill(x1,y1,MAGENTA);
 sound(400+50*i);
 delay(20);
 nosound();

 }
 for( i=0;i<=6.28;i=i+0.8)
 {
 setcolor(GREEN);
 int x1=125+(15*sin(i));
 int y1=200+(15*cos(i));
 setfillstyle(SOLID_FILL,GREEN);
 circle(x1,y1,5);
 floodfill(x1,y1,GREEN);
 sound(800+20*i);
 delay(20);
 nosound();
 }
 setfillstyle(SOLID_FILL,GREEN);
 circle(125,200,5);
 floodfill(125,200,GREEN);

if(z==150)
 {
 delay(500);
 }
 line(290,80,375,160);
 line(375,160,370,155);
 line(375,160,380,155);
 if(z==150)
 {
 delay(500);
 }

setcolor(RED);
 textcolor(RED);
 textbackground(WHITE);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 outtextxy(375,240,"RADIOACTIVE NUCLEI");
 setcolor(CYAN);
 circle(375,200,30);
 setcolor(MAGENTA);
 for( i=0;i<=6.28;i=i+0.8)
 {
 int x1=375+(25*sin(i));
 int y1=200+(25*cos(i));
 setfillstyle(SOLID_FILL,MAGENTA);
 circle(x1,y1,5);
 floodfill(x1,y1,MAGENTA);
 sound(1000+40*i);
 delay(20);
 nosound();
 }
 for( i=0;i<=6.28;i=i+0.8)
 {
 setcolor(GREEN);
 int x1=375+(15*sin(i));
 int y1=200+(15*cos(i));
 setfillstyle(SOLID_FILL,GREEN);
 circle(x1,y1,5);
 floodfill(x1,y1,GREEN);

 sound(500+100*i);
 delay(20);
nosound();
 }
 setfillstyle(SOLID_FILL,GREEN);
 circle(375,200,5);
 floodfill(375,200,GREEN);
 delay(500);

setfillstyle(SOLID_FILL,GREEN);
 circle(250,z,5);
 floodfill(250,z,GREEN);

setfillstyle(SOLID_FILL,GREEN);
 circle(200,z,5);
 floodfill(200,z,GREEN);

setfillstyle(SOLID_FILL,GREEN);
 circle(300,z,5);
 floodfill(300,z,GREEN);
 setcolor(WHITE);
 textbackground(WHITE);
 setcolor(GREEN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 outtextxy(195,z+30,"Emitted Neutrons");
 sound(300+10*z);
 delay(200);
 nosound();
 delay(510);
 cleardevice();
 }
 delay(300);













//                           APPLICATION



cleardevice();

for(i=1;i<=12;i++)
{
setcolor(RED);
textcolor(RED);
textbackground(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
outtextxy(160,30,"APPLICATIONS");
outtextxy(120,90,"NUCLEAR WEAPONS");
//getch();
delay(300);

setcolor(RED);
setfillstyle(USER_FILL,WHITE);
bar3d(370,180,600,400,20,1);
textcolor(GREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(390,210,"NUCLEAR");
outtextxy(390,250,"BOMB");
//getch();

setcolor(BROWN);
circle(50+30*i,getmaxy()/2+60,10);
setfillstyle(SOLID_FILL,BROWN);
floodfill(50+30*i,getmaxy()/2+60,BROWN);
//getch();


setcolor(BROWN);
circle(50+30*i,getmaxy()/2+80,10);
setfillstyle(SOLID_FILL,BROWN);
floodfill(50+30*i,getmaxy()/2+80,BROWN);
//getch();



setcolor(BROWN);
circle(50+30*i,getmaxy()/2-20+60,10);
setfillstyle(SOLID_FILL,BROWN);
floodfill(50+30*i,getmaxy()/2-20+60,BROWN);
//getch();


setcolor(BROWN);
circle(70+30*i,getmaxy()/2+60,10);
setfillstyle(SOLID_FILL,BROWN);
floodfill(70+30*i,getmaxy()/2+60,BROWN);
//getch();


setcolor(BROWN);
circle(30+30*i,getmaxy()/2+60,10);
setfillstyle(SOLID_FILL,BROWN);
floodfill(30+30*i,getmaxy()/2+60,BROWN);
//getch();



setcolor(YELLOW);
circle(40+30*i,getmaxy()/2+70,8);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(40+30*i,getmaxy()/2+70,YELLOW);
//getch();


setcolor(YELLOW);
circle(40+30*i,getmaxy()/2-10+60,8);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(40+30*i,getmaxy()/2-10+60,YELLOW);
//getch();


setcolor(YELLOW);
circle(60+30*i,getmaxy()/2+70,8);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(60+30*i,getmaxy()/2+70,YELLOW);
//getch();




	   setcolor(YELLOW);
circle(60+30*i,getmaxy()/2-10+60,8);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(60+30*i,getmaxy()/2-10+60,YELLOW);
//getch();


sound(2500+10*i);
delay(30+5*i);
nosound();
//getch();
delay(10);

setcolor(GREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(30+30*i,getmaxy()/2+120,"RADIOACTIVE NUCLEI");
//getch();
delay(400);

clrscr();
cleardevice();


}


cleardevice();
setbkcolor(BLACK);
int poly1[8];
int poly2[3];



for(i=1;i<=18;i++)
{
setbkcolor(BLACK);
poly1[0]=300-10*i;
poly1[1]=200;

poly1[2]=580-10*i;
poly1[3]=200;

poly1[4]=580-10*i;
poly1[5]=100;

poly1[6]=360-10*i;
poly1[7]=100;
setcolor(BROWN);
drawpoly(4,poly1);
//getch();
line(300-10*i,200,360-10*i,100);
//getch();


poly2[0]=550-10*i;
poly2[1]=100;
poly2[2]=500-10*i;
poly2[3]=100;
poly2[4]=550-10*i;
poly2[5]=30;
drawpoly(3,poly2);
//getch();
line(550-10*i,100,550-10*i,30);
//getch();
setcolor(GREEN);
textcolor(GREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
outtextxy(380-10*i,120,"U.S.A.");
//getch();

setcolor(YELLOW);
setlinestyle(DOTTED_LINE,0,2);
line(585-10*i,120,615-10*i,120);
//getch();

setcolor(RED);
setlinestyle(DOTTED_LINE,0,2);
line(585-10*i,130,615-10*i,130);
//getch();

setcolor(YELLOW);
setlinestyle(DOTTED_LINE,0,2);
line(585-10*i,140,615-10*i,140);
//getch();

setcolor(BROWN);
setlinestyle(DOTTED_LINE,0,2);
line(585-10*i,150,615-10*i,150);
//getch();

setcolor(YELLOW);
setlinestyle(DOTTED_LINE,0,2);
line(585-10*i,160,615-10*i,160);
//getch();

setcolor(BROWN);
setlinestyle(DOTTED_LINE,0,2);
line(585-10*i,170,615-10*i,170);
//getch();

setcolor(YELLOW);
setlinestyle(DOTTED_LINE,0,2);
line(585-10*i,180,615-10*i,180);
//getch();

setcolor(RED);
setlinestyle(DOTTED_LINE,0,2);
line(585-10*i,190,615-10*i,220);
//getch();

setcolor(YELLOW);
setlinestyle(DOTTED_LINE,0,2);
line(585-10*i,194,615-10*i,224);
//getch();

setcolor(BROWN);
setlinestyle(DOTTED_LINE,0,2);
line(585-10*i,198,615-10*i,228);
//getch();

setcolor(YELLOW);
setlinestyle(DOTTED_LINE,0,2);
line(585-10*i,110,615-10*i,90);
//getch();

setcolor(BROWN);
setlinestyle(DOTTED_LINE,0,2);
line(585-10*i,105,615-10*i,85);
//getch();

sound(500-20*i);
delay(60+10*i);
nosound();
//getch();


setcolor(BROWN);
setfillstyle(USER_FILL,WHITE);
bar3d(380-10*i,205+10*i,480-10*i,250+10*i,15,1);
setcolor(BLACK);
textcolor(BLACK);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(385-10*i,210+10*i,"NUCLEAR BOMB");

delay(250);

setcolor(GREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
outtextxy(80,420,"JAPAN");
//getch();
delay(500);

cleardevice();
clrscr();
setbkcolor(BLACK);
}



setcolor(YELLOW);
textcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(300,50,"!! BOOM !!");
sound(120);
delay(500);
nosound();

setcolor(YELLOW);
textcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(80,100,"!! BOOM !!");



sound(100);
delay(500);
nosound();

setcolor(YELLOW);
textcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(400,420,"!! BOOM !!");

sound(50);
delay(800);
nosound();

delay(1000);
for(i=1;i<=5;i++)
{
sound(50+10*i);
delay(50);
nosound();
for(j=1;j<=1;j++)
{

for(i=1;i<=15;i++)
{
setbkcolor(BLACK);
setcolor(GREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(260,190,"JAPAN");
//getch();
delay(50);


setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(315,205,5);
floodfill(315,205,RED);
sound(100+50*i);
delay(5);
nosound();

setcolor(RED);
arc(315,205,110-i,150+i,35+2*i);
sound(400+20*i);
delay(5);
nosound();

setcolor(RED);
arc(315,205,350-i,50+i,35+2*i);
sound(800+30*i);
delay(5);
nosound();

setcolor(RED);
arc(315,205,285-i,315+i,35+2*i);
sound(1200+20*i);
delay(5);
nosound();


setcolor(RED);
arc(315,205,210-i,250+i,35+2*i);
sound(1550+10*i);
delay(5);
nosound();





setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(145,265,5);
floodfill(145,265,RED);
setcolor(RED);
arc(145,265,110-i,150+i,35+2*i);
sound(1247+10*i);
delay(5);
nosound();

setcolor(RED);
arc(145,265,350-i,50+i,35+2*i);
sound(500+20*i);
delay(5);
nosound();

setcolor(RED);
arc(145,265,285-i,315+i,35+2*i);
sound(800+40*i);
delay(5);
nosound();


setcolor(RED);
arc(145,265,210-i,250+i,35+2*i);
sound(2000+20*i);
delay(5);
nosound();


setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(475,375,5);
floodfill(475,375,RED);
setcolor(RED);
arc(475,375,110-i,150+i,35+2*i);
sound(3514+10*i);
delay(5);
nosound();

setcolor(RED);
arc(475,375,350-i,50+i,35+2*i);
sound(500+50*i);
delay(5);
nosound();

setcolor(RED);
arc(475,375,285-i,315+i,35+2*i);
sound(400+10*i);
delay(5);
nosound();


setcolor(RED);
arc(475,375,210-i,250+i,35+2*i);
sound(2000+10*i);
delay(5);
nosound();
}


cleardevice();
i=1;
setcolor(BLACK);

for(i=1;i<=10;i++)
{
setbkcolor(BLACK);

setcolor(GREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(260,190+25*i,"JAPAN");
//getch();
delay(50);
/*
setcolor(RED);
rectangle(300,240+25*i,308,265+25*i);
setfillstyle(SOLID_FILL,RED);
floodfill(302,242+25*i,RED);
delay(10); */
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(294,260+25*i,6);
floodfill(294,260+25*i,RED);
delay(50);

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(294,284+25*i,8);
floodfill(294,284+25*i,RED);
delay(50);

setcolor(YELLOW);
textcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(30,50+25*i,"THE RISING SUN....");
delay(50);
setcolor(BROWN);
textcolor(BROWN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
outtextxy(30,80+25*i,"FALLS !!!");
delay(50);






/*
setcolor(RED);
setlinestyle(DOTTED_LINE,0,2);
line(320,165,260,50);
delay(10);
getch();

setcolor(RED);
setlinestyle(DOTTED_LINE,0,2);
line(325,165,265,70);
delay(10);
getch();

setcolor(BROWN);
setlinestyle(DOTTED_LINE,0,2);
line(315,165,290,70);
delay(10);
getch();

setcolor(BROWN);
setlinestyle(DOTTED_LINE,0,2);
line(270,160,260,370);
delay(10);
getch();

setcolor(RED);
setlinestyle(DOTTED_LINE,0,2);
line(275,160,265,360);
delay(10);
getch();

setcolor(RED);
setlinestyle(DOTTED_LINE,0,2);
line(320,160,345,420);
delay(10);
getch();

setcolor(RED);
setlinestyle(DOTTED_LINE,0,2);
line(315,260,335,380);
delay(10);
getch();

setcolor(BROWN);
setlinestyle(DOTTED_LINE,0,2);
line(310,260,330,370);
delay(10);
getch();         */

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(315,205+10*i,7);
floodfill(315,205+10*i,RED);
delay(50);


setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(345,245+10*i,6);
floodfill(345,245+10*i,RED);
delay(50);


setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(235,150,20);
floodfill(235,150,RED);
delay(50);

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(125,305,30);
floodfill(125,305,RED);
delay(50);

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(415,375,10);
floodfill(415,375,RED);
delay(50);

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(515,415,25);
floodfill(515,415,RED);
delay(150);
sound(800+20*i);
delay(50);
nosound();
cleardevice();

} }


setbkcolor(BLUE);
setcolor(GREEN);
textcolor(GREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(30,20,"DON'T USE THIS ");
delay(1000);

setcolor(YELLOW);
textcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(40,120,"NATURAL PROCESS");
delay(1000);
setcolor(GREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(100,220," TO DESTROY");
delay(50);
setcolor(YELLOW);
textcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(100,300,"THE   NATURE");
delay(3500);
cleardevice();


setbkcolor(BLACK);
setcolor(GREEN);
textcolor(GREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(30,20,"DEAREST  NEIGHBOURS, ");
delay(1000);


setcolor(BROWN);
textcolor(BROWN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
outtextxy(20,90,"CHINA AND PAKISTAN");
delay(500);


setcolor(GREEN);
textcolor(GREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(30,220,"WE DON'T WANT ");
delay(500);


setcolor(RED);
textcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(40,280,"! WORLD WAR-3 !");
delay(3600);
cleardevice();

setbkcolor(BLACK);
setcolor(RED);
textcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,6);
outtextxy(200,20,"LOVE ");
//getch();
delay(500);


setcolor(GREEN);
textcolor(GREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(20,120,"YOUR NEIGHBOURS");
//getch();
delay(500);


setcolor(GREEN);
textcolor(GREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(250,200,"AS");
//getch();
//delay(50);


setcolor(RED);
textcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(160,320,"! YOURSELF !");
//getch();
delay(2100);











//            THANK YOU



cleardevice();
delay(30);
setbkcolor(BLUE);

	   for(i=1;i<=12;i++)
    {

     setcolor(GREEN);
   textcolor(GREEN);
   textbackground(WHITE);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
   outtextxy(100,160,"THANK YOU");
   //getch();
   delay(20);


    setcolor(YELLOW);
    circle(450,320,40);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(450,320,YELLOW);
    //getch();
    delay(10);
      setcolor(BLACK);
    circle(430,300,7);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(430,300,BLACK);
    //getch();
    delay(10);
      setcolor(BLACK);
    circle(470,300,7);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(470,300,BLACK);
    //getch();
    delay(10);
      setcolor(BLACK);
    circle(450,320,4);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(450,320,BLACK);
    //getch();
    delay(10);
    setcolor(BLACK);
    pieslice(450,330,190,350,20);
    delay(10);







    setcolor(GREEN);
    circle(210,300-35*i,10);
    //getch();
    delay(5);


    setcolor(GREEN);
    circle(590,420-35*i,10);
    //getch();
    delay(5);


    setcolor(GREEN);
    circle(370,300-35*i,20);
    //getch();
    delay(5);

     setcolor(GREEN);
    circle(300,460-35*i,10);
    //getch();
    delay(5);


   setcolor(GREEN);
    circle(70,360-35*i,10);
    //getch();
    delay(5);


    setcolor(GREEN);
    circle(250,350-35*i,15);
    //getch();
    delay(5);


   setcolor(GREEN);
    circle(550,360-35*i,10);
    //getch();
    delay(5);

    sound(200+10*i);
    delay(200);
    nosound();
	delay(30);
    cleardevice();

    }



   delay(1000);

closegraph();
getch();
}}
