#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.1416

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(7);

    //Sky Starts

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.7f, 1.0f);

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

    //Left Road Starts

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.1f);

    glVertex2f(-1.0f,0.0f);
    glVertex2f(-0.6f,0.0f);

    glVertex2f(-0.6f,0.0f);
    glVertex2f(-0.65f,-1.0f);

    glVertex2f(-0.65f,-1.0f);
    glVertex2f(-1.0f,-1.0f);

    glVertex2f(-1.0f,-1.0f);
    glVertex2f(-1.0f,0.0f);

    glEnd();

    //Line between the Road

    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(-0.85f,0.0f);
    glVertex2f(-0.8f,0.0f);

    glVertex2f(-0.8f,0.0f);
    glVertex2f(-0.95f,-1.0f);

    glVertex2f(-0.95f,-1.0f);
    glVertex2f(-1.0f,-1.0f);

    glVertex2f(-1.0f,-1.0f);
    glVertex2f(-0.85f,0.0f);

    glEnd();

    //Line ends


    //Road Line starts

    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(-0.6f,0.0f);
    glVertex2f(-0.55f,0.0f);

    glVertex2f(-0.55f,0.0f);
    glVertex2f(-0.58f,-1.0f);

    glVertex2f(-0.58f,-1.0f);
    glVertex2f(-0.68f,-1.0f);

    glVertex2f(-0.68f,-1.0f);
    glVertex2f(-0.6f,0.0f);


    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.7f, 0.7f, 0.7f);

    glVertex2f(-0.6f,0.0f);
    glVertex2f(-0.68,-1.0f);

    glEnd();

    //ground for traffic light

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);

    glVertex2f(-0.55f,0);
    glVertex2f(-0.59f,-1.0);

    glVertex2f(-0.59f,-1.0);
    glVertex2f(-0.14f,-1.0);

    glVertex2f(-0.14f,-1.0);
    glVertex2f(-0.1f,0);

    glVertex2f(-0.1f,0);
    glVertex2f(-0.55f,0);

    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(-0.06f,0.0f);
    glVertex2f(-0.1f,-1.0f);

    glVertex2f(-0.1f,-1.0f);
    glVertex2f(0.0f,-1.0f);

    glVertex2f(0.0f,-1.0f);
    glVertex2f(0.0f,0.0f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.06f,0.0f);

    glEnd();


    //road left ends


    //traffic light starts


    // traffic light base

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.1f);

    glVertex2f(-0.44f,-0.64f);
    glVertex2f(-0.25f,-0.64f);

    glVertex2f(-0.25f,-0.64f);
    glVertex2f(-0.22f,-0.5f);

    glVertex2f(-0.22f,-0.5f);
    glVertex2f(-0.4f,-0.5f);

    glVertex2f(-0.4f,-0.5f);
    glVertex2f(-0.44f,-0.64f);

    glEnd();


    // Stand starts

    glBegin(GL_POLYGON);
    glColor3f(0.9f,0.9f,0.9f);

    glVertex2f(-0.355f,-0.57f);
    glVertex2f(-0.3f,-0.57f);

    glVertex2f(-0.3f,-0.57f);
    glVertex2f(-0.3f,0.2f);

    glVertex2f(-0.3f,0.2f);
    glVertex2f(-0.355f,0.2f);

    glVertex2f(-0.355f,0.2f);
    glVertex2f(-0.355f,-0.57f);

    glEnd();


    // stand ends

    // box

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(-0.455f,0.2f);
    glVertex2f(-0.195f,0.2f);

    glVertex2f(-0.195f,0.2f);
    glVertex2f(-0.195f,0.8f);

    glVertex2f(-0.195f,0.8f);
    glVertex2f(-0.455f,0.8f);

    glVertex2f(-0.455f,0.8f);
    glVertex2f(-0.195f,0.2f);

    glEnd();

    //egdes

    glBegin(GL_POLYGON);
    glColor3f(0.9f,0.9f,0.9f);

    glVertex2f(-0.455f,0.2f);
    glVertex2f(-0.435f,0.2f);

    glVertex2f(-0.435f,0.2f);
    glVertex2f(-0.435f,0.8f);

    glVertex2f(-0.435f,0.8f);
    glVertex2f(-0.455f,0.8f);

    glVertex2f(-0.455f,0.8f);
    glVertex2f(-0.455f,0.2f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.9f,0.9f,0.9f);

    glVertex2f(-0.195f,0.2f);
    glVertex2f(-0.215f,0.2f);

    glVertex2f(-0.215f,0.2f);
    glVertex2f(-0.215f,0.8f);

    glVertex2f(-0.215f,0.8f);
    glVertex2f(-0.195f,0.8f);

    glVertex2f(-0.195f,0.8f);
    glVertex2f(-0.195f,0.2f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.9f,0.9f,0.9f);

    glVertex2f(-0.455f,0.2f);
    glVertex2f(-0.455f,0.22f);

    glVertex2f(-0.455f,0.22f);
    glVertex2f(-0.195f,0.22f);

    glVertex2f(-0.195f,0.22f);
    glVertex2f(-0.195f,0.2f);

    glVertex2f(-0.195f,0.2f);
    glVertex2f(-0.455f,0.2f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.9f,0.9f,0.9f);

    glVertex2f(-0.455f,0.4f);
    glVertex2f(-0.455f,0.42f);

    glVertex2f(-0.455f,0.42f);
    glVertex2f(-0.195f,0.42f);

    glVertex2f(-0.195f,0.42f);
    glVertex2f(-0.195f,0.4f);

    glVertex2f(-0.195f,0.4f);
    glVertex2f(-0.455f,0.4f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.9f,0.9f,0.9f);

    glVertex2f(-0.455f,0.6f);
    glVertex2f(-0.455f,0.62f);

    glVertex2f(-0.455f,0.62f);
    glVertex2f(-0.195f,0.62f);

    glVertex2f(-0.195f,0.62f);
    glVertex2f(-0.195f,0.6f);

    glVertex2f(-0.195f,0.6f);
    glVertex2f(-0.455f,0.6f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.9f,0.9f,0.9f);

    glVertex2f(-0.455f,0.8f);
    glVertex2f(-0.455f,0.82f);

    glVertex2f(-0.455f,0.82f);
    glVertex2f(-0.195f,0.82f);

    glVertex2f(-0.195f,0.82f);
    glVertex2f(-0.195f,0.8f);

    glVertex2f(-0.195f,0.8f);
    glVertex2f(-0.455f,0.8f);

    glEnd();

    //edges ends

    //green light



    GLfloat x= -0.32f; GLfloat y = 0.3f; GLfloat redius = 0.06f;

    int TriangleAmount = 40;

    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 1.0f, 0.0f);

    glVertex2f(x,y);
    for(int i = 0; i<=TriangleAmount; i++)
    {
        glVertex2f(
                   x +(redius * cos(i* twicePi / TriangleAmount)),
                   y +(redius * sin(i* twicePi / TriangleAmount))

                   );

    }

    glEnd();

    //yellow light


    GLfloat x2= -0.32f; GLfloat y2 = 0.5f; GLfloat redius2 = 0.06f;

    int TriangleAmount2 = 40;

    GLfloat twicePI = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);

    glVertex2f(x2,y2);
    for(int i = 0; i<=TriangleAmount2; i++)
    {
        glVertex2f(
                   x2 +(redius2 * cos(i* twicePi / TriangleAmount2)),
                   y2 +(redius2 * sin(i* twicePi / TriangleAmount2))

                   );

    }

    glEnd();



    GLfloat x3= -0.32f; GLfloat y3 = 0.7f; GLfloat redius3 = 0.06f;

    int TriangleAmount3 = 40;

    GLfloat TwicePI = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);

    glVertex2f(x3,y3);
    for(int i = 0; i<=TriangleAmount3; i++)
    {
        glVertex2f(
                   x3 +(redius3 * cos(i* twicePi / TriangleAmount3)),
                   y3 +(redius3 * sin(i* twicePi / TriangleAmount3))

                   );

    }

    glEnd();
    //traffic light ends


    //right road starts


    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.1f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,-1.0f);

    glVertex2f(0.0f,-1.0f);
    glVertex2f(0.5f,-1.0f);

    glVertex2f(0.5f,-1.0f);
    glVertex2f(0.15f,0.0f);

    glVertex2f(0.15f,0.0f);
    glVertex2f(0.0f,0.0f);

    glEnd();

    //divider


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.5f,-1.0f);
    glVertex2f(0.15f,0.0f);

    glVertex2f(0.15f,0.0f);
    glVertex2f(0.2f,0.0f);

    glVertex2f(0.2f,0.0f);
    glVertex2f(0.55f,-1.0f);

    glVertex2f(0.55f,-1.0f);
    glVertex2f(0.5f,-1.0f);


    glEnd();

    //divider ends


    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.1f);

    glVertex2f(0.2f,0.0f);
    glVertex2f(0.55f,-1.0f);

    glVertex2f(0.55f,-1.0f);
    glVertex2f(1.0f,-1.0f);

    glVertex2f(1.0f,-1.0f);
    glVertex2f(0.45f,0.0f);

    glVertex2f(0.45f,0.0f);
    glVertex2f(0.2f,0.0f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.7f, 0.7f, 0.7f);

    glVertex2f(1.0f,-1.0f);
    glVertex2f(0.45f,0.0f);

    glVertex2f(0.45f,0.0f);
    glVertex2f(0.5f,0.0f);

    glVertex2f(0.5f,0.0f);
    glVertex2f(1.0f,-0.9f);

    glVertex2f(1.0f,-0.9f);
    glVertex2f(1.0f,-1.0f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f);

    glVertex2f(0.5f,0.0f);
    glVertex2f(0.75f,0.0f);

    glVertex2f(0.75f,0.0f);
    glVertex2f(1.0f,-0.55f);

    glVertex2f(1.0f,-0.55f);
    glVertex2f(1.0f,-0.9f);

    glVertex2f(1.0f,-0.9f);
    glVertex2f(0.5f,0.0f);

    glEnd();

    //right road ends


    //building 1

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.2f, 0.7f);

    glVertex2f(0.2f,0.23f);
    glVertex2f(0.44f,0.23f);

    glVertex2f(0.44f,0.23f);
    glVertex2f(0.44f,0.0f);

    glVertex2f(0.44f,0.0f);
    glVertex2f(0.2f,0.0f);

    glVertex2f(0.2f,0.0f);
    glVertex2f(0.2f,0.23f);

    glEnd();

    float a = 0.23f;
    float b = 0.02f;

    for(int i = 0; i<6; i++)
    {
        glBegin(GL_LINES);
        glColor3f(1.0f,1.0f,1.0f);

        glVertex2f(a,b);
        glVertex2f(a+0.18f,b);

        b = b+0.037f;

        glEnd();

    }

    float a1 = 0.23f;
    float b1 = 0.02f;

    for(int i = 0; i<6; i++)
    {
        glBegin(GL_LINES);
        glColor3f(1.0f,1.0f,1.0f);

        glVertex2f(a1,b1);
        glVertex2f(a1,b1+ 0.19f);

        a1 = a1+0.037f;

        glEnd();

    }



    //building 1 ends

    //building 2

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.5f);

    glVertex2f(0.44f,0.0f);
    glVertex2f(0.44f,0.3f);

    glVertex2f(0.44f,0.3f);
    glVertex2f(0.7f,0.3f);

    glVertex2f(0.7f,0.3f);
    glVertex2f(0.7f,0.0f);

    glVertex2f(0.7f,0.0f);
    glVertex2f(0.44f,0.0f);

    glEnd();


    float s = 0.47f;
    float d = 0.05f;

    for(int j =0; j<5 ; j++)
    {
        glBegin(GL_POLYGON);
        glColor3f(1.0f,1.0f,1.0f);

        glVertex2f(s,d);
        glVertex2f(s+0.2f,d);
        glVertex2f(s+0.2f,d+0.02f);
        glVertex2f(s,d+0.02f);

        d = d + 0.05;



        glEnd();

    }


    //building 2 ends

    //building 3

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.4f);

    glVertex2f(0.7f,0.0f);
    glVertex2f(0.7f,0.45f);

    glVertex2f(0.7f,0.45f);
    glVertex2f(0.85f,0.45f);

    glVertex2f(0.85f,0.45f);
    glVertex2f(0.85f,0.0f);

    glVertex2f(0.85f,0.0f);
    glVertex2f(0.7f,0.0f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(0.73f,0.02f);
    glVertex2f(0.73f,0.43f);

    glVertex2f(0.73f,0.43f);
    glVertex2f(0.75f,0.43f);

    glVertex2f(0.75f,0.43f);
    glVertex2f(0.75f,0.02f);

    glVertex2f(0.75f,0.02f);
    glVertex2f(0.73f,0.02f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(0.81f,0.02f);
    glVertex2f(0.81f,0.43f);

    glVertex2f(0.81f,0.43f);
    glVertex2f(0.83f,0.43f);

    glVertex2f(0.83f,0.43f);
    glVertex2f(0.83f,0.02f);

    glVertex2f(0.83f,0.02f);
    glVertex2f(0.81f,0.02f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(0.75f,0.12f);
    glVertex2f(0.75f,0.14f);

    glVertex2f(0.75f,0.14f);
    glVertex2f(0.81f,0.14f);

    glVertex2f(0.81f,0.14f);
    glVertex2f(0.81f,0.12f);

    glVertex2f(0.81f,0.12f);
    glVertex2f(0.75f,0.12f);

    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(0.75f,0.24f);
    glVertex2f(0.75f,0.26f);

    glVertex2f(0.75f,0.26f);
    glVertex2f(0.81f,0.26f);

    glVertex2f(0.81f,0.26f);
    glVertex2f(0.81f,0.24f);

    glVertex2f(0.81f,0.24f);
    glVertex2f(0.75f,0.24f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(0.75f,0.36f);
    glVertex2f(0.75f,0.38f);

    glVertex2f(0.75f,0.38f);
    glVertex2f(0.81f,0.38f);

    glVertex2f(0.81f,0.38f);
    glVertex2f(0.81f,0.36f);

    glVertex2f(0.81f,0.36f);
    glVertex2f(0.75f,0.36f);

    glEnd();


    //building 3 ends


    //building 4

    glBegin(GL_POLYGON);
    glColor4f(0.5f, 0.4f, 0.8f, 0.1f);

    glVertex2f(0.85f,0.0f);
    glVertex2f(1.0f,0.0f);

    glVertex2f(1.0f,0.0f);
    glVertex2f(1.0f,0.8f);

    glVertex2f(1.0f,0.8f);
    glVertex2f(0.85f,0.8f);

    glVertex2f(0.85f,0.8f);
    glVertex2f(0.85f,0.0f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(0.91f,0.07f);
    glVertex2f(1.0f,0.07f);

    glVertex2f(1.0f,0.07f);
    glVertex2f(1.0f,0.15f);

    glVertex2f(1.0f,0.15f);
    glVertex2f(0.91f,0.15f);

    glVertex2f(0.91f,0.15f);
    glVertex2f(0.91f,0.07f);

    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(0.91f,0.27f);
    glVertex2f(1.0f,0.27f);

    glVertex2f(1.0f,0.27f);
    glVertex2f(1.0f,0.35f);

    glVertex2f(1.0f,0.35f);
    glVertex2f(0.91f,0.35f);

    glVertex2f(0.91f,0.35f);
    glVertex2f(0.91f,0.27f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(0.91f,0.47f);
    glVertex2f(1.0f,0.47f);

    glVertex2f(1.0f,0.47f);
    glVertex2f(1.0f,0.55f);

    glVertex2f(1.0f,0.55f);
    glVertex2f(0.91f,0.55f);

    glVertex2f(0.91f,0.55f);
    glVertex2f(0.91f,0.47f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(0.91f,0.67f);
    glVertex2f(1.0f,0.67f);

    glVertex2f(1.0f,0.67f);
    glVertex2f(1.0f,0.75f);

    glVertex2f(1.0f,0.75f);
    glVertex2f(0.91f,0.75f);

    glVertex2f(0.91f,0.75f);
    glVertex2f(0.91f,0.67f);

    glEnd();


    //building 4 ends



    glFlush();

}


 int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Scenario-2");
    glutInitWindowSize(720, 720);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
