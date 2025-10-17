#include <GL/freeglut.h>
#include <math.h>
void Bandeira() {
	
	//Cor do fundo: Verde
	glClearColor(0,1,0,0);
	glClear(GL_COLOR_BUFFER_BIT);
	
	//Cor dos triangulos formando um losango: Amarelo
	glColor3f(1, 1, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0,1);
	glVertex2f(1, 0);
	glVertex2f(-1, 0);
	
	glBegin(GL_TRIANGLES);
	glVertex2f(0,-1);
	glVertex2f(1, 0);
	glVertex2f(-1, 0);
	glEnd();
	
	//Circulo azul
	glColor3f(0, 0, 1);
	
	float cx = 0.0;
	float cy = 0.0;
	float raio = 0.55;
	int qtd_triangulos = 64;
	int i;
	
	glBegin(GL_POLYGON);
		for (i = 0; i < qtd_triangulos; i++){
			float angulo = 2.0 * M_PI * i / qtd_triangulos;
			float x = cx + raio * cosf(angulo);
			float y = cy + raio * sinf(angulo);
			glVertex2f(x, y);
		}	
	glEnd();
	
	//Faixa branca da bandeira
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
		glVertex2f(-0.55, -0.05);
		glVertex2f(0.55, -0.05);
		glVertex2f(0.55, 0.05);
		glVertex2f(-0.55, 0.05);
	glEnd();
		
	glFlush();
/*
	glColor3f(0, 1, 1);
	glBegin(GL_POLYGON);
		glVertex2f(-0.1, -0.05);
		glVertex2f(0.1, -0.05);
		glVertex2f(0.1, 0.05);
		glVertex2f(-0.1, 0.05);
	glEnd();
	
	
*/
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
