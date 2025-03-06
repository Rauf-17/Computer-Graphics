#include<windows.h>
#include<GL/glut.h>



void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(5.5);



    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.0f, 0.5f);


    glVertex2f(-0.3f, 0.7f);
    glVertex2f(0.3f, 0.7f);


    glVertex2f(0.3f, 0.7f);
    glVertex2f(0.3f, 0.5f);


    glVertex2f(0.3f, 0.5f);
    glVertex2f(-0.3f, 0.5f);


    glVertex2f(-0.3f, 0.5f);
    glVertex2f(-0.3f, 0.7f);


    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.3f, 0.45f, 0.7f);


    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.3f, 0.3f);


    glVertex2f(0.3f, 0.3f);
    glVertex2f(-0.3f, 0.3f);

    glVertex2f(-0.3f, 0.3f);
    glVertex2f(-0.3f, 0.5f);

    glVertex2f(-0.3f, 0.5f);
    glVertex2f(-0.3f, 0.5f);


    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.45f, 0.8f, 0.9f);


    glVertex2f(0.3f, 0.3f);
    glVertex2f(0.3f, 0.1f);

    glVertex2f(0.3f, 0.1f);
    glVertex2f(-0.3f, 0.1f);


    glVertex2f(-0.3f, 0.1f);
    glVertex2f(-0.3f, 0.3f);


    glVertex2f(-0.3f, 0.3f);
    glVertex2f(0.3f, 0.3f);


    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.35f, 0.8f, 0.5f);


    glVertex2f(0.3f, 0.1f);
    glVertex2f(0.3f, -0.1f);

    glVertex2f(0.3f, -0.1f);
    glVertex2f(-0.3f, -0.1f);


    glVertex2f(-0.3f, -0.1f);
    glVertex2f(-0.3f, 0.1f);



    glVertex2f(-0.3f, 0.1f);
    glVertex2f(0.3f, 0.1f);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.41f, 0.0f);


    glVertex2f(0.3f, -0.1f);
    glVertex2f(0.3f, -0.3f);

    glVertex2f(0.3f, -0.3f);
    glVertex2f(-0.3f, -0.3f);

    glVertex2f(-0.3f, -0.3f);
    glVertex2f(-0.3f, -0.1f);

    glVertex2f(-0.3f, -0.1f);
    glVertex2f(0.3f, -0.1f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);

   glVertex2f(0.3f, -0.3f);
    glVertex2f(0.3f, -0.5f);

    glVertex2f(0.3f, -0.5f);
    glVertex2f(-0.3f, -0.5f);

    glVertex2f(-0.3f, -0.5f);
    glVertex2f(-0.3f, -0.3f);

    glVertex2f(-0.3f, -0.3f);
    glVertex2f(0.3f, -0.3f);


    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);


    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.3f, -0.7f);

    glVertex2f(0.3f, -0.7f);
    glVertex2f(-0.3f, -0.7f);

    glVertex2f(-0.3f, -0.7f);
    glVertex2f(-0.3f, -0.5f);

    glVertex2f(-0.3f, -0.5f);
    glVertex2f(0.3f, -0.5f);



    glEnd();


    glFlush();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Setup");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display);
    glutMainLoop();



    return 0;
}
