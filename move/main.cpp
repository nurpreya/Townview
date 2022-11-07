
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float windowWidth=1400;
float windowHeight=1400;
float shift=0;
float cloud=0;
float sun=0;
bool scale=false;
bool txval=false;
bool tyval=false;
void road(){


     glPushMatrix();
      glBegin(GL_QUADS);
		glColor3f(0.0,0.4,0.0);
		glVertex2f(-100.0,-89.0);
		glVertex2f(-100.0,-100.0);
		glVertex2f(100.0,-100.0);
		glVertex2f(100.0,-89.0);

	glEnd();
    glPopMatrix();

}

void strip(){

glPushMatrix();
      glBegin(GL_QUADS);
		glColor3f(255.0,255.0,255.0);
		glVertex2f(-100.0,-81.0);
		glVertex2f(-100.0,-80.5);
		glVertex2f(-85.0,-80.5);
		glVertex2f(-85.0,-81.0);

	glEnd();
    glPopMatrix();


}

void tree(){

glPushMatrix();
      glBegin(GL_QUADS);

		glColor3ub(64, 64, 64);
		glVertex2f(-90.5,-40.0);
		glVertex2f(-90.5,-47.0);
		glVertex2f(-89.5,-47.0);
		glVertex2f(-89.5,-40.0);

	glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_TRIANGLES);

		glColor3ub(64, 64, 64);
		glVertex2f(-90.0,-30.0);
		glVertex2f(-93.0,-40.0);
        glVertex2f(-87.0,-40.0);

	glEnd();
    glPopMatrix();


}

void window(){

 glPushMatrix();
      glBegin(GL_QUADS);
		glColor3f(255.0 ,255.0 ,255.0);
		glVertex2f(74.0,-36.0);
		glVertex2f(74.0,-40.0);
		glVertex2f(83.0,-40.0);
		glVertex2f(83.0,-36.0);

	glEnd();
    glPopMatrix();

}

void longt(){

 glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(178 ,34, 34);
		glVertex2f(26.0,-50.0);
		glVertex2f(26.0,-69.3);
		glVertex2f(30.0,-69.3);
		glVertex2f(30.0,-50.0);

	glEnd();
    glPopMatrix();

}

void circle()
{

     glPushMatrix();

		glColor3f(0.0,0.5,0.0);

		  glutSolidSphere(5.5,50,7);

	glEnd();
    glPopMatrix();
}
void skycircle()
{

     glPushMatrix();

		glColor3f(255.0,255.0,255.0);

		  glutSolidSphere(5.5,50,7);

	glEnd();
    glPopMatrix();
}

void minar(){

     glPushMatrix();
      glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(-95.0,-60.0);
		glVertex2f(-95.0,-69.3);
		glVertex2f(-89.0,-69.3);
		glVertex2f(-89.0,-60.0);

	glEnd();
    glPopMatrix();

  glPushMatrix();
      glBegin(GL_QUADS);
		glColor3ub(96 ,123 ,139);
		glVertex2f(-94.5,-60.5);
		glVertex2f(-94.5,-69.3);
		glVertex2f(-89.5,-69.3);
		glVertex2f(-89.5,-60.5);

	glEnd();
    glPopMatrix();

}

	void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-100, 100, -100, 100);

    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glViewport(0, 0 ,windowWidth ,windowHeight);
 glPushMatrix();
      glBegin(GL_QUADS);//sky
		glColor3ub(0.0,205.0,205.0);
		glVertex2f(-100.0,100.0);
		glVertex2f(-100.0,-45.3);
		glVertex2f(100.0,-45.3);
		glVertex2f(100.0,100.0);

	glEnd();
    glPopMatrix();

  //sun.....
  glPushMatrix();

		glColor3f(1.0,0.0,0.0);
		glTranslatef(80,-1 - sun,0);
            glScalef(1,1,0);
		  glutSolidSphere(5.5,50,7);

	glEnd();
    glPopMatrix();

