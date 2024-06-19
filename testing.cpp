/*gcc -Wall -Werror -Wextra  -o testing testing.cpp -lfreeglut -lglew32 -lopengl32 -lglu32*/
#include <GL/glut.h>

float px, py;

void drawPlayer()
{
    glColor3f(1, 1, 0);
    glPointSize(8);
    glBegin(GL_POINTS);
    glVertex2f(px, py);
    glEnd();
}

void buttons(unsigned char key, int /*x*/, int /*y*/)
{
    if(key == 'w')
    {
        py -= 5;
    }
    if(key == 's')
    {
        py += 5;
    }
    if(key == 'a')
    {
        px -= 5;
    }
    if(key == 'd')
    {
        px += 5;
    }
    glutPostRedisplay();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    drawPlayer();
    glutSwapBuffers();
}

void init()
{
    glClearColor(0.3, 0.3, 0.3, 0);
    gluOrtho2D(0, 1024, 512, 0);
    px=300; py=300;
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1024, 512);
    glutCreateWindow("Testing");
    glutDisplayFunc(display);
    init();
    glutKeyboardFunc(buttons);
    glutMainLoop();
}