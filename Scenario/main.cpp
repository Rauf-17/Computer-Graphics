 #include <windows.h>
 #include <GL/glut.h>

 void display()
 {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(4);

    //Sky Starts

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.7f, 1.0f);

    glVertex2f(-1.0,1.0);
    glVertex2f(1.0,1.0);

    glVertex2f(1.0,1.0);
    glVertex2f(1.0,0.0);

    glVertex2f(1.0,0.0);
    glVertex2f(-1.0,0.0);

    glVertex2f(-1.0,0.0);
    glVertex2f(-1.0,1.0);

    glEnd();


    //Sky Ends


    //Building


    //Floors starts


    glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);

    glVertex2f(-0.8,0);
    glVertex2f(-0.1,0);

    glVertex2f(-0.1,0);
    glVertex2f(-0.1,0.2);

    glVertex2f(-0.1,0.2);
    glVertex2f(-0.8,0.2);

    glVertex2f(-0.8,0.2);
    glVertex2f(-0.8,0);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(-0.8,0.2);
    glVertex2f(-0.1,0.2);

    glEnd();


    glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);

    glVertex2f(-0.8,0.2);
    glVertex2f(-0.1,0.2);

    glVertex2f(-0.1,0.2);
    glVertex2f(-0.1,0.4);

    glVertex2f(-0.1,0.4);
    glVertex2f(-0.8,0.4);

    glVertex2f(-0.8,0.4);
    glVertex2f(-0.8,0.2);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(-0.8,0.4);
    glVertex2f(-0.1,0.4);

    glEnd();


    glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);

    glVertex2f(-0.8,0.4);
    glVertex2f(-0.1,0.4);

    glVertex2f(-0.1,0.4);
    glVertex2f(-0.1,0.6);

    glVertex2f(-0.1,0.6);
    glVertex2f(-0.8,0.6);

    glVertex2f(-0.8,0.6);
    glVertex2f(-0.8,0.4);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(-0.8,0.6);
    glVertex2f(-0.1,0.6);

    glEnd();


    glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);

    glVertex2f(-0.8,0.6);
    glVertex2f(-0.1,0.6);

    glVertex2f(-0.1,0.6);
    glVertex2f(-0.1,0.8);

    glVertex2f(-0.1,0.8);
    glVertex2f(-0.8,0.8);

    glVertex2f(-0.8,0.8);
    glVertex2f(-0.8,0.6);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(-0.8,0.8);
    glVertex2f(-0.1,0.8);

    glEnd();


    glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);

    glVertex2f(-0.8,0.8);
    glVertex2f(-0.1,0.8);

    glVertex2f(-0.1,0.8);
    glVertex2f(-0.1,1.0);

    glVertex2f(-0.1,1.0);
    glVertex2f(-0.8,1.0);

    glVertex2f(-0.8,1.0);
    glVertex2f(-0.8,0.8);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(-0.8,1.0);
    glVertex2f(-0.1,1.0);

    glEnd();

    //Floors Ends


    //Door Starts

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.0f);

    glVertex2f(-0.5,0);
    glVertex2f(-0.4,0);

    glVertex2f(-0.4,0);
    glVertex2f(-0.4,0.13);

    glVertex2f(-0.4,0.13);
    glVertex2f(-0.5,0.13);

    glVertex2f(-0.5,0.13);
    glVertex2f(-0.5,0);

    glEnd();

    //Door Ends


    //Windows Starts

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.0f);

    glVertex2f(-0.75,0.25);
    glVertex2f(-0.65,0.25);

    glVertex2f(-0.65,0.25);
    glVertex2f(-0.65,0.35);

    glVertex2f(-0.65,0.35);
    glVertex2f(-0.75,0.35);

    glVertex2f(-0.75,0.35);
    glVertex2f(-0.75,0.25);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.0f);

    glVertex2f(-0.25,0.25);
    glVertex2f(-0.15,0.25);

    glVertex2f(-0.15,0.25);
    glVertex2f(-0.15,0.35);

    glVertex2f(-0.15,0.35);
    glVertex2f(-0.25,0.35);

    glVertex2f(-0.25,0.35);
    glVertex2f(-0.25,0.25);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.0f);

    glVertex2f(-0.75,0.45);
    glVertex2f(-0.65,0.45);

    glVertex2f(-0.65,0.45);
    glVertex2f(-0.65,0.55);

    glVertex2f(-0.65,0.55);
    glVertex2f(-0.75,0.55);

    glVertex2f(-0.75,0.55);
    glVertex2f(-0.75,0.45);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.0f);

    glVertex2f(-0.25,0.45);
    glVertex2f(-0.15,0.45);

    glVertex2f(-0.15,0.45);
    glVertex2f(-0.15,0.55);

    glVertex2f(-0.15,0.55);
    glVertex2f(-0.25,0.55);

    glVertex2f(-0.25,0.55);
    glVertex2f(-0.25,0.45);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.0f);

    glVertex2f(-0.75,0.65);
    glVertex2f(-0.65,0.65);

    glVertex2f(-0.65,0.65);
    glVertex2f(-0.65,0.75);

    glVertex2f(-0.65,0.75);
    glVertex2f(-0.75,0.75);

    glVertex2f(-0.75,0.75);
    glVertex2f(-0.75,0.65);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.0f);

    glVertex2f(-0.25,0.65);
    glVertex2f(-0.15,0.65);

    glVertex2f(-0.15,0.65);
    glVertex2f(-0.15,0.75);

    glVertex2f(-0.15,0.75);
    glVertex2f(-0.25,0.75);

    glVertex2f(-0.25,0.75);
    glVertex2f(-0.25,0.65);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.0f);

    glVertex2f(-0.75,0.85);
    glVertex2f(-0.65,0.85);

    glVertex2f(-0.65,0.85);
    glVertex2f(-0.65,0.95);

    glVertex2f(-0.65,0.95);
    glVertex2f(-0.75,0.95);

    glVertex2f(-0.75,0.95);
    glVertex2f(-0.75,0.85);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.0f);

    glVertex2f(-0.25,0.85);
    glVertex2f(-0.15,0.85);

    glVertex2f(-0.15,0.85);
    glVertex2f(-0.15,0.95);

    glVertex2f(-0.15,0.95);
    glVertex2f(-0.25,0.95);

    glVertex2f(-0.25,0.95);
    glVertex2f(-0.25,0.85);

    glEnd();

    //Windows Ends


    //Building Ends


    //Tree Starts

    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.0f, 0.0f);

    glVertex2f(0.51,0.0);
    glVertex2f(0.59,0.0);

    glVertex2f(0.59,0.0);
    glVertex2f(0.59,0.25);

    glVertex2f(0.59,0.25);
    glVertex2f(0.51,0.25);

    glVertex2f(0.51,0.25);
    glVertex2f(0.51,0.0);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.9f, 0.0f);

    glVertex2f(0.4,0.25);
    glVertex2f(0.7,0.25);

    glVertex2f(0.7,0.25);
    glVertex2f(0.65,0.35);

    glVertex2f(0.65,0.35);
    glVertex2f(0.45,0.35);

    glVertex2f(0.45,0.35);
    glVertex2f(0.4,0.25);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.6,0.0);

    glVertex2f(0.4,0.25);
    glVertex2f(0.7,0.25);

    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.9f, 0.0f);

    glVertex2f(0.35,0.35);
    glVertex2f(0.75,0.35);

    glVertex2f(0.75,0.35);
    glVertex2f(0.7,0.5);

    glVertex2f(0.7,0.5);
    glVertex2f(0.4,0.5);

    glVertex2f(0.4,0.5);
    glVertex2f(0.35,0.35);

    glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0,0.6,0.0);

    glVertex2f(0.35,0.35);
    glVertex2f(0.75,0.35);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.9f, 0.0f);

    glVertex2f(0.3,0.5);
    glVertex2f(0.8,0.5);

    glVertex2f(0.8,0.5);
    glVertex2f(0.55,0.65);

    glVertex2f(0.55,0.65);
    glVertex2f(0.3,0.5);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.6,0.0);

    glVertex2f(0.3,0.5);
    glVertex2f(0.8,0.5);

    glEnd();



    //Tree Ends


    //Road Starts


    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.1f);

    glVertex2f(-1.0,0.0);
    glVertex2f(1.0,0.0);

    glVertex2f(1.0,0.0);
    glVertex2f(1.0,-0.3);

    glVertex2f(1.0,-0.3);
    glVertex2f(-1.0,-0.3);

    glVertex2f(-1.0,-0.3);
    glVertex2f(-1.0,0.0);

    glEnd();


    glBegin(GL_POLYGON);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);

    glVertex2f(-1.0,-0.12);
    glVertex2f(-1.0,-0.18);

    glVertex2f(-1.0,-0.18);
    glVertex2f(1.0,-0.18);

    glVertex2f(1.0,-0.18);
    glVertex2f(1.0,-0.12);

    glVertex2f(1.0,-0.12);
    glVertex2f(-1.0,-0.12);

    glEnd();


    //Roads Ends

    //Grass Starts

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);

    glVertex2f(-1.0,-0.3);
    glVertex2f(1.0,-0.3);

    glVertex2f(1.0,-0.3);
    glVertex2f(1.0,-1.0);

    glVertex2f(1.0,-1.0);
    glVertex2f(-1.0,-1.0);

    glVertex2f(-1.0,-1.0);
    glVertex2f(-1.0,-0.3);

    glEnd();


    //Grass Ends


    //Bench Starts


    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.0f, 0.0f);

    glVertex2f(-0.4,-0.35);
    glVertex2f(0.4,-0.35);

    glVertex2f(0.4,-0.35);
    glVertex2f(0.4,-0.55);

    glVertex2f(0.4,-0.55);
    glVertex2f(-0.4,-0.55);

    glVertex2f(-0.4,-0.55);
    glVertex2f(-0.4,-0.35);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(-0.4,-0.55);
    glVertex2f(0.4,-0.55);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.3f, 0.0f, 0.0f);

    glVertex2f(-0.4,-0.55);
    glVertex2f(0.4,-0.55);

    glVertex2f(0.4,-0.55);
    glVertex2f(0.43,-0.67);

    glVertex2f(0.43,-0.67);
    glVertex2f(-0.43,-0.67);

    glVertex2f(-0.43,-0.67);
    glVertex2f(-0.4,-0.55);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);


    glVertex2f(-0.43,-0.67);
    glVertex2f(0.43,-0.67);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.0f, 0.0f);

    glVertex2f(0.43,-0.67);
    glVertex2f(-0.43,-0.67);

    glVertex2f(-0.43,-0.67);
    glVertex2f(-0.4,-0.7);

    glVertex2f(-0.4,-0.7);
    glVertex2f(0.4,-0.7);

    glVertex2f(0.4,-0.7);
    glVertex2f(0.43,-0.67);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.0f, 0.0f);

    glVertex2f(-0.25,-0.7);
    glVertex2f(-0.3,-0.7);

    glVertex2f(-0.3,-0.7);
    glVertex2f(-0.3,-0.9);

    glVertex2f(-0.3,-0.9);
    glVertex2f(-0.25,-0.9);

    glVertex2f(-0.25,-0.9);
    glVertex2f(-0.25,-0.7);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.0f, 0.0f);

    glVertex2f(0.25,-0.7);
    glVertex2f(0.3,-0.7);

    glVertex2f(0.3,-0.7);
    glVertex2f(0.3,-0.9);

    glVertex2f(0.3,-0.9);
    glVertex2f(0.25,-0.9);

    glVertex2f(0.25,-0.9);
    glVertex2f(0.25,-0.7);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(-0.3,-0.53);
    glVertex2f(-0.3,-0.37);

    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(-0.2,-0.53);
    glVertex2f(-0.2,-0.37);

    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(-0.1,-0.53);
    glVertex2f(-0.1,-0.37);

    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(-0.0,-0.53);
    glVertex2f(-0.0,-0.37);

    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(0.1,-0.53);
    glVertex2f(0.1,-0.37);

    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(0.2,-0.53);
    glVertex2f(0.2,-0.37);

    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(0.3,-0.53);
    glVertex2f(0.3,-0.37);

    glEnd();

    //Bench Ends

    //Lamp-post Starts

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(0.52,-0.9);
    glVertex2f(0.58,-0.9);

    glVertex2f(0.58,-0.9);
    glVertex2f(0.58,-0.67);

    glVertex2f(0.58,-0.67);
    glVertex2f(0.52,-0.67);

    glVertex2f(0.52,-0.67);
    glVertex2f(0.52,-0.9);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.535,-0.67);
    glVertex2f(0.56,-0.67);

    glVertex2f(0.56,-0.67);
    glVertex2f(0.56,-0.35);

    glVertex2f(0.56,-0.35);
    glVertex2f(0.535,-0.35);

    glVertex2f(0.535,-0.35);
    glVertex2f(0.535,-0.67);

    glEnd();


    glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.3f, 0.0f, 0.0f);

    glVertex2f(0.535,-0.35);
    glVertex2f(0.56,-0.35);

    glVertex2f(0.56,-0.35);
    glVertex2f(0.62,-0.28);

    glVertex2f(0.62,-0.28);
    glVertex2f(0.48,-0.28);

    glVertex2f(0.48,-0.28);
    glVertex2f(0.535,-0.35);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(0.62,-0.28);
    glVertex2f(0.48,-0.28);

    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.3f, 0.0f, 0.0f);

    glVertex2f(0.62,-0.28);
    glVertex2f(0.48,-0.28);

    glVertex2f(0.48,-0.28);
    glVertex2f(0.55,-0.22);

    glVertex2f(0.55,-0.22);
    glVertex2f(0.62,-0.28);

    glEnd();

    //Lamp-Post Ends

    glFlush();

 }


 int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Scenario");
    glutInitWindowSize(720, 720);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