//big white ball
  glPushMatrix();
glTranslatef(-75,-44,0);
glScalef(5,5,0);
skycircle();
glPopMatrix();


glPushMatrix();
glTranslatef(-22,-44,0);
glScalef(5,5,0);
skycircle();
glPopMatrix();

glPushMatrix();
glTranslatef(30,-44,0);
glScalef(5,5,0);
skycircle();
glPopMatrix();

glPushMatrix();
glTranslatef(85,-44,0);
glScalef(5,5,0);
skycircle();
glPopMatrix();

 //megh 1......
glPushMatrix();
glTranslatef(5 + cloud,-5,0);
glScalef(1,1,0);
skycircle();
glPopMatrix();

glPushMatrix();
glTranslatef(5 + cloud,-10,0);
glScalef(1,1,0);
skycircle();
glPopMatrix();

glPushMatrix();
glTranslatef(-4 + cloud,-8,0);
glScalef(1,1,0);
skycircle();
glPopMatrix();

glPushMatrix();
glTranslatef(13 + cloud,-8,0);
glScalef(1,1,0);
skycircle();
glPopMatrix();
//megh 2.......

glPushMatrix();
glTranslatef(-72 + cloud,-7,0);
glScalef(1,1,0);
skycircle();
glPopMatrix();

glPushMatrix();
glTranslatef(-63 + cloud,-3,0);
glScalef(1,1,0);
skycircle();
glPopMatrix();

glPushMatrix();
glTranslatef(-55 + cloud,-7,0);
glScalef(1,1,0);
skycircle();
glPopMatrix();

glPushMatrix();
glTranslatef(-63 + cloud,-10,0);
glScalef(1,1,0);
skycircle();
glPopMatrix();

//megh3''''''
glPushMatrix();
glTranslatef(70 + cloud,-7,0);
glScalef(1,1,0);
skycircle();
glPopMatrix();

glPushMatrix();
glTranslatef(63 + cloud,-6,0);
glScalef(1,1,0);
skycircle();
glPopMatrix();

glPushMatrix();
glTranslatef(55 + cloud,-7,0);
glScalef(1,1,0);
skycircle();
glPopMatrix();

glPushMatrix();
glTranslatef(63 + cloud,-8,0);
glScalef(1,1,0);
skycircle();
glPopMatrix();

road();

glPushMatrix();
      glBegin(GL_QUADS);//gray
		glColor3ub(139, 139, 122);
		glVertex2f(-100.0,-72.0);
		glVertex2f(-100.0,-88.5);
		glVertex2f(100.0,-88.5);
		glVertex2f(100.0,-72.0);

	glEnd();
    glPopMatrix();

strip();

glPushMatrix();
glTranslatef(30,0,0);
strip();
glPopMatrix();

glPushMatrix();
glTranslatef(60,0,0);
strip();
glPopMatrix();

glPushMatrix();
glTranslatef(90,0,0);
strip();
glPopMatrix();

glPushMatrix();
glTranslatef(120,0,0);
strip();
glPopMatrix();

glPushMatrix();
glTranslatef(150,0,0);
strip();
glPopMatrix();

glPushMatrix();
glTranslatef(180,0,0);
strip();
glPopMatrix();

glPushMatrix();
glTranslatef(0,-51.7,0);
glScalef(1,0.2,1);
road();
glPopMatrix();

glPushMatrix();
      glBegin(GL_QUADS);//
		glColor3f(0.0,0.0,0.5);
		glVertex2f(-100.0,-69.3);
		glVertex2f(-100.0,-69.5);
		glVertex2f(100.0,-69.5);
		glVertex2f(100.0,-69.3);

	glEnd();
    glPopMatrix();




