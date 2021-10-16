#include<graphics.h>
using namespace std;

int main(){
	initwindow(800,800,"The Background");
	//left tower
	rectangle(50,400,150,700);
	//middle bulding
	line(149,550,652,550);
	//right tower
	rectangle(650,400,750,701);
	//main castle
	rectangle(250,350,550,551);
	//left ridge roof
	line(50,400,100,310);
	line(100,310,150,400);
	line(50,400,150,400);
	setfillstyle(SOLID_FILL,RED);
	floodfill(51,410,BLACK);
	//right ridge roof
	line(650,400,700,310);
	line(700,310,750,400);
	//main ridge roof
	line(250,350,400,120);
	line(400,120,550,350);
	setfillstyle(SOLID_FILL,RED);
	floodfill(251,350,WHITE);
	//mountains
	line(0,450,50,420);
	line(150,410,250,460);
	line(550,460,650,420);
	line(750,420,800,450);
	//sun
	circle(730,80,40);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(730,80,WHITE);
	//moon
	circle(70,80,40);
	arc(90,87,52,264,27);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(40,70,WHITE);
	setfillstyle(SOLID_FILL,DARKGRAY);
	floodfill(100,80,WHITE);
	//ENDLINE
	line(800,0,800,810);
	//seperate
	line(400,0,400,800);
	//color day
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	floodfill(600,150,WHITE);
	//color right castle
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(500,500,WHITE);
	//color main left ridge roof
	setfillstyle(SOLID_FILL,RED);
	floodfill(500,300,WHITE);
	//color left tower
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(700,500,WHITE);
	//color left ridge roof
	setfillstyle(SOLID_FILL,LIGHTRED);
	floodfill(700,350,WHITE);
	//color left mountain
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(600,500,WHITE);
	//color beyond left mountain
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(770,450,WHITE);
	//RIGHTSIDE RIGHT TOWER WINDOWS
	rectangle(60,410,90,440);
	rectangle(60,460,90,490);
	rectangle(60,510,90,540);
	rectangle(60,560,90,590);
	rectangle(60,610,90,640);
	rectangle(60,660,90,690);
	//LEFTSIDE RIGHT TOWER WINDOWS
	rectangle(110,410,140,440);
	rectangle(110,460,140,490);
	rectangle(110,510,140,540);
	rectangle(110,560,140,590);
	rectangle(110,610,140,640);
	rectangle(110,660,140,690);
	//COLORING RIGHT WINDOWS
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(70,420,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(120,470,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(70,520,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(120,570,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(70,620,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(120,670,WHITE);
	//LEFT SIDE MAIN BUILDIN WINDOWS
	rectangle(160,560,190,590);
	rectangle(160,610,190,640);
	rectangle(160,660,190,690);
	//LEFT SIDE MIDDLE SIDE MAIN BUILDING WINDOWS
	rectangle(220,560,250,590);
	rectangle(220,610,250,640);
	rectangle(220,660,250,690);
	
	rectangle(280,560,310,590);
	rectangle(280,610,310,640);
	rectangle(280,660,310,690);
	
	rectangle(340,560,370,590);
	rectangle(340,610,370,640);
	//COLORING RIGHT MAIN BUILDING
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(170,570,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(290,570,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(230,620,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(350,620,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(290,670,WHITE);
	//DOOR
	rectangle(350,660,450,700);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(430,670,WHITE);
	//RIGHT MAIN CASTLE WINDOWS
	rectangle(260,360,290,390);
	rectangle(260,410,290,440);
	rectangle(260,460,290,490);
	rectangle(260,510,290,540);
	
	rectangle(310,360,340,390);
	rectangle(310,410,340,440);
	rectangle(310,460,340,490);
	rectangle(310,510,340,540);
	
	rectangle(360,360,390,390);
	rectangle(360,410,390,440);
	rectangle(360,460,390,490);
	rectangle(360,510,390,540);
	
	//COLORING MAIN CASTLE's WINDOW
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(270,370,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(370,370,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(320,420,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(270,470,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(370,470,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(320,520,WHITE);
	
	//left building
	rectangle(400,550,650,700);
	setfillstyle(SOLID_FILL,DARKGRAY);
	floodfill(550,600,WHITE);
	//ground
	rectangle(400,700,800,800);
	setfillstyle(SOLID_FILL,LIGHTGREEN);
	floodfill(500,720,WHITE);
	//ROOF STYLE
	line(400,180,430,230);
	line(430,230,455,205);
	line(400,240,430,280);
	line(430,280,470,225);
	line(400,290,430,330);
	line(430,330,493,262);
	line(450,350,513,290);
	//COLORING ROOF
	setfillstyle(SOLID_FILL,LIGHTRED);
	floodfill(420,180,WHITE);
	setfillstyle(SOLID_FILL,LIGHTRED);
	floodfill(430,290,WHITE);
	setfillstyle(SOLID_FILL,LIGHTRED);
	floodfill(500,330,WHITE);
	//STYLING CASTLE
	line(400,350,550,450);
	line(550,450,400,550);
	line(400,550,650,700);
	line(750,700,650,550);
	line(650,550,750,400);
	
	line(678,351,710,400);
	//SHADOWING CASTLE
	setfillstyle(SOLID_FILL,DARKGRAY);
	floodfill(450,450,WHITE);
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(550,600,WHITE);
	setfillstyle(SOLID_FILL,DARKGRAY);
	floodfill(700,550,WHITE);
	setfillstyle(SOLID_FILL,RED);
	floodfill(680,380,WHITE);
	//Lane
	line(0,700,810,700);
	
	getch();
}
