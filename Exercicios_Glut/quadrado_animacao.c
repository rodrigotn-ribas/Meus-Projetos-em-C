#include <GL/glut.h>

float quadradoX = 0;
float quadradoY = 0;
float incrementoX = 0.1;
float incrementoY = 0.1;
float raio = 1;
float rotacao = 1;

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1, 0, 0);
	
	glPushMatrix();
		glTranslatef(quadradoX, quadradoY, 0.0);
		glRotatef(rotacao,0.0,0.0,1.0);
		glScalef(raio, raio, raio);
		glBegin(GL_QUADS);
			glVertex2f(-0.1, -0.1);
			glVertex2f(0.1, -0.1);
			glVertex2f(0.1, 0.1);
			glVertex2f(-0.1, 0.1);
		glEnd();
	glPopMatrix();
	
	glutSwapBuffers();
}

void atualizaCena(int value){
	//float raio_maximo = raio * 0.2 + raio;
	quadradoX += incrementoX;
	quadradoY += incrementoY;
	
	if(quadradoX > 0.9 || quadradoX < -0.9){
		incrementoX *= -1;
		if(raio < 10){
			raio += raio/100; // aumenta em 1% o tamanho do quadrado
		}
	}
	
	if(quadradoY >= 1 || quadradoY <= -1){
		incrementoY *= -1;
		if(raio <= 10){
			raio += raio/100;
		}
	}
	

	
	//Define a janela para redesenho
	glutPostRedisplay();
	
	glutTimerFunc(16, atualizaCena, 0);

}

void redimensionar(int largura, int altura){
	//Define a porção da janela utilizada para desenho
	glViewport(0,0,largura,altura);
	
	//Define as operaçoes de matrix
	glMatrixMode(GL_PROJECTION);
	//Reseta a matrix de projeção
	glLoadIdentity();
	//Define uma projeção ortogonal
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
	
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Hello OpenGL GLUT");
	glClearColor(0,0,0,0);
	glutDisplayFunc(display);
	glutReshapeFunc(redimensionar);
	glutTimerFunc(64, atualizaCena, 0);
	glutMainLoop();
	return 0;
}
