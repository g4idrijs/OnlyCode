//题目：画图，学用rectangle画方形。　　　
//1.程序分析：利用for循环控制100-999个数，每个数分解出个位，十位，百位。
//2.程序源代码：
#include <stdio.h>
#include "graphics.h"

int main(int argc, char *argv[]) {
	int x0,y0,y1,x1,driver,mode,i;
	driver=VGA;mode=VGAHI;
	initgraph(&driver,&mode,"");
	setbkcolor(YELLOW);
	x0=263;y0=263;y1=275;x1=275;
	for(i=0;i<=18;i++){
		setcolor(1);
		rectangle(x0,y0,x1,y1);
		x0=x0-5;
		y0=y0-5;
		x1=x1+5;
		y1=y1+5;
	}
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	outtextxy(150,40,"How beautiful it is!");
	line(130,60,480,60);
	setcolor(2);
	circle(269,269,137);
	return 0;
}