#include <windows.h>
#include <GL/glut.h>
#include <math.h>


void display()
{

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(5);


	//left building 1st


	glBegin(GL_POLYGON);
	glColor3f(0.5f,0.2f,0.0f);

	glVertex2f(-1.0f,-0.2f);
	glVertex2f(-0.8f,-0.2f);

	glVertex2f(-0.8f,-0.2f);
	glVertex2f(-0.8f,-1.0f);

	glVertex2f(-0.8f,-1.0f);
	glVertex2f(-1.0f,-1.0f);

	glVertex2f(-1.0f,-1.0f);
    glVertex2f(-1.0f,-0.2f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(-1.0f,-0.26f);
    glVertex2f(-0.84f,-0.26f);

    glVertex2f(-0.84f,-0.26f);
    glVertex2f(-0.84f,-0.3f);

    glVertex2f(-0.84f,-0.3f);
    glVertex2f(-1.0f,-0.3f);

    glVertex2f(-1.0f,-0.3f);
    glVertex2f(-1.0f,-0.26f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(-1.0f,-0.35f);
    glVertex2f(-0.84f,-0.35f);

    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.84f,-0.39f);

    glVertex2f(-0.84f,-0.39f);
    glVertex2f(-1.0f,-0.39f);

    glVertex2f(-1.0f,-0.39f);
    glVertex2f(-1.0f,-0.35f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(-1.0f,-0.44f);
    glVertex2f(-0.84f,-0.44f);

    glVertex2f(-0.84f,-0.44f);
    glVertex2f(-0.84f,-0.48f);

    glVertex2f(-0.84f,-0.48f);
    glVertex2f(-1.0f,-0.48f);

    glVertex2f(-1.0f,-0.48f);
    glVertex2f(-1.0f,-0.44f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(-1.0f,-0.53f);
    glVertex2f(-0.84f,-0.53f);

    glVertex2f(-0.84f,-0.53f);
    glVertex2f(-0.84f,-0.57f);

    glVertex2f(-0.84f,-0.57f);
    glVertex2f(-1.0f,-0.57f);

    glVertex2f(-1.0f,-0.57f);
    glVertex2f(-1.0f,-0.53f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(-1.0f,-0.62f);
    glVertex2f(-0.84f,-0.62f);

    glVertex2f(-0.84f,-0.62f);
    glVertex2f(-0.84f,-0.66f);

    glVertex2f(-0.84f,-0.66f);
    glVertex2f(-1.0f,-0.66f);

    glVertex2f(-1.0f,-0.66f);
    glVertex2f(-1.0f,-0.62f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(-1.0f,-0.71f);
    glVertex2f(-0.84f,-0.71f);

    glVertex2f(-0.84f,-0.71f);
    glVertex2f(-0.84f,-0.75f);

    glVertex2f(-0.84f,-0.75f);
    glVertex2f(-1.0f,-0.75f);

    glVertex2f(-1.0f,-0.75f);
    glVertex2f(-1.0f,-0.71f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(-1.0f,-0.8f);
    glVertex2f(-0.84f,-0.8f);

    glVertex2f(-0.84f,-0.8f);
    glVertex2f(-0.84f,-0.84f);

    glVertex2f(-0.84f,-0.84f);
    glVertex2f(-1.0f,-0.84f);

    glVertex2f(-1.0f,-0.84f);
    glVertex2f(-1.0f,-0.8f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(-1.0f,-0.89f);
    glVertex2f(-0.84f,-0.89f);

    glVertex2f(-0.84f,-0.89f);
    glVertex2f(-0.84f,-0.93f);

    glVertex2f(-0.84f,-0.93f);
    glVertex2f(-1.0f,-0.93f);

    glVertex2f(-1.0f,-0.93f);
    glVertex2f(-1.0f,-0.89f);

    glEnd();

    //building 1 ends


    //building 2 starts

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.7f,0.0f);

    glVertex2f(-0.78f,-0.5f);
    glVertex2f(-0.5f,-0.5f);

    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.5f,-1.0f);

    glVertex2f(-0.5f,-1.0f);
    glVertex2f(-0.78f,-1.0f);

    glVertex2f(-0.78f,-1.0f);
    glVertex2f(-0.78f,-0.5f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.7f,0.0f);

    glVertex2f(-0.78f,-0.5f);
    glVertex2f(-0.5f,-0.5f);

    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.5f,-0.4f);

    glVertex2f(-0.5f,-0.4f);
    glVertex2f(-0.6f,-0.4f);

    glVertex2f(-0.6f,-0.4f);
    glVertex2f(-0.78f,-0.5f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(-0.52f,-0.53f);
    glVertex2f(-0.75f,-0.53f);

    glVertex2f(-0.75f,-0.53f);
    glVertex2f(-0.75f,-1.0f);

    glVertex2f(-0.75f,-1.0f);
    glVertex2f(-0.52f,-1.0f);

    glVertex2f(-0.52f,-1.0f);
    glVertex2f(-0.52f,-0.53f);


    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);

    glVertex2f(-0.71f,-0.53f);
    glVertex2f(-0.71f,-1.0f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);

    glVertex2f(-0.66f,-0.53f);
    glVertex2f(-0.66f,-1.0f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);

    glVertex2f(-0.61f,-0.53f);
    glVertex2f(-0.61f,-1.0f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);

    glVertex2f(-0.56f,-0.53f);
    glVertex2f(-0.56f,-1.0f);

    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);

    glVertex2f(-0.75f,-0.63f);
    glVertex2f(-0.52f,-0.63f);

    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);

    glVertex2f(-0.75f,-0.73f);
    glVertex2f(-0.52f,-0.73f);

    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);

    glVertex2f(-0.75f,-0.83f);
    glVertex2f(-0.52f,-0.83f);

    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);

    glVertex2f(-0.75f,-0.93f);
    glVertex2f(-0.52f,-0.93f);

    glEnd();


    // 2nd building done


    //3rd building starts


    glBegin(GL_POLYGON);
    glColor3ub(75,0,130);

    glVertex2f(-0.5f,0.0f);
    glVertex2f(-0.25f,0.0f);

    glVertex2f(-0.25f,0.0f);
    glVertex2f(-0.25f,-1.0f);

    glVertex2f(-0.25f,-1.0f);
    glVertex2f(-0.5f,-1.0f);

    glVertex2f(-0.5f,-1.0f);
    glVertex2f(-0.5f,0.0f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(-0.47f,-0.1f);
    glVertex2f(-0.44f,-0.1f);

    glVertex2f(-0.44f,-0.1f);
    glVertex2f(-0.44f,-1.0f);

    glVertex2f(-0.44f,-1.0f);
    glVertex2f(-0.47f,-1.0f);

    glVertex2f(-0.47f,-1.0f);
    glVertex2f(-0.47f,-0.1f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(-0.39f,-0.1f);
    glVertex2f(-0.36f,-0.1f);

    glVertex2f(-0.36f,-0.1f);
    glVertex2f(-0.36f,-1.0f);

    glVertex2f(-0.36f,-1.0f);
    glVertex2f(-0.39f,-1.0f);

    glVertex2f(-0.39f,-1.0f);
    glVertex2f(-0.39f,-0.1f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(-0.31f,-0.1f);
    glVertex2f(-0.28f,-0.1f);

    glVertex2f(-0.28f,-0.1f);
    glVertex2f(-0.28f,-1.0f);

    glVertex2f(-0.28f,-1.0f);
    glVertex2f(-0.31f,-1.0f);

    glVertex2f(-0.31f,-1.0f);
    glVertex2f(-0.31f,-0.1f);

    glEnd();

    // building 3 done


    //building 4 starts


    glBegin(GL_POLYGON);
    glColor3ub(139,0,0);

    glVertex2f(-0.1f,0.2f);
    glVertex2f(0.2f,0.2f);

    glVertex2f(0.2f,0.2f);
    glVertex2f(0.2f,-1.0f);

    glVertex2f(0.2f,-1.0f);
    glVertex2f(-0.1f,-1.0f);

    glVertex2f(-0.1f,-1.0f);
    glVertex2f(-0.1f,0.2f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);


    glVertex2f(-0.08f,0.15f);
    glVertex2f(0.04f,0.15f);

    glVertex2f(0.04f,0.15f);
    glVertex2f(0.04f,-0.1f);

    glVertex2f(0.04f,-0.1f);
    glVertex2f(-0.08f,-0.1f);

    glVertex2f(-0.08f,-0.1f);
    glVertex2f(-0.08f,0.15f);

    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);


    glVertex2f(0.06f,0.15f);
    glVertex2f(0.18f,0.15f);

    glVertex2f(0.18f,0.15f);
    glVertex2f(0.18f,-0.1f);

    glVertex2f(0.18f,-0.1f);
    glVertex2f(0.06f,-0.1f);

    glVertex2f(0.06f,-0.1f);
    glVertex2f(0.06f,0.15f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);


    glVertex2f(-0.08f,-0.15f);
    glVertex2f(0.04f,-0.15f);

    glVertex2f(0.04f,-0.15f);
    glVertex2f(0.04f,-0.35f);

    glVertex2f(0.04f,-0.35f);
    glVertex2f(-0.08f,-0.35f);

    glVertex2f(-0.08f,-0.35f);
    glVertex2f(-0.08f,-0.15f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);


    glVertex2f(0.06f,-0.15f);
    glVertex2f(0.18f,-0.15f);

    glVertex2f(0.18f,-0.15f);
    glVertex2f(0.18f,-0.35f);

    glVertex2f(0.18f,-0.35f);
    glVertex2f(0.06f,-0.35f);

    glVertex2f(0.06f,-0.35f);
    glVertex2f(0.06f,-0.15f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);


    glVertex2f(-0.08f,-0.4f);
    glVertex2f(0.04f,-0.4f);

    glVertex2f(0.04f,-0.4f);
    glVertex2f(0.04f,-0.6f);

    glVertex2f(0.04f,-0.6f);
    glVertex2f(-0.08f,-0.6f);

    glVertex2f(-0.08f,-0.6f);
    glVertex2f(-0.08f,-0.4f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);


    glVertex2f(0.06f,-0.4f);
    glVertex2f(0.18f,-0.4f);

    glVertex2f(0.18f,-0.4f);
    glVertex2f(0.18f,-0.6f);

    glVertex2f(0.18f,-0.6f);
    glVertex2f(0.06f,-0.6f);

    glVertex2f(0.06f,-0.6f);
    glVertex2f(0.06f,-0.4f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);


    glVertex2f(-0.08f,-0.65f);
    glVertex2f(0.04f,-0.65f);

    glVertex2f(0.04f,-0.65f);
    glVertex2f(0.04f,-0.85f);

    glVertex2f(0.04f,-0.85f);
    glVertex2f(-0.08f,-0.85f);

    glVertex2f(-0.08f,-0.85f);
    glVertex2f(-0.08f,-0.65f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);


    glVertex2f(0.06f,-0.65f);
    glVertex2f(0.18f,-0.65f);

    glVertex2f(0.18f,-0.65f);
    glVertex2f(0.18f,-0.85f);

    glVertex2f(0.18f,-0.85f);
    glVertex2f(0.06f,-0.85f);

    glVertex2f(0.06f,-0.85f);
    glVertex2f(0.06f,-0.65f);

    glEnd();

    //4th building done


    //5th building

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);

    glVertex2f(0.2f,-0.1f);
    glVertex2f(0.3f,-0.15f);

    glVertex2f(0.3f,-0.15f);
    glVertex2f(0.3f,-1.0f);

    glVertex2f(0.3f,-1.0f);
    glVertex2f(0.2f,-1.0f);

    glVertex2f(0.2f,-1.0f);
    glVertex2f(0.2f,-0.1f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(0.22f,-0.15f);
    glVertex2f(0.28f,-0.16f);

    glVertex2f(0.28f,-0.16f);
    glVertex2f(0.28f,-0.255f);

    glVertex2f(0.28f,-0.255f);
    glVertex2f(0.22f,-0.25f);

    glVertex2f(0.22f,-0.25f);
    glVertex2f(0.22f,-0.15f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(0.22f,-0.28f);
    glVertex2f(0.28f,-0.29f);

    glVertex2f(0.28f,-0.29f);
    glVertex2f(0.28f,-0.385f);

    glVertex2f(0.28f,-0.385f);
    glVertex2f(0.22f,-0.38f);

    glVertex2f(0.22f,-0.38f);
    glVertex2f(0.22f,-0.28f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(0.22f,-0.41f);
    glVertex2f(0.28f,-0.42f);

    glVertex2f(0.28f,-0.42f);
    glVertex2f(0.28f,-0.515f);

    glVertex2f(0.28f,-0.515f);
    glVertex2f(0.22f,-0.51f);

    glVertex2f(0.22f,-0.51f);
    glVertex2f(0.22f,-0.41f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(0.22f,-0.54f);
    glVertex2f(0.28f,-0.55f);

    glVertex2f(0.28f,-0.55f);
    glVertex2f(0.28f,-0.645f);

    glVertex2f(0.28f,-0.645f);
    glVertex2f(0.22f,-0.64f);

    glVertex2f(0.22f,-0.64f);
    glVertex2f(0.22f,-0.54f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(0.22f,-0.67f);
    glVertex2f(0.28f,-0.68f);

    glVertex2f(0.28f,-0.68f);
    glVertex2f(0.28f,-0.775f);

    glVertex2f(0.28f,-0.775f);
    glVertex2f(0.22f,-0.77f);

    glVertex2f(0.22f,-0.77f);
    glVertex2f(0.22f,-0.67f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(0.22f,-0.8f);
    glVertex2f(0.28f,-0.81f);

    glVertex2f(0.28f,-0.81f);
    glVertex2f(0.28f,-0.905f);

    glVertex2f(0.28f,-0.905f);
    glVertex2f(0.22f,-0.9f);

    glVertex2f(0.22f,-0.9f);
    glVertex2f(0.22f,-0.8f);

    glEnd();


    //building 5 ends



    //building 6 starts


     glBegin(GL_POLYGON);
    glColor3ub(139,0,139);

    glVertex2f(0.55f,-0.1f);
    glVertex2f(0.75f,-0.1f);

    glVertex2f(0.75f,-0.1f);
    glVertex2f(0.75f,-1.0f);

    glVertex2f(0.75f,-1.0f);
    glVertex2f(0.55f,-1.0f);

    glVertex2f(0.55f,-1.0f);
    glVertex2f(0.55f,-0.1f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(139,0,139);

    glVertex2f(0.6f,-0.1f);
    glVertex2f(0.7f,-0.1f);

    glVertex2f(0.7f,-0.1f);
    glVertex2f(0.7f,0.1f);

    glVertex2f(0.7f,0.1f);
    glVertex2f(0.6f,0.1f);

    glVertex2f(0.6f,0.1f);
    glVertex2f(0.6f,-0.1f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(139,0,139);

    glVertex2f(0.64f,0.1f);
    glVertex2f(0.66f,0.1f);

    glVertex2f(0.66f,0.1f);
    glVertex2f(0.65f,0.4f);

    glVertex2f(0.65f,0.4f);
    glVertex2f(0.64f,0.1f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,240);

    glVertex2f(0.68f,-0.15f);
    glVertex2f(0.71,-0.15f);

    glVertex2f(0.71,-0.15f);
    glVertex2f(0.71,-0.35f);

    glVertex2f(0.71,-0.35f);
    glVertex2f(0.68f,-0.35f);

    glVertex2f(0.68f,-0.35f);
    glVertex2f(0.68f,-0.15f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,240);

    glVertex2f(0.68f,-0.4f);
    glVertex2f(0.71,-0.4f);

    glVertex2f(0.71,-0.4f);
    glVertex2f(0.71,-0.6f);

    glVertex2f(0.71,-0.6f);
    glVertex2f(0.68f,-0.6f);

    glVertex2f(0.68f,-0.6f);
    glVertex2f(0.68f,-0.4f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,240);

    glVertex2f(0.68f,-0.65f);
    glVertex2f(0.71,-0.65f);

    glVertex2f(0.71,-0.65f);
    glVertex2f(0.71,-0.85f);

    glVertex2f(0.71,-0.85f);
    glVertex2f(0.68f,-0.85f);

    glVertex2f(0.68f,-0.85f);
    glVertex2f(0.68f,-0.65f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,240);

    glVertex2f(0.68f,-0.9f);
    glVertex2f(0.71,-0.9f);

    glVertex2f(0.71,-0.9f);
    glVertex2f(0.71,-1.0f);

    glVertex2f(0.71,-1.0f);
    glVertex2f(0.68f,-1.0f);

    glVertex2f(0.68f,-1.0f);
    glVertex2f(0.68f,-0.9f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,240);

    glVertex2f(0.58f,-0.15f);
    glVertex2f(0.61,-0.15f);

    glVertex2f(0.61,-0.15f);
    glVertex2f(0.61,-0.35f);

    glVertex2f(0.61,-0.35f);
    glVertex2f(0.58f,-0.35f);

    glVertex2f(0.58f,-0.35f);
    glVertex2f(0.58f,-0.15f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,240);

    glVertex2f(0.58f,-0.4f);
    glVertex2f(0.61,-0.4f);

    glVertex2f(0.61,-0.4f);
    glVertex2f(0.61,-0.6f);

    glVertex2f(0.61,-0.6f);
    glVertex2f(0.58f,-0.6f);

    glVertex2f(0.58f,-0.6f);
    glVertex2f(0.58f,-0.4f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,240);

    glVertex2f(0.58f,-0.65f);
    glVertex2f(0.61,-0.65f);

    glVertex2f(0.61,-0.65f);
    glVertex2f(0.61,-0.85f);

    glVertex2f(0.61,-0.85f);
    glVertex2f(0.58f,-0.85f);

    glVertex2f(0.58f,-0.85f);
    glVertex2f(0.58f,-0.65f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,240);

    glVertex2f(0.58f,-0.9f);
    glVertex2f(0.61,-0.9f);

    glVertex2f(0.61,-0.9f);
    glVertex2f(0.61,-1.0f);

    glVertex2f(0.61,-1.0f);
    glVertex2f(0.58f,-1.0f);

    glVertex2f(0.58f,-1.0f);
    glVertex2f(0.58f,-0.9f);

    glEnd();


    //building 6 done



    //building 7 starts

glBegin(GL_POLYGON);
    glColor3ub(0,0,139);

    glVertex2f(0.4f,-0.3f);
    glVertex2f(0.6f,-0.3f);

    glVertex2f(0.6f,-0.3f);
    glVertex2f(0.6f,-1.0f);

    glVertex2f(0.6f,-1.0f);
    glVertex2f(0.4f,-1.0f);

    glVertex2f(0.4f,-1.0f);
    glVertex2f(0.4f,-0.3f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    glVertex2f(0.42f,-0.33f);
    glVertex2f(0.58f,-0.33f);

    glVertex2f(0.58f,-0.33f);
    glVertex2f(0.58f,-0.38f);

    glVertex2f(0.58f,-0.38f);
    glVertex2f(0.42f,-0.38f);

    glVertex2f(0.42f,-0.38f);
    glVertex2f(0.42f,-0.33f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    glVertex2f(0.42f,-0.43f);
    glVertex2f(0.58f,-0.43f);

    glVertex2f(0.58f,-0.43f);
    glVertex2f(0.58f,-0.48f);

    glVertex2f(0.58f,-0.48f);
    glVertex2f(0.42f,-0.48f);

    glVertex2f(0.42f,-0.48f);
    glVertex2f(0.42f,-0.43f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    glVertex2f(0.42f,-0.53f);
    glVertex2f(0.58f,-0.53f);

    glVertex2f(0.58f,-0.53f);
    glVertex2f(0.58f,-0.58f);

    glVertex2f(0.58f,-0.58f);
    glVertex2f(0.42f,-0.58f);

    glVertex2f(0.42f,-0.58f);
    glVertex2f(0.42f,-0.53f);

    glEnd();




    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    glVertex2f(0.42f,-0.63f);
    glVertex2f(0.58f,-0.63f);

    glVertex2f(0.58f,-0.63f);
    glVertex2f(0.58f,-0.68f);

    glVertex2f(0.58f,-0.68f);
    glVertex2f(0.42f,-0.68f);

    glVertex2f(0.42f,-0.68f);
    glVertex2f(0.42f,-0.63f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    glVertex2f(0.42f,-0.73f);
    glVertex2f(0.58f,-0.73f);

    glVertex2f(0.58f,-0.73f);
    glVertex2f(0.58f,-0.78f);

    glVertex2f(0.58f,-0.78f);
    glVertex2f(0.42f,-0.78f);

    glVertex2f(0.42f,-0.78f);
    glVertex2f(0.42f,-0.73f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    glVertex2f(0.42f,-0.83f);
    glVertex2f(0.58f,-0.83f);

    glVertex2f(0.58f,-0.83f);
    glVertex2f(0.58f,-0.88f);

    glVertex2f(0.58f,-0.88f);
    glVertex2f(0.42f,-0.88f);

    glVertex2f(0.42f,-0.88f);
    glVertex2f(0.42f,-0.83f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    glVertex2f(0.42f,-0.93f);
    glVertex2f(0.58f,-0.93f);

    glVertex2f(0.58f,-0.93f);
    glVertex2f(0.58f,-0.98f);

    glVertex2f(0.58f,-0.98f);
    glVertex2f(0.42f,-0.98f);

    glVertex2f(0.42f,-0.98f);
    glVertex2f(0.42f,-0.93f);

    glEnd();



    //building 7 done



    // building 8 starts



    glBegin(GL_POLYGON);
    glColor3ub(0,139,0);

    glVertex2f(0.8f,0.2f);
    glVertex2f(0.95f,0.2f);

    glVertex2f(0.95f,0.2f);
    glVertex2f(0.95f,-1.0f);

    glVertex2f(0.95f,-1.0f);
    glVertex2f(0.8f,-1.0f);

    glVertex2f(0.8f,-1.0f);
    glVertex2f(0.8f,0.2f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1,1,1);

    glVertex2f(0.82f,0.15f);
    glVertex2f(0.93f,0.15f);

    glVertex2f(0.93f,0.15f);
    glVertex2f(0.93f,-1.0f);

    glVertex2f(0.93f,-1.0f);
    glVertex2f(0.82f,-1.0f);

    glVertex2f(0.82f,-1.0f);
    glVertex2f(0.82f,0.15f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,139,0);

    glVertex2f(0.845f,0.15f);
    glVertex2f(0.845f,-1.0f);

    glEnd();

     glBegin(GL_LINES);
    glColor3ub(0,139,0);

    glVertex2f(0.87f,0.15f);
    glVertex2f(0.87f,-1.0f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,139,0);

    glVertex2f(0.90f,0.15f);
    glVertex2f(0.90f,-1.0f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,139,0);

    glVertex2f(0.82f,0.1f);
    glVertex2f(0.93f,0.1f);

    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,139,0);

    glVertex2f(0.82f,0.0f);
    glVertex2f(0.93f,0.0f);

    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,139,0);

    glVertex2f(0.82f,-0.1f);
    glVertex2f(0.93f,-0.1f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,139,0);

    glVertex2f(0.82f,-0.2f);
    glVertex2f(0.93f,-0.2f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,139,0);

    glVertex2f(0.82f,-0.3f);
    glVertex2f(0.93f,-0.3f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,139,0);

    glVertex2f(0.82f,-0.4f);
    glVertex2f(0.93f,-0.4f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,139,0);

    glVertex2f(0.82f,-0.5f);
    glVertex2f(0.93f,-0.5f);

    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);

    glVertex2f(0.82f,-0.6f);
    glVertex2f(0.93f,-0.6f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,139,0);

    glVertex2f(0.82f,-0.7f);
    glVertex2f(0.93f,-0.7f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,139,0);

    glVertex2f(0.82f,-0.8f);
    glVertex2f(0.93f,-0.8f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,139,0);

    glVertex2f(0.82f,-0.9f);
    glVertex2f(0.93f,-0.9f);

    glEnd();


    //building 8 done..................................










    glFlush();

}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Project");
	glutInitWindowSize(720, 720);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
