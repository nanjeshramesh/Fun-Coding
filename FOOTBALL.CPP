#include<graphics.h> 
#include<stdio.h> 
#include<conio.h> 
#include<dos.h>
void main()
{ 
int gd=DETECT,gm,col=0; 
initgraph(&gd,&gm," "); 
while(!kbhit()) 
{ 
setcolor(15); 
circle(col,100,50); 
delay(1000); 

col++; 
if(col>=600) 
col=0; 
cleardevice(); 
} 
}