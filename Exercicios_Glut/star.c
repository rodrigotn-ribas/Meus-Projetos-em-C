#include <GL/freeglut.h>
#include <math.h>
void Bandeira() {

    glBegin(GL_TRIANGLES);

    glColor3f(1, 0, 0);
    glVertex3f(-0.60, 0.77, 0);

    glColor3f(0, 1, 0);
    glVertex3f(-0.42, 0.77, 0);

    glColor3f(0, 0, 1);
    glVertex3f(-0.58, 0.68, 0);

    //second triangle top triangle

    glColor3f(1, 0, 0);
    glVertex3f(-0.64, 1, 0);

    glColor3f(0, 1, 0);
    glVertex3f(-0.68, 0.77, 0);

    glColor3f(0, 0, 1);
    glVertex3f(-0.60, 0.77, 0);

    //3rd Triangle
    glColor3f(1, 0, 0);
    glVertex3f(-0.68, 0.77, 0);

    glColor3f(0, 1, 0);
    glVertex3f(-0.7, 0.68, 0);

    glColor3f(0, 0, 1);
    glVertex3f(-0.86, 0.77, 0);

    //4th Triangle
    glColor3f(1, 0, 0);
    glVertex3f(-0.64, 0.63, 0);

    glColor3f(0, 1, 0);
    glVertex3f(-0.7, 0.68, 0);

    glColor3f(0, 0, 1);
    glVertex3f(-0.82, 0.43, 0);

    //5th Triangle
    glColor3f(1, 0, 0);
    glVertex3f(-0.64, 0.63, 0);

    glColor3f(0, 1, 0);
    glVertex3f(-0.58, 0.68, 0);

    glColor3f(0, 0, 1);
    glVertex3f(-0.51, 0.43, 0);

    glEnd();

    glBegin(GL_POLYGON);//code for the Polygon within the stars
    glColor3f(1, 0, 0);//sets color of Polygon

    glVertex3f(-0.68, 0.77, 0); //set the 5 vetices of polygon

    glColor3f(1, 0, 0);
    glVertex3f(-0.60, 0.77, 0);

    glColor3f(1, 0,0 );
    glVertex3f(-0.7, 0.68, 0);

    glColor3f(1, 0, 0);
    glVertex3f(-0.64, 0.63, 0);

    glColor3f(1, 0, 0);
    glVertex3f(-0.58, 0.68, 0);




    glEnd();

   

    glEnd();
    glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Hello OpenGL GLUT");
	glutDisplayFunc(Bandeira);
	glutMainLoop();
	return 0;
}
