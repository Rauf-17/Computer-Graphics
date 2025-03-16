#include <windows.h>
#include <GL\glut.h>


void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(7);

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.8f,0.1f);


    glVertex2f(-0.8f,0.1f);
    glVertex2f(-0.8f, 0.8f);

    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.2f, 0.8f);

    glVertex2f(-0.2f, 0.8f);
    glVertex2f(-0.2f, 0.1f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,1.0f,0.0f);

    glVertex2f(0.2f, 0.6f);
    glVertex2f(0.2f, 0.3f);

    glVertex2f(0.2f, 0.3f);
    glVertex2f(0.6f, 0.3f);

    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.6f, 0.6f);

    glVertex2f(0.6f, 0.6f);
    glVertex2f(0.2f, 0.6f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,1.0f,0.0f);


    glVertex2f(0.6f,0.8f);
    glVertex2f(0.6f,0.1f);

    glVertex2f(0.6f,0.1f);
    glVertex2f(0.8f,0.45f);

    glVertex2f(0.8f,0.45f);
    glVertex2f(0.6f,0.8f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);

    glVertex2f(-0.2f,-0.1f);
    glVertex2f(-0.2f,-0.8f);

    glVertex2f(-0.2f,-0.8f);
    glVertex2f(-0.8f,-0.5f);

    glVertex2f(-0.8f,-0.5f);
    glVertex2f(-0.2f,-0.1f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);

    glVertex2f(0.5f,-0.1f);
    glVertex2f(0.2f,-0.8f);

    glVertex2f(0.2f,-0.8f);
    glVertex2f(0.8f,-0.8f);

    glVertex2f(0.8f,-0.8f);
    glVertex2f(0.5f,-0.1f);

    glEnd();

    glFlush();


}

int main(int argc, char** argv)
{
    glutInit(&argc , argv);

    glutCreateWindow("OpenGL Setup");
    glutInitWindowSize(720,720);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;

}
