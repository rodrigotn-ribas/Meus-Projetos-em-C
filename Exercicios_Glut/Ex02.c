#include <GL/freeglut.h>

void display() { //Função para a criação do template e do objeto que vai ser criado
glClear(GL_COLOR_BUFFER_BIT); // Essa função vai limpar o conteúdo da minha tela, vai pintar tudo de preto
glBegin(GL_TRIANGLES); // Função para iniciar o triangulo
	glVertex2f(-0.5f, -0.5f); // Coordenada do 1° ponto
	glVertex2f(0.5f, -0.5f); // Coordenada do 2° ponto
	glVertex2f(0.0f, 0.5f); // Coordenada do 3° ponto
glEnd(); // Encerro o desenho triangulo
glFlush(); // Para encerrar o meu desenho todo, porque eu poderia ter começado um outro triangulo antes do flush
}

int main(int argc, char** argv) { //Aqui é de fato onde a aplicação vai começar
glutInit(&argc, argv); //Inicializo o meu glut
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //Qual vai ser o modo de exibição do meu glut, esse glut_single significa que a gente vai trabalhar com um único frame
											// ou seja, com uma imagem estática, se for animação vai ser outro glut.
glutInitWindowSize(800, 600); // As dimensões da tela 
glutCreateWindow("Hello OpenGL GLUT"); // Como que ele vai criar a janela, a única coisa diferente é que ele vai nomear na barra da janela
glutDisplayFunc(display); // O que vc quer desenhar, eu estou chamando a função display que criamos anteriormente
glutMainLoop(); //Inicializo o meu desenho de fato, porque ele vai ficar dando um loop naquela função display que chamamos
return 0;
}