glPushMatrix();
      glBegin(GL_QUADS);//gray
		glColor3ub(96 ,123 ,139);
		glVertex2f(-100.0,-45.0);
		glVertex2f(-100.0,-69.3);
		glVertex2f(100.0,-69.3);
		glVertex2f(100.0,-45.0);

	glEnd();
    glPopMatrix();

  //carrr............

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3f(1.0,0.0,0.0);
		glVertex2f(-80.0 + shift,-73.0);
		glVertex2f(-80.0 + shift,-78.0);
		glVertex2f(-60.0 + shift,-78.0);
		glVertex2f(-60.0 + shift,-73.0);

	glEnd();
    glPopMatrix();

 glPushMatrix();
      glBegin(GL_QUADS);
		glColor3f(0.0,0.6,0.6);
		glVertex2f(-74.0 + shift,-69.0);
		glVertex2f(-74.0 + shift,-73.0);
		glVertex2f(-66.0 + shift,-73.0);
		glVertex2f(-66.0 + shift,-69.0);

	glEnd();
    glPopMatrix();

glPushMatrix();
      glBegin(GL_TRIANGLES);
		glColor3f(0.0,0.0,0.6);
		glVertex2f(-74.0 + shift,-69.0);
		glVertex2f(-78.0 + shift,-73.0);
		glVertex2f(-74.0 + shift,-73.0);

	glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_TRIANGLES);
		glColor3f(0.0,0.0,0.6);
		glVertex2f(-66.0 + shift,-69.0);
		glVertex2f(-62.0 + shift,-73.0);
		glVertex2f(-66.0 + shift,-73.0);

	glEnd();
    glPopMatrix();

 glPushMatrix();

		glColor3f(0.0,0.0,0.0);
		glTranslatef(-75 + shift,-78,0);
        glScalef(.6,.6,0);
		  glutSolidSphere(5.5,50,7);

	glEnd();
    glPopMatrix();

     glPushMatrix();

		glColor3f(0.0,0.0,0.0);
		glTranslatef(-65 + shift,-78,0);
          glScalef(.6,.6,0);
		  glutSolidSphere(5.5,50,7);

	glEnd();
    glPopMatrix();

   glPushMatrix();
glTranslatef(-65 + shift,-78,0);
glScalef(.5,.5,0);
skycircle();
glPopMatrix();

 glPushMatrix();
glTranslatef(-75 + shift,-78,0);
glScalef(.5,.5,0);
skycircle();
glPopMatrix();

//minar.......
 glPushMatrix();

		glColor3f(1.0,0.0,0.0);
		glTranslatef(-76,-60,0);
            glScalef(1,1,0);
		  glutSolidSphere(5.5,50,7);

	glEnd();
    glPopMatrix();
road();


minar();

glPushMatrix();
glTranslatef(8,34.7,0);
glScalef(1,1.5,1);
minar();
glPopMatrix();

glPushMatrix();
glTranslatef(16,69.3,0);
glScalef(1,2,1);
minar();
glPopMatrix();

glPushMatrix();
glTranslatef(24,34.7,0);
glScalef(1,1.5,1);
minar();
glPopMatrix();

glPushMatrix();
glTranslatef(32,0,0);
glScalef(1,1,1);
minar();
glPopMatrix();
//treeeeeeeeeeeeeeeeeee......

    tree();

    glPushMatrix();
glTranslatef(12,0,0);
tree();
glPopMatrix();

 glPushMatrix();
glTranslatef(24,0,0);
tree();
glPopMatrix();

 glPushMatrix();
glTranslatef(36,0,0);
tree();
glPopMatrix();

 glPushMatrix();
glTranslatef(48,0,0);
tree();
glPopMatrix();

 glPushMatrix();
glTranslatef(60,0,0);
tree();
glPopMatrix();

 glPushMatrix();
glTranslatef(72,0,0);
tree();
glPopMatrix();

 glPushMatrix();
glTranslatef(84,0,0);
tree();
glPopMatrix();

 glPushMatrix();
glTranslatef(96,0,0);
tree();
glPopMatrix();

 glPushMatrix();
