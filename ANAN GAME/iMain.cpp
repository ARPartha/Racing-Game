
# include "iGraphics.h"

int x=205,y=0,coin_x=50,coin1_x=200,coin2_x=400,coin_y=1350,coin1_y=1000,coin2_y=1500,police_x,police_y=1500,count=0;

char score[5];

bool fall=false;

bool start_manu=true;

bool background=false;

bool credit=false;

bool back=false;

bool game_over=false;


//////////////////////////////////////////////////////////coin down code//////////////////////////////


void coinfall(){



if(fall==true){
	if(coin_y>0){
	coin_y=coin_y-2;
	}
	else{
		coin_y=1350;
	}
	if(coin1_y>0){
	coin1_y=coin1_y-2;
	}
	else{
		coin1_y=1000;
	}
	if(coin2_y>0){
	coin2_y=coin2_y-2;

	
  }
	else{
		coin2_y=1500;
     }
	if(police_y>750){

		police_x=rand()%500;
	}
	if(police_y>0){
		police_y=police_y-4;
	}
	else{
		police_y=1500;
	}
	/////////////////////////////////////////////matching coin and police car ////////////////////////////////////////////

	    if(coin_x<=x+140 && coin_x+40>=x  && coin_y<=y+166 && coin_y+40>y){


count=count+30;


   coin_y=1350;
  
	 }
		if(coin1_x<=x+140 && coin1_x+40>=x  && coin1_y<=y+166 && coin1_y+40>y){


  count=count+30;


  coin1_y=1000;
  
	 }
		if(coin2_x<=x+140 && coin2_x+40>=x  && coin2_y<=y+166 && coin2_y+40>y){


  count=count+30;


   coin2_y=1500;
  
	 }
		if(police_x<x+140 && police_x+100>x){
			if(police_y<=y+166){
				police_y=1500;
				 
				game_over=true;

				start_manu=false;

        		background=false;

		        fall=false;

		        credit= false;

		        back=false;

				srand((NULL));
		  PlaySound("MUSIC\\game over",NULL,SND_LOOP | SND_ASYNC);
	
			}
		}
    }
}
void iDraw() 
{
	iClear();
if(background==true){   
	iShowBMP(0,0,"IMAGE\\background.bmp");

	iShowBMP(x,y,"IMAGE\\car.bmp");
	
	iShowBMP(coin_x,coin_y,"IMAGE\\coin.bmp");

	iShowBMP(coin1_x,coin1_y,"IMAGE\\coin1.bmp");
	
	iShowBMP(coin2_x,coin2_y,"IMAGE\\coin2.bmp");
	
	iShowBMP(police_x,police_y,"IMAGE\\police car.bmp");

	iSetColor(0,0,0);
	    iText(100,650,"SCORE :",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(220,650,score,GLUT_BITMAP_TIMES_ROMAN_24);
		sprintf(score,"%d",count);

 }
if(start_manu==true){
	iShowBMP(0,0,"IMAGE\\start manu.bmp");
		
	  srand((NULL));
		 
     
}
if(credit==true){
	iShowBMP(0,0,"IMAGE\\credit.bmp");
}
if(game_over==true){
	iShowBMP(0,0,"IMAGE\\game over.bmp");
	 iText(100,650,"SCORE :",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(220,650,score,GLUT_BITMAP_TIMES_ROMAN_24);
		sprintf(score,"%d",count);
			
}
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

	if(start_manu==true){
		if(mx>=36 && mx<=148 &&  my>=548 && my<=594){
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		start_manu=false;

		background=true;

		fall=true;

		credit= false;

		back=false;

		game_over=false;
	
		 srand((NULL));
     PlaySound("MUSIC\\background",NULL,SND_LOOP | SND_ASYNC);
	

	}
   }

		if(mx>443 && mx<558 && my>316 && my<362){
			if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		start_manu=false;

		background=false;

		fall=false;

		credit= true;

		game_over=false;
	  
			srand((NULL));
		  PlaySound("MUSIC\\credit",NULL,SND_LOOP | SND_ASYNC);
	
			}

		}
	
			if(mx>=46 && mx<=138 &&  my>=60 && my<=100){
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		exit(0);
	  }
   }
}


if(credit==true){
	if(mx>0 && mx<75 && my>660 && my<700){
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		start_manu=true;

		credit=false;

		fall=false;

		background=false;
	
	 PlaySound("MUSIC\\start",NULL,SND_LOOP | SND_ASYNC);

	}
	   }
	}
if(background==true){
	if(mx>4 && mx<64 && my>660 && my< 690){
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		start_manu=true;

		credit=false;

		fall=false;

		background=false;

		 PlaySound("MUSIC\\start",NULL,SND_LOOP | SND_ASYNC);

	     }
	   }
     }
if(game_over==true){
	if(mx>228 && mx<398 && my>300 && my< 340){
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		start_manu=true;

		credit=false;

		fall=false;

		background=false;

		game_over=false;
	
		
	 srand((NULL));
     PlaySound("MUSIC\\start",NULL,SND_LOOP | SND_ASYNC);
	

	}
	   }
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
	if(x>=5 && x+160<600){
	if(key == GLUT_KEY_LEFT)
	{
		x=x-6;	
	}
	}
	if(x+160<=595 && x>=0){
	if(key == GLUT_KEY_RIGHT)
	{
		x=x+6;	
	}
}
	//place your codes for other keys here
  }

int main()

{
	 PlaySound("MUSIC\\start",NULL,SND_LOOP | SND_ASYNC);
	iSetTimer(1,coinfall);
	//place your own initialization codes here. 
	iInitialize(600, 700, "demooo");
	return 0;
}	