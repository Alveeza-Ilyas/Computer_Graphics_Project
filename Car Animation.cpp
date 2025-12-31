#include <graphics.h>
#include <dos.h>
#include <conio.h>
#include <math.h>

void drawCar(int x) { // DRAW CAR
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    rectangle(200 + x, 330, 400 + x, 370);
    floodfill(210 + x, 340, RED);

    int car_top[] = {230 + x,330, 370 + x,330, 340 + x,300, 260 + x,300, 230 + x,330};
    setfillstyle(SOLID_FILL, RED);
    fillpoly(5, car_top);

    setcolor(LIGHTCYAN);
    setfillstyle(SOLID_FILL, LIGHTCYAN);
    rectangle(270 + x, 305, 300 + x, 328);
    floodfill(275 + x, 310, LIGHTCYAN);
    rectangle(310 + x, 305, 340 + x, 328);
    floodfill(315 + x, 310, LIGHTCYAN);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    circle(240 + x, 370, 18);
    floodfill(240 + x, 370, BLACK);
    circle(360 + x, 370, 18);
    floodfill(360 + x, 370, BLACK);

    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL, DARKGRAY);
    circle(240 + x, 370, 8);
    floodfill(240 + x, 370, DARKGRAY);
    circle(360 + x, 370, 8);
    floodfill(360 + x, 370, DARKGRAY);

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    ellipse(400 + x, 345, 0, 360, 6, 4);
    floodfill(400 + x, 345, YELLOW);
}

void drawBackground(int cloudShift) { // DRAW BACKGROUND 
    // Sky
    setbkcolor(LIGHTBLUE);
    cleardevice();

    // Ground
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    bar(0, 350, 1800, 800);

    // Sun
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(80, 80, 40);
    floodfill(80, 80, YELLOW);

    // Sun rays
    for (int i = 0; i < 360; i += 30) {
        int x = 80 + 60 * cos(i * 3.14 / 180);
        int y = 80 + 60 * sin(i * 3.14 / 180);
        line(80, 80, x, y);
    }

    // Trees
    setcolor(BROWN);
    setfillstyle(SOLID_FILL, BROWN);
    rectangle(100, 280, 120, 360);
    floodfill(110, 300, BROWN);
    rectangle(40, 280, 60, 360);
    floodfill(50, 300, BROWN);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    circle(90, 260, 25);  floodfill(90, 260, GREEN);
    circle(130, 260, 25); floodfill(120, 250, GREEN);
    circle(110, 230, 25); floodfill(115, 220, GREEN);
    circle(30, 260, 25);  floodfill(30, 260, GREEN);
    circle(60, 260, 25);  floodfill(60, 250, GREEN);
    circle(40, 230, 25);  floodfill(45, 220, GREEN);

    // Road
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, DARKGRAY);
    rectangle(0, 380, 1800, 430);
    floodfill(10, 390, GREEN);

    // Road divider
    setcolor(WHITE);
    for (int i = 10; i < 1800; i += 60)
        bar(i, 403, i + 30, 407);

    // Clouds (Move right)
    int cx = cloudShift % 1800;
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);

    ellipse(450 + cx, 100, 0, 360, 30, 20);
    floodfill(450 + cx, 100, WHITE);
    ellipse(480 + cx, 90, 0, 360, 30, 20);
    floodfill(480 + cx, 90, WHITE);
    ellipse(510 + cx, 100, 0, 360, 30, 20);
    floodfill(510 + cx, 100, WHITE);

    ellipse(850 - cx, 100, 0, 360, 30, 20);
    floodfill(850 - cx, 100, WHITE);
    ellipse(880 - cx, 90, 0, 360, 30, 20);
    floodfill(880 - cx, 90, WHITE);
    ellipse(910 - cx, 100, 0, 360, 30, 20);
    floodfill(910 - cx, 100, WHITE);

    ellipse(1250 - cx, 100, 0, 360, 30, 20);
    floodfill(1250 - cx, 100, WHITE);
    ellipse(1280 - cx, 90, 0, 360, 30, 20);
    floodfill(1280 - cx, 90, WHITE);
    ellipse(1310 - cx, 100, 0, 360, 30, 20);
    floodfill(1310 - cx, 100, WHITE);

    // Second copy for loop continuity
    ellipse(450 + cx - 1800, 100, 0, 360, 30, 20);
    floodfill(450 + cx - 1800, 100, WHITE);
    ellipse(480 + cx - 1800, 90, 0, 360, 30, 20);
    floodfill(480 + cx - 1800, 90, WHITE);
    ellipse(510 + cx - 1800, 100, 0, 360, 30, 20);
    floodfill(510 + cx - 1800, 100, WHITE);

    // House
    setcolor(BLACK);
    rectangle(1100,200,1300,360);
    line(1090,200,1310,200);
    line(1310,200,1200,70);
    line(1090,200,1200,70);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(1130,190,BLACK);

    rectangle(1130,230,1180,275);
    rectangle(1220,230,1270,275);
    rectangle(1180,300,1220,360);
    setfillstyle(SOLID_FILL, MAGENTA);
    floodfill(1110,210,BLACK);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    floodfill(1132,232,BLACK);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    floodfill(1222,232,BLACK);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(1190,310,BLACK);

    circle(1210,330,6);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(1212,332,BLACK);
 
    circle(400,600,150); // Circle 
    setfillstyle(9,YELLOW);
    floodfill(390,592,BLACK);

    line(360,570,310,530); //Girl
    line(430,570,480,530);
    line(310,530,365,500);
    line(480,530,430,500);
    circle(400,500,35);
    rectangle(360,535,430,620);
    setfillstyle(SOLID_FILL,RED);
    floodfill(390,592,BLACK);
    outtextxy(370,570,"HERO!!");
    circle(385,490,5);
    circle(415,490,5);
    arc(400,495,240,300,30);
    rectangle(360,620,430,720);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(390,690,BLACK);
    line(395,620,395,720);
    rectangle(460,550,500,600);
    setfillstyle(SOLID_FILL,9);
    floodfill(470,570,BLACK);
    outtextxy(465,560,"My");
    outtextxy(465,580,"Book");
}

int main() {
    initwindow(1800, 800);

    int page = 0; // Double buffering: two pages alternate between drawing & showing
    for (int x = 0; x < 1400; x += 10) {
        setactivepage(page);
        setvisualpage(1 - page);  // Display previous frame
        cleardevice();

        drawBackground(x / 3);
        drawCar(x);

        delay(50);
        page = 1 - page; // Switch pages
    }

    getch();
    closegraph();
    return 0;
}