glTranslatef(108,0,0);
tree();
glPopMatrix();

 glPushMatrix();
glTranslatef(120,0,0);
tree();
glPopMatrix();

 glPushMatrix();
glTranslatef(132,0,0);
tree();
glPopMatrix();

 glPushMatrix();
glTranslatef(144,0,0);
tree();
glPopMatrix();

 glPushMatrix();
glTranslatef(156,0,0);
tree();
glPopMatrix();

 glPushMatrix();
glTranslatef(168,0,0);
tree();
glPopMatrix();

glPushMatrix();
glTranslatef(180,0,0);
tree();
glPopMatrix();

  glPushMatrix();
      glBegin(GL_QUADS);//house
		glColor3ub(107 ,142 ,35);
		glVertex2f(40.0,-33.0);
		glVertex2f(40.0,-69.3);
		glVertex2f(85.0,-69.3);
		glVertex2f(85.0,-33.0);

	glEnd();
    glPopMatrix();

glPushMatrix();
      glBegin(GL_QUADS);//black
		glColor3ub(0.0,0.0,0.0);
		glVertex2f(40.0,-32.8);
		glVertex2f(40.0,-33.0);
		glVertex2f(62.0,-33.0);
		glVertex2f(62.0,-32.8);

	glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);//house
		glColor3ub(107 ,142 ,35);
		glVertex2f(40.0,-16.0);
		glVertex2f(40.0,-32.8);
		glVertex2f(62.0,-32.8);
		glVertex2f(62.0,-16.0);

	glEnd();
    glPopMatrix();
window();

glPushMatrix();
glTranslatef(-9.5,0,0);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-9.5,-4.5,0);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(0,-4.5,0);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-27,51,0);
glScalef(1,2,1);
window();
glPopMatrix();

  glPushMatrix();
      glBegin(GL_TRIANGLES);//house
		glColor3f(0.0,0.0,0.0);
		glVertex2f(51.0,-8.0);
		glVertex2f(39.0,-16.0);
		glVertex2f(63.0,-16.0);
	glEnd();
    glPopMatrix();
 glPushMatrix();
      glBegin(GL_QUADS);//door
		glColor3f(255.0,255.0,255.0);
		glVertex2f(47.0,-50.0);
		glVertex2f(47.0,-69.3);
		glVertex2f(55.0,-69.3);
		glVertex2f(55.0,-50.0);

	glEnd();
    glPopMatrix();

  glPushMatrix();
      glBegin(GL_QUADS);//house_2
		glColor3ub(154 ,205 ,50);
		glVertex2f(85.0,-33.0);
		glVertex2f(85.0,-69.3);
		glVertex2f(90.0,-64.0);
		glVertex2f(90.0,-28.0);

	glEnd();
    glPopMatrix();



  glPushMatrix();
      glBegin(GL_QUADS);//house_3
		glColor3ub(179, 238, 58);
		glVertex2f(65.0,-28.0);
		glVertex2f(62.0,-33.0);
		glVertex2f(85.0,-33.0);
		glVertex2f(90.0,-28.0);

	glEnd();
    glPopMatrix();

 glPushMatrix();
      glBegin(GL_QUADS);//house_3
		glColor3ub(179, 238, 58);
		glVertex2f(62.0,-16.0);
		glVertex2f(62.0,-33.0);
		glVertex2f(65.0,-28.0);
		glVertex2f(65.0,-20.0);

	glEnd();
    glPopMatrix();

longt();


glPushMatrix();
glTranslatef(28,-45,0);
glScalef(2,2,0);
circle();
glPopMatrix();

glPushMatrix();
      glBegin(GL_QUADS);//building
		glColor3ub(188, 238, 104);
		glVertex2f(-50.0,-25.0);
		glVertex2f(-50.0,-69.3);
		glVertex2f(7.0,-69.3);
		glVertex2f(7.0,-25.0);

	glEnd();
    glPopMatrix();
