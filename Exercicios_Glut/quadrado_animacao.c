#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float gerar_random_0_a_1() {
	//Limita o valor aleatorio de 0.0 a 1.0
    return (float)rand() / (float)RAND_MAX; 
}
//Valores da posicao do quadrado
float quadradoX = 0;
float quadradoY = 0;
//Valores do incremento das posicoes
float incrementoX = 0.1;
float incrementoY = 0.1;
//Valores do tamanho do quadrado
float raio = 2;
float raio_inicial;
//Valores das cores
float corR = 1.0; 
float corG = 0.0;
float corB = 0.0;

void display(){	
	glClear(GL_COLOR_BUFFER_BIT);
	//Valor das cores sendo aplicado no glColor3f
	glColor3f(corR, corG, corB);
	
	glPushMatrix();
		glTranslatef(quadradoX, quadradoY, 0.0);
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
	//Limita o tamanho do quadrado em ate + 20% do tamanho original
	float raio_maximo = (raio_inicial * 0.2) + raio_inicial; 
	//Define que as posicoes seram aumentadas separadamente
	quadradoX += incrementoX;
	quadradoY += incrementoY;
	//Variavel para detectar uma colisao para a troca de cor
	int colisao_ocorreu = 0;
	
	//Condicional para quando o quadrado colidir, o eixo deve ser multiplicado por (-1)
	if(quadradoX > 0.9 || quadradoX < -0.9){
		//Altera o valor do incremento para o quadrado fazer o caminho inverso
		incrementoX *= -1;
		//Recebe 1 por causa da colisao
		colisao_ocorreu = 1;
		
		//Condicional para que o quadrado nao seja maior que o permitido (120% do valor total)
		if(raio <= raio_maximo){
			raio += raio/100; // aumenta em 1% o tamanho do quadrado
		}
	}
	
	if(quadradoY >= 1 || quadradoY <= -1){
		incrementoY *= -1;
		colisao_ocorreu = 1;
		if(raio <= raio_maximo){
			raio += raio/100;
		}
	}
	
	//Se houver uma colisao, chama a funcao de aleatoriedade e altera o valor do RGB
	if (colisao_ocorreu) {
        // Gera novos valores RGB aleatórios
        corR = gerar_random_0_a_1();
        corG = gerar_random_0_a_1();
        corB = gerar_random_0_a_1();
    }

	
	//Define a janela para redesenho
	glutPostRedisplay();
	
	glutTimerFunc(64, atualizaCena, 0);

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
	//Garante uma sequencia aleatoria para cada execucao
	srand((unsigned int)time(NULL)); 
	//Declara o raio_incial igual primeiro valor de raio
	raio_inicial = raio;
	
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
