#include <GL/glut.h>

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	
	//Cor preta
	glColor3f(0, 0, 0);
	
	//Desenha 5 pontos preenchidos
	glBegin(GL_POINTS);
		glVertex2f(0, 0);
		glVertex2f(-0.5, -0.5);
		glVertex2f(0.5, 0.5);
		glVertex2f(-0.5, 0.5);
		glVertex2f(0.5, -0.5);
	glEnd();
	
	//Cor Azul
	glColor3f(0, 0, 1);
	//Desenhando uma reta
	glBegin(GL_LINES);
		glVertex2f(.7, .7);
		glVertex2f(-.7, .7); //esse .7 é igual a 0.7, só para escrever menos
	glEnd();
	
	//Pentágono verde
	
	//Cor verde
	glColor3f(0, 1, 0);
	
	//Desenha 5 pontos preenchidos
	glBegin(GL_POLYGON);
		glVertex2f(0, 0.5);
		glVertex2f(0.25, 0.25);
		glVertex2f(0.25, 0);
		glVertex2f(-0.25, 0);
		glVertex2f(-0.25, 0.25);
		
	glEnd();
	
	glFlush(); //Garante que tudo sera renderizado, ele tem que sempre ser o último
}


int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Modo de exibição
	glutInitWindowPosition(100, 100); //Posição da janela
	glutCreateWindow("Pontos e retas"); //Titulo da janela
	glutDisplayFunc(display); //Registra a função de desenho
	glClearColor(1, 1, 1, 1);
	glutMainLoop(); //Inicia o loop do glut
}