//building window....
glPushMatrix();
glTranslatef(-120,22,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-110,22,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-100,22,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-90,22,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-80,22,0);
glScalef(1,1.5,1);
window();
glPopMatrix();
//2nd..
glPushMatrix();
glTranslatef(-120,15,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-110,15,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-100,15,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-90,15,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-80,15,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

//3rd....

glPushMatrix();
glTranslatef(-120,8,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-110,8,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-100,8,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-90,8,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-80,8,0);
glScalef(1,1.5,1);
window();
glPopMatrix();
//4th....
glPushMatrix();
glTranslatef(-120,1,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-110,1,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-100,1,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-90,1,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(-80,1,0);
glScalef(1,1.5,1);
window();
glPopMatrix();

glPushMatrix();
      glBegin(GL_QUADS);
		glColor3f(255.0,255.0,255.0);
		glVertex2f(-28.0,-62.0);
		glVertex2f(-28.0,-69.3);
		glVertex2f(-17.0,-69.3);
		glVertex2f(-17.0,-62.0);

	glEnd();
    glPopMatrix();

glPushMatrix();
      glBegin(GL_QUADS);//building
		glColor3ub(110, 139, 61);
		glVertex2f(7.0,-25.0);
		glVertex2f(7.0,-69.3);
		glVertex2f(10.0,-66.0);
		glVertex2f(10.0,-22.0);

	glEnd();
    glPopMatrix();

glPushMatrix();
      glBegin(GL_QUADS);//building
		glColor3ub(162 ,205, 90);
		glVertex2f(-47.0,-22.0);
		glVertex2f(-50.0,-25.3);
		glVertex2f(7.0,-25.0);
		glVertex2f(10.0,-22.0);
	glEnd();
    glPopMatrix();
//dustbin..............
glPushMatrix();
      glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(16.0,-60.0);
		glVertex2f(16.0,-69.3);
		glVertex2f(16.5,-69.3);
		glVertex2f(16.5,-60.0);

	glEnd();
    glPopMatrix();

    glPushMatrix();
      glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(16.6,-60.0);
		glVertex2f(16.6,-67.0);
		glVertex2f(21.0,-67.0);
		glVertex2f(21.0,-60.0);

	glEnd();
    glPopMatrix();

glPushMatrix();
      glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(21.1,-60.0);
		glVertex2f(21.1,-69.3);
		glVertex2f(21.6,-69.3);
		glVertex2f(21.6,-60.0);

	glEnd();
    glPopMatrix();

  glFlush();
    glutSwapBuffers();

}

void keyboarfun( unsigned char key, int x, int y )
{
    switch ( key )
    {
    case 'C'://car
        scale=true;
         glutPostRedisplay();
        break;
    case 'c':
        scale=false;
         glutPostRedisplay();
        break;

      case 'M'://meg
        txval=true;
         glutPostRedisplay();
        break;
    case 'm':
        txval=false;
         glutPostRedisplay();
        break;

     case 'e'://sun
        tyval=true;
         glutPostRedisplay();
        break;
    case 'w':
        tyval=false;
         glutPostRedisplay();
        break;

    }

}
void caranimation(){
     if(scale==true){
        shift+=0.1;
         if(shift>170){
            shift=-110;
         }
     }
     else if(scale==false){
        shift=5;
     }

}

void cloudanimation(){
     if(txval==true){
        cloud+=0.03;
         if(cloud>160){
            cloud=-70;
         }
     }
     else if(txval==false){
        cloud=5;
     }

}

void sunanimation(){
     if(tyval==true){
        sun+=0.001;
         if( sun>100){
             sun=-10;
         }
     }
     else if(tyval=false){
         sun=5;
     }

}
void animate(void){

caranimation();
cloudanimation();
sunanimation();

glutPostRedisplay();
}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("Home");

    glutKeyboardFunc(keyboarfun);
    glutIdleFunc(animate);
    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
