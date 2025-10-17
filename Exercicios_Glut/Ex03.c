#include <GL/glut.h>
#include <math.h>

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	//Cor Roxo
	glColor3f(0.5, 0, 0.5);
	
	float cx = 0.0;
	float cy = 0.0;
	float raio = 0.5;
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
