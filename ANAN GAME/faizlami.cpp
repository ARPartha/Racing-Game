Mohammad


Search Drive

Drive
.
Folder Path
My Drive
programs and programming staffs
Visual Studio 2012
Projects
iGraphics
iGraphics
NEW 
Folders and views
My Drive
Shared with me
Google Photos
Recent
Starred
Trash
5 GB of 15 GB used
Upgrade storage
Get Drive for PC
Name
Owner
Last modified
File size
Debug
me
Nov 7, 2015me
—
pic
me
Nov 7, 2015me
—
pic.snake
me
Nov 7, 2015me
—

ajaira.cpp
me
Nov 7, 2015me
396 bytes

Analog watch.cpp
me
Nov 7, 2015me
2 KB

assignment - ball.cpp
me
Nov 7, 2015me
2 KB

ball.bmp
me
Nov 7, 2015me
12 KB

BallDemo.cpp
me
Nov 7, 2015me
2 KB

Base calculator.cpp
me
Nov 7, 2015me
3 KB

border 2.bmp
me
Nov 7, 2015me
854 bytes

border.bmp
me
Nov 7, 2015me
2 KB

Copy of faizlami.cpp
me
2:52 pmme
2 KB

faizlami.cpp
me
Nov 27, 2015me
2 KB

flag of .cpp
me
Nov 7, 2015me
3 KB

Flying Turbo - Copy.cpp
me
Nov 7, 2015me
22 KB

Flying Turbo - updating.cpp
me
Nov 7, 2015me
22 KB

Flying Turbo updated 01-09-15.cpp
me
Nov 7, 2015me
22 KB

Flying Turbo updated 05-10-15.cpp
me
Nov 7, 2015me
22 KB

Flying Turbo.cpp
me
Nov 7, 2015me
24 KB

girl.bmp
me
Nov 7, 2015me
48 KB

GLAux.h
me
Nov 7, 2015me
12 KB

Glaux.lib
me
Nov 7, 2015me
1 MB

GLUT.H
me
Nov 7, 2015me
27 KB

GLUT32.DLL
me
Nov 7, 2015me
216 KB

GLUT32.LIB
me
Nov 7, 2015me
28 KB

iDoc.doc
me
Nov 7, 2015me
78 KB

Idoc.pdf
me
Nov 7, 2015me
76 KB

iGraphics.h
me
Nov 7, 2015me
8 KB

iGraphics.vcxproj
me
Nov 7, 2015me
4 KB

iGraphics.vcxproj.filters
me
Nov 7, 2015me
978 bytes

iMain.cpp
me
Nov 7, 2015me
2 KB

jumping car.cpp
me
Nov 7, 2015me
16 KB

keeper.bmp
me
Nov 7, 2015me
12 KB

MouseDemo.cpp
me
Nov 7, 2015me
2 KB

PictureDemo.cpp
me
Nov 7, 2015me
2 KB

printing star.cpp
me
Nov 7, 2015me
2 KB

sin graph.cpp
me
Nov 7, 2015me
2 KB

smurf.bmp
me
Nov 7, 2015me
48 KB

snake.cpp
me
Nov 7, 2015me
2 KB

Source.cpp
me
Nov 7, 2015me
3 KB

test.cpp
me
Nov 7, 2015me
1 KB

TextInputDemo.cpp
me
Nov 7, 2015me
2 KB

Thumbs.db
me
Nov 7, 2015me
31 KB

tic.bmp
me
Nov 7, 2015me
3 KB



/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
# include "iGraphics.h"
int i=90,j=210;
bool jump=false;



/**
	function iDraw() is called again and again by the system.
*/
void iDraw()
{
	iClear();
	iEllipse(0,200,50,250);
	iEllipse(600,200,50,250);
	iEllipse(170,250,i,90);
	iEllipse(430,250,i,90);
	iEllipse(430,j,18,18);
	iEllipse(170,j,18,18);
	iCircle(170,j,4);
	iCircle(430,j,4);
	iCircle(300,0,10);

}

/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		jump=true;
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if(key == 'q')
	{
		//do something with 'q'
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
}

void play(){
	if(jump==true){
		if(i<=110){
			i+=2;
			j++;
		}
		if(i==110)
			jump=false;
	}
	else if(i>=90){
			i-=2;
			j--;
	}


}

int main()
{
	iSetTimer(30,play);
	iInitialize(600, 400, "jumping ...");
	return 0;
}	
