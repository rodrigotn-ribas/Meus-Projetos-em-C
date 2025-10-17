#include <GL/glut.h>

void display(){
	//Limpa o canvas/tela
	glClear(GL_COLOR_BUFFER_BIT); 
	
	//Definindo a cor do desenho (RGB -> Red, Green, Blue)
	//(0-255, 0-255, 0-255)
	glColor3f(1, 0, 0); //vermelho
	
	
	// Desenhar um quadrado, é um polígono, e aí eu só defino a quantidade de pontos que eu quero
	glBegin(GL_POLYGON);
		glVertex2f(-0.5, -0.5);
		glVertex2f(0.5, -0.5);
		glVertex2f(0.5, 0.5);
		glVertex2f(-0.5, 0.5);
	glEnd();
	
	glFlush(); //Garante que tudo sera renderizado
	
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100); //Indica onde a janela vai aparecer na tela
	glutCreateWindow("Quadrado Vermelho");
	glutDisplayFunc(display);
	glutMainLoop();
}