#include <GL/gl.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);

    for (int i = 0; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}

void init(void)
{
    glClearColor(0.0f, 0.0f,0.2f,0.0f);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 500.0, 0.0, 500.0); // window size
}

float bx = 10;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Ground Color
    glColor3f(0.0f, 0.7f, 0.0f);
    glBegin(GL_POLYGON);

    glVertex2f(0.0f, 0.0f);
    glVertex2f(500.0f, 0.0f);
    glVertex2f(500.0f, 150.0f);
    glVertex2f(0.0f, 150.0f);

    glEnd();



    // Road
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);

    glVertex2f(0.0f, 55.0f);
    glVertex2f(500.0f, 55.0f);
    glVertex2f(500.0f, 115.0f);
    glVertex2f(0.0f, 115.0f);


    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 60.0f);
    glVertex2f(500.0f, 60.0f);
    glVertex2f(500.0f, 110.0f);
    glVertex2f(0.0f, 110.0f);

    glEnd();

    glPushMatrix();
    glTranslatef(bx, 0, 0);

    // Car body

    glColor3ub(255,255,0);
    glBegin(GL_POLYGON);

    glVertex2f(420.0f, 100.0f);
    glVertex2f(490.0f, 100.0f);
    glVertex2f(485.0f, 130.0f);
    glVertex2f(420.0f, 130.0f);

    glEnd();

    glColor3ub(255,255,0);
    glBegin(GL_POLYGON);

    glVertex2f(420.0f, 130.0f);
    glVertex2f(475.0f, 130.0f);
    glVertex2f(465.0f, 160.0f);
    glVertex2f(430.0f, 160.0f);
    glEnd();

    // Car windows
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(425.0f, 130.0f);
    glVertex2f(445.0f, 130.0f);
    glVertex2f(445.0f, 150.0f);
    glVertex2f(430.0f, 150.0f);


    glEnd();


    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(450.0f, 130.0f);
    glVertex2f(470.0f, 130.0f);
    glVertex2f(465.0f, 150.0f);
    glVertex2f(450.0f, 150.0f);

    glEnd();

    // Car wheels
    glColor3ub(0, 0, 0);
    circle(10.0f, 14.0f, 435.0f, 100.0f);
    circle(10.0f, 14.0f, 465.0f, 100.0f);

    glColor3ub(211, 211, 211);
    circle(6.0f, 10.0f, 435.0f, 100.0f);
    circle(6.0f, 10.0f, 465.0f, 100.0f);

    glPopMatrix();


    bx += 0.05;
    if (bx > 0)
        bx = -400;
    glutPostRedisplay();

    glFlush();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(720, 720);
    glutCreateWindow("Moving Car");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
