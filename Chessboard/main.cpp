#include <GL/glut.h>
#include<windows.h>

void display()
{

    glClear(GL_COLOR_BUFFER_BIT);

    int numRows = 4;
    int numCols = 4;

    bool isGrey = true;


    float squareSize = 0.6f / numCols;

    for (int row = 0; row < numRows; row++) {
        for (int col = 0; col < numCols; col++) {
            if (isGrey) {
                glColor3f(1.0f, 1.0f, 1.0f);
            } else {
                glColor3f(0.5f,0.5f,0.5f);
            }

            glBegin(GL_QUADS);

            glVertex2f(col * squareSize, row * squareSize);
            glVertex2f((col + 1) * squareSize, row * squareSize);
            glVertex2f((col + 1) * squareSize, (row + 1) * squareSize);
            glVertex2f(col * squareSize, (row + 1) * squareSize);

            glEnd();

            isGrey = !isGrey;
        }

        isGrey = !isGrey;
    }

    glFlush();
}

void reshape(int width, int height)
 {
    glViewport(0, 1, width, height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glOrtho(0.0f, 0.9f, 0.0f, 0.9f, -0.9f, 0.9f);

    glMatrixMode(GL_MODELVIEW);
 }

int main(int argc, char** argv) {

    glutInit(&argc, argv);

    glutInitWindowSize(720, 720);
    glutInitWindowPosition(100,50);

    glutCreateWindow("Chessboard");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutMainLoop();


    return 0;
}
