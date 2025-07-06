#include <GL/glut.h>
#include <windows.h>

void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(4);

    glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);

    glVertex2f(-0.3f,-0.8f);
    glVertex2f(0.3f,-0.8f);

    glVertex2f(0.3f,-0.8f);
    glVertex2f(0.25f,-0.6f);

    glVertex2f(0.25f,-0.6f);
    glVertex2f(-0.25f,-0.6f);

    glVertex2f(-0.25f,-0.6f);
    glVertex2f(-0.3f,-0.8f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5f,0.5f,0.5f);

    glVertex2f(0.1f,-0.7f);
    glVertex2f(-0.1f,-0.7f);

    glVertex2f(-0.1f,-0.7f);
    glVertex2f(-0.1f,-0.2f);

    glVertex2f(-0.1f,-0.2f);
    glVertex2f(0.1f,-0.2f);

    glVertex2f(0.1f,-0.2f);
    glVertex2f(0.1f,-0.7f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.5f,0.5f,0.5f);

    glVertex2f(-0.05f,-0.2f);
    glVertex2f(0.05f,-0.2f);

    glVertex2f(0.05f,-0.2f);
    glVertex2f(0.05f,0.5f);

    glVertex2f(0.05f,0.5f);
    glVertex2f(-0.05f,0.5f);

    glVertex2f(-0.05f,0.5f);
    glVertex2f(-0.05f,-0.2f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);

    glVertex2f(-0.05f,0.5f);
    glVertex2f(0.05f,0.5f);

    glVertex2f(0.05f,0.5f);
    glVertex2f(0.2f,0.67f);

    glVertex2f(0.2f,0.67f);
    glVertex2f(-0.2f,0.67f);

    glVertex2f(-0.2f,0.67f);
    glVertex2f(-0.05f,0.5f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(-0.2f,0.67f);
    glVertex2f(0.2f,0.67f);

    glVertex2f(0.2f,0.67f);
    glVertex2f(0.22f,0.7f);

    glVertex2f(0.22f,0.7f);
    glVertex2f(-0.22f,0.7f);

    glVertex2f(-0.22f,0.7f);
    glVertex2f(-0.2f,0.67f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);

    glVertex2f(0.22f,0.7f);
    glVertex2f(-0.22f,0.7f);

    glVertex2f(-0.22f,0.7f);
    glVertex2f(-0.2f,0.85f);

    glVertex2f(-0.2f,0.85f);
    glVertex2f(0.2f,0.85f);

    glVertex2f(0.2f,0.85f);
    glVertex2f(0.22f,0.7f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(-0.2f,0.85f);
    glVertex2f(0.2f,0.85f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);

    glVertex2f(-0.2f,0.85f);
    glVertex2f(0.2f,0.85f);

    glVertex2f(0.2f,0.85f);
    glVertex2f(0.0f,0.95f);

    glVertex2f(0.0f,0.95f);
    glVertex2f(-0.2f,0.85f);

    glEnd();


    glFlush();



}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(720,720);
    glutCreateWindow("Lamp post");



    glutDisplayFunc(display);
    glutMainLoop();



    return 0;
}

