 #include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>

GLfloat position = 0.0f;
GLfloat speed = 0.08f;

void update(int value)
{
    if(position <= -1.9f)

        position = 1.0f;
        position -= speed;

	    glutPostRedisplay();
	    glutTimerFunc(100, update, 0);
}


void display()
{

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //box 1

    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(0.8f,0.0f);
    glVertex2f(1.0f,0.0f);

    glVertex2f(1.0f,0.0f);
    glVertex2f(1.0f,0.2f);

    glVertex2f(1.0f,0.2f);
    glVertex2f(0.8f,0.2f);

    glVertex2f(0.8f,0.2f);
    glVertex2f(0.8f,0.0f);

    glEnd();

    glPopMatrix();



    //box 2


    glPushMatrix();
    glTranslatef(-position,0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.4f,0.9f);

    glVertex2f(-1.0f,0.0f);
    glVertex2f(-0.8f,0.0f);

    glVertex2f(-0.8f,0.0f);
    glVertex2f(-0.8f,-0.2f);

    glVertex2f(-0.8f,-0.2f);
    glVertex2f(-1.0f,-0.2f);

    glVertex2f(-1.0f,-0.2f);
    glVertex2f(-1.0f,0.0f);

    glEnd();

    glPopMatrix();

    //box 3

    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);

    glVertex2f(0.0f,1.0f);
    glVertex2f(0.2f,1.0f);

    glVertex2f(0.2f,1.0f);
    glVertex2f(0.2f,0.8f);

    glVertex2f(0.2f,0.8f);
    glVertex2f(0.0f,0.8f);

    glVertex2f(0.0f,0.8f);
    glVertex2f(0.0f,1.0f);

    glEnd();

    glPopMatrix();

    //box 4

    glPushMatrix();
    glTranslatef(0.0f,-position, 0.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.5f, 1.0f, 1.0f);

    glVertex2f(0.0f,-1.0f);
    glVertex2f(-0.2f,-1.0f);

    glVertex2f(-0.2f,-1.0f);
    glVertex2f(-0.2f,-0.8f);

    glVertex2f(-0.2f,-0.8f);
    glVertex2f(0.0f,-0.8f);

    glVertex2f(0.0f,-0.8f);
    glVertex2f(0.0f,-1.0f);

    glEnd();

    glPopMatrix();



    glFlush();
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitWindowSize(720, 720);
   glutCreateWindow("Moving Object");
   glutDisplayFunc(display);
   glutTimerFunc(100, update, 0);
   glutMainLoop();
   return 0;
}
