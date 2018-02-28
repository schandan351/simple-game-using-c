#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
void print_line();
void print_line2();

void main()
{
int gd=DETECT,gm,i,j,img;
void *BUFFER1;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
cleardevice();
setbkcolor(2);
//drawing blocks
setfillstyle(1,9);
floodfill(2,2,17);
img=imagesize(0,0,60,22);
BUFFER1=malloc(img);
getimage(0,0,60,22,BUFFER1);
putimage(0,0,BUFFER1,XOR_PUT);
for(j=0;j<180;j+=30)
for(i=8;i<600;i+=70)
{
putimage(i,30+j,BUFFER1,XOR_PUT);
}
//drwaing paddle
setcolor(6);
rectangle(80,445,180,460);
setfillstyle(1,15);
floodfill(81, 446,6);
//drawing balls
setcolor(WHITE);
setfillstyle(1,12);
circle(350,350,14);
floodfill(350,350,WHITE);




print_line();
print_line2();

getch();

}
void print_line()
{
setcolor(WHITE);
line(0,18,640,18);
line(0,19,640,19);
line(0,20,640,20);
line(0,21,640,21);

}

void print_line2()
{
 line(0,465,640,465);
  line(0,466,640,466);
   line(0,467,640,467);
    line(0,468,640,468);
}

