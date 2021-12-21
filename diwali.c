#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

#define text " KULDEEP YADAV "
int main()
{
    int i=0,j;
    int x,y;
    int color;
    initwindow(1366,768);
    setlinestyle(0,0,1);
    while(!kbhit())
    {
        color=rand()%15+1;
        settextstyle(8,0,6);
        setcolor(color);
        outtextxy(550,100,text);
        setcolor(color+1);
        outtextxy(650,200,"IS");
        setcolor(color+2);
        outtextxy(500,300,"WISHING YOU");
        setcolor(color+3);
         outtextxy(300,400,"A VERY VERY HAPPY DIWALI");
        x=rand()%1366;
        y=rand()%768;
        for(i=768;i!=y;i--){
            if(i%50==0)
                delay(1);
            putpixel(x,i,14);
        }
        for(i=768;i!=y;i--){
            if(i%70==0)
                delay(1);
            putpixel(x,i,0);
        }
        for(j=0;j!=100;j+=5)
        {
            for(i=0;i!360;i+=15){
                setcolor(color);
            line(x,y,x+j*cos(3.14/180*i),y+j*sin(i*3.14/180));
        }
        }
        setcolor(0);
        for(j=0;j!=100;j++)
        {
            for(i=0;i!360;i+=15)
                line(x,y,x+j*cos(3.14/180*i),y+j*sin(i*3.14/180));
        }
        }
        getch();
        closegraph();
    }
