#include<windows.h>
#include<GL/glut.h>

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(5.5);

    //Denmark

    glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);


    glVertex2f(-0.9,0.5);
    glVertex2f(-0.4,0.5);

    glVertex2f(-0.4,0.5);
    glVertex2f(-0.4,0.9);

    glVertex2f(-0.4,0.9);
    glVertex2f(-0.9,0.9);

    glVertex2f(-0.9,0.9);
    glVertex2f(-0.9,0.5);


    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(1,1,1,1);

    glVertex2f(-0.8,0.5);
    glVertex2f(-0.75,0.5);

    glVertex2f(-0.75,0.5);
    glVertex2f(-0.75,0.9);

    glVertex2f(-0.75,0.9);
    glVertex2f(-0.8,0.9);

    glVertex2f(-0.8,0.9);
    glVertex2f(-0.8,0.5);

    glEnd();


    glBegin(GL_POLYGON);
    glColor4f(1,1,1,1);

    glVertex2f(-0.9,0.7);
    glVertex2f(-0.9,0.65);

    glVertex2f(-0.9,0.65);
    glVertex2f(-0.4,0.65);

    glVertex2f(-0.4,0.65);
    glVertex2f(-0.4,0.7);

    glVertex2f(-0.4,0.7);
    glVertex2f(-0.9,0.7);

    glEnd();



    //Tonga



    glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);

    glVertex2f(-0.5,0.1);
    glVertex2f(-0.1,0.1);

    glVertex2f(-0.1,0.1);
    glVertex2f(-0.1,0.4);

    glVertex2f(-0.1,0.4);
    glVertex2f(-0.5,0.4);

    glVertex2f(-0.5,0.4);
    glVertex2f(-0.5,0.1);


    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(1,1,1,1);

    glVertex2f(-0.5,0.4);
    glVertex2f(-0.5,0.3);

    glVertex2f(-0.5,0.3);
    glVertex2f(-0.35,0.3);

    glVertex2f(-0.35,0.3);
    glVertex2f(-0.35,0.4);

    glVertex2f(-0.35,0.4);
    glVertex2f(-0.5,0.4);

    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);

    glVertex2f(-0.45,0.32);
    glVertex2f(-0.435,0.32);

    glVertex2f(-0.435,0.32);
    glVertex2f(-0.435,0.38);

    glVertex2f(-0.435,0.38);
    glVertex2f(-0.45,0.38);

    glVertex2f(-0.45,0.38);
    glVertex2f(-0.45,0.32);

    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);

    glVertex2f(-0.47,0.36);
    glVertex2f(-0.47,0.34);

    glVertex2f(-0.47,0.34);
    glVertex2f(-0.415,0.34);

    glVertex2f(-0.415,0.34);
    glVertex2f(-0.415,0.36);

    glVertex2f(-0.415,0.36);
    glVertex2f(-0.47,0.36);

    glEnd();




    //Vietnam



    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.2f);
    glVertex2f(-0.3f, 0.9f);
    glVertex2f(0.3f, 0.9f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(-0.3f, 0.5f);
    glVertex2f(-0.3f, 0.9f);


    glEnd();





    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.1f, 0.75f);
    glVertex2f(0.1f, 0.75f);
    glVertex2f(0.0f, 0.65f);
    glVertex2f(-0.1f, 0.75f);


    glEnd();





    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.0f, 0.83f);
    glVertex2f(0.07f, 0.6f);
    glVertex2f(0.0f, 0.65f);
    glVertex2f(-0.07f, 0.6f);
    glVertex2f(0.0f, 0.83f);



    glEnd();




    //Somalia



    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.35f, 0.6f);

    glVertex2f(-0.6f, -0.1f);
    glVertex2f(0.0f, -0.1f);
    glVertex2f(0.0f, -0.5f);
    glVertex2f(-0.6f, -0.5f);
    glVertex2f(-0.6f, -0.1f);


    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.4f, -0.25f);
    glVertex2f(-0.2f, -0.25f);
    glVertex2f(-0.3f, -0.35f);
    glVertex2f(-0.4f, -0.25f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.0f-0.3f, -0.17f);
    glVertex2f(0.07f-0.3f, -0.4f);
    glVertex2f(0.0f-0.3f, -0.35f);
    glVertex2f(-0.07f-0.3f, -0.4f);
    glVertex2f(0.0f-0.3f, -0.17f);


    glEnd();


    //Switzerland


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.6f, -0.2f);
    glVertex2f(0.6f, -0.6f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.2f, -0.2f);

    glEnd();





    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.375f, -0.25f);
    glVertex2f(0.425, -0.25f);
    glVertex2f(0.425f, -0.55f);
    glVertex2f(0.375f, -0.55f);
    glVertex2f(0.375f, -0.25f);

    glEnd();





    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.25f, -0.375f);
    glVertex2f(0.55, -0.375f);
    glVertex2f(0.55f, -0.425f);
    glVertex2f(0.25f, -0.425f);
    glVertex2f(0.25f, -0.375f);

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
