 #include <windows.h>
#include <GL/glut.h>
#include <math.h>

GLfloat i = 0.0f;

void idle()
{

    glutPostRedisplay();
}
void circle(float radius, float xc, float yc, float r, float g, float b)

{
    glBegin(GL_POLYGON);

    for(int i=0;i<200;i++)

        {

            glColor3f(r,g,b);

            float pi=3.1416;

            float A=(i*2*pi)/200;

            float r=radius;

            float x = r * cos(A);

            float y = r * sin(A);

            glVertex2f(x+xc,y+yc);

        }

    glEnd();

}

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(6);



      //Sky Starts

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 1.0f);

    glVertex2f(-1.0f,1.0f);
    glVertex2f(1.0f,1.0f);

    glVertex2f(1.0f,1.0f);
    glVertex2f(1.0f,0.0f);

    glVertex2f(1.0f,0.0f);
    glVertex2f(-1.0f,0.0f);

    glVertex2f(-1.0f,0.0f);
    glVertex2f(-1.0f,1.0f);

    glEnd();

       //Sky Ends

    //ground starts

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);

    glVertex2f(-1.0f,0.0f);
    glVertex2f(-1.0f,-1.0f);

    glVertex2f(-1.0f,-1.0f);
    glVertex2f(1.0f,-1.0f);

    glVertex2f(1.0f,-1.0f);
    glVertex2f(1.0f,0.0f);

    glVertex2f(1.0f,0.0f);
    glVertex2f(-1.0f,0.0f);

    glEnd();

    //ground ends


    //WindMile Stand

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.0f, 0.0f);

    glVertex2f(-0.3f,-1.0f);
    glVertex2f(0.3f,-1.0f);

    glVertex2f(0.3f,-1.0f);
    glVertex2f(0.3f,-0.95f);

    glVertex2f(0.3f,-0.95f);
    glVertex2f(-0.3f,-0.95f);

    glVertex2f(-0.3f,-0.95f);
    glVertex2f(-0.3f,-1.0f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.7f,0.7f,0.7f);

    glVertex2f(0.3f,-0.95f);
    glVertex2f(-0.3f,-0.95f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.0f);

    glVertex2f(0.3f,-0.95f);
    glVertex2f(-0.3f,-0.95f);

    glVertex2f(-0.3f,-0.95f);
    glVertex2f(-0.3f,-0.9f);

    glVertex2f(-0.3f,-0.9f);
    glVertex2f(0.3f,-0.9f);

    glVertex2f(0.3f,-0.9f);
    glVertex2f(0.3f,-0.95f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.0f, 0.0f);

    glVertex2f(-0.03f,-0.95f);
    glVertex2f(0.03f,-0.95f);

    glVertex2f(0.03f,-0.95f);
    glVertex2f(0.03f,0.0f);

    glVertex2f(0.03f,0.0f);
    glVertex2f(-0.03f,0.0f);

    glVertex2f(-0.03f,0.0f);
    glVertex2f(-0.03f,-0.95f);

    glEnd();

    circle(0.08,0,0,0.5f,0.7f,0.5f);


    glPushMatrix();
    glTranslatef(0.0f,0.0f,0);
    glRotatef(i,0.0f,0.0f,0.1f);

    //wing 1


    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.1f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(0.1f,0.3f);

    glVertex2f(0.1f,0.3f);
    glVertex2f(-0.1f,0.3f);

    glVertex2f(-0.1f,0.3f);
    glVertex2f(0.0f,0.0f);

    glEnd();

    //wing 2

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.1f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(0.3f,0.1f);

    glVertex2f(0.3f,0.1f);
    glVertex2f(0.3f,-0.1f);

    glVertex2f(0.3f,-0.1f);
    glVertex2f(0.0f,0.0f);

    glEnd();

    //wing 3

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.1f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(0.1f,-0.3f);

    glVertex2f(0.1f,-0.3f);
    glVertex2f(-0.1f,-0.3f);

    glVertex2f(-0.1f,-0.3f);
    glVertex2f(0.0f,0.0f);

    glEnd();


    //wing 4

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.1f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.3f,0.1f);

    glVertex2f(-0.3f,0.1f);
    glVertex2f(-0.3f,-0.1f);

    glVertex2f(-0.3f,-0.1f);
    glVertex2f(0.0f,0.0f);

    glEnd();


    glPopMatrix();

    i +=0.2f;


    glFlush();


}





 int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Scenario-2");
    glutInitWindowSize(720, 720);
    glutDisplayFunc(display);
    glutIdleFunc(idle);
    glutMainLoop();

    return 0;
}
