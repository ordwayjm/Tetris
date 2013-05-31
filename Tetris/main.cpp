#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#include <GL/freeglut.h>
#include "Color.h"

const int W = 800, H = 400;

Color bgColor(0, 0, 0);

void setClippingRectangle(double lx, double ly, double rx, double ry)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();				
	gluOrtho2D(lx, rx, ly, ry);
}

void setViewport(GLint lx, GLint ly, GLint rx, GLint ry)
{
	glViewport(lx, ly, rx-lx+1, ry-ly+1);
}

void reshape(int w, int h)
{
	if (w <= 0 || h <= 0) return;

	setViewport(0, 0, glutGet(GLUT_WINDOW_WIDTH), glutGet(GLUT_WINDOW_HEIGHT));

	double wcH = 1;
	double wcW = 2;
	double wcAR = wcW / wcH;
	double vpAR = (double)w/h;
	double newWcWidth, newWcHeight;
	const double pixelsPerWC = 1;
	if (vpAR > wcAR)
	{
		newWcHeight = h / pixelsPerWC;
		newWcWidth = vpAR * newWcHeight;
	} 
	else 
	{
		newWcWidth = w / pixelsPerWC;
		newWcHeight = newWcWidth / vpAR;
	}
	setClippingRectangle(0, 0, newWcWidth-1, newWcHeight-1);

	glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y)
{
	key = toupper(key);

	glutPostRedisplay();
}

void special(int key, int x, int y)
{
	
}

void display(void)
{
	glClearColor((float)bgColor.getR()/255, (float)bgColor.getG()/255, (float)bgColor.getB()/255, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	// DRAW HERE

	glutSwapBuffers();
	glFlush();
}

string getUserInput(string prompt)
{
	string input;
	cout << prompt;
	cin >> input;
	return input;
}

void main(int argc, char *argv[])
{
	// OpenGL initialization
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);	
	glutInitWindowSize(W, H);	
	glutCreateWindow("Tetris");
	
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutSpecialFunc(special);
	glutKeyboardFunc(keyboard);
	
	glutMainLoop();
}