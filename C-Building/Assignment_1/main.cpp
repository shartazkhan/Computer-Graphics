#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.1416

void display(){
glClearColor(1.0f,1.0f,1.0f,1.0f);
glClear(GL_COLOR_BUFFER_BIT);

 int i;
    //sky
    glBegin(GL_QUADS);
    glColor3ub(240,255,255);
    glVertex2f(-1.0, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, -1.0f); // bottom right
    glVertex2f(-1.0f, -1.0f);
    glEnd();

    //sun
    int is;
	GLfloat xs=-0.7f;
	GLfloat ys=0.7f;
	GLfloat radiuss =.20f;
	int triangleAmounts = 100;
	GLfloat twicePis = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 209, 26);
    glVertex2f(xs, ys);
    for(is = 0; is <= triangleAmounts; is++)
    {
        glVertex2f(xs+(radiuss*cos(is*twicePis/triangleAmounts)), ys+(radiuss*sin(is*twicePis/triangleAmounts)));
    }
	glEnd();

	 int is2;
	GLfloat xs2=-0.7f;
	GLfloat ys2=0.7f;
	GLfloat radiuss2 =.10f;
	int triangleAmounts2 = 100;
	GLfloat twicePis2 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,215,0);
    glVertex2f(xs2, ys2);
    for(is2 = 0; is2 <= triangleAmounts2; is2++)
    {
        glVertex2f(xs2+(radiuss2*cos(is2*twicePis/triangleAmounts2)), ys2+(radiuss2*sin(is2*twicePis/triangleAmounts2)));
    }
	glEnd();


	//cloud
	float xC,yC,radiusC,triangleAmountC,twicePiC;
    xC= -0.4f, yC= 0.7f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++) {
    glVertex2f(
                xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),
            yC + (radiusC * sin(iC * twicePiC / triangleAmountC))
        );
    }
	glEnd();
	xC= -0.3f, yC= 0.7f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++) {
        glVertex2f(
                xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),
            yC + (radiusC * sin(iC * twicePiC / triangleAmountC))
        );
    }
	glEnd();
	xC= -0.37f, yC= 0.67f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++) {
        glVertex2f(
                xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),
            yC + (radiusC * sin(iC * twicePiC / triangleAmountC))
        );
    }
	glEnd();


	glTranslatef(0.5f,0.1,0);
	xC= -0.4f, yC= 0.7f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++) {
    glVertex2f(
                xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),
            yC + (radiusC * sin(iC * twicePiC / triangleAmountC))
        );
    }
	glEnd();
	xC= -0.3f, yC= 0.7f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++) {
        glVertex2f(
                xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),
            yC + (radiusC * sin(iC * twicePiC / triangleAmountC))
        );
    }
	glEnd();
	xC= -0.37f, yC= 0.67f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++) {
        glVertex2f(
                xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),
            yC + (radiusC * sin(iC * twicePiC / triangleAmountC))
        );
    }
	glEnd();

	glTranslatef(0.5f,-0.19,0);
	xC= -0.4f, yC= 0.7f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++) {
    glVertex2f(
                xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),
            yC + (radiusC * sin(iC * twicePiC / triangleAmountC))
        );
    }
	glEnd();

	xC= -0.3f, yC= 0.7f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++) {
        glVertex2f(
                xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),
            yC + (radiusC * sin(iC * twicePiC / triangleAmountC))
        );
    }
	glEnd();

	xC= -0.37f, yC= 0.67f, radiusC =.09f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++) {
        glVertex2f(
                xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),
            yC + (radiusC * sin(iC * twicePiC / triangleAmountC))
        );
    }
	glEnd();

	glLoadIdentity();


    //Side square building
    glBegin(GL_QUADS);
    glColor3ub(112,128,144);
    glVertex2d(0.76,-0.9);
    glVertex2d(1,-0.9);
    glVertex2d(1,-0.4);
    glVertex2d(0.76,-0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(119,136,153);
    glVertex2d(0.78,-0.4);
    glVertex2d(1,-0.4);
    glVertex2d(1,-0.2);
    glVertex2d(0.78,-0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(176,196,222);
    glVertex2d(0.8,-0.2);
    glVertex2d(1,-0.2);
    glVertex2d(1,0.0);
    glVertex2d(0.8,0.0);
    glEnd();
    //window
    glBegin(GL_QUADS);
    glColor3ub(135,206,250);
    glVertex2d(0.81,-0.62);
    glVertex2d(1,-0.62);
    glVertex2d(1,-0.52);
    glVertex2d(0.81,-0.52);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(135,206,250);
    glVertex2d(0.81,-0.82);
    glVertex2d(1,-0.82);
    glVertex2d(1,-0.72);
    glVertex2d(0.81,-0.72);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2d(0.78,-0.36);
    glVertex2d(1,-0.36);
    glVertex2d(1,-0.26);
    glVertex2d(0.78,-0.26);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2d(0.8,-0.16);
    glVertex2d(1,-0.16);
    glVertex2d(1,-0.06);
    glVertex2d(0.8,-0.06);
    glEnd();

    // golla
	GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.735f;
	int triangleAmount = 40;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(173,216,241);
    glVertex2f(x,y);
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f
			(
                x + (radius * cos(i * twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x0=.0f; GLfloat y0=.0f; GLfloat radius0 =.68f;
	int triangleAmount0 = 40;
	GLfloat twicePi0 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(173,216,230);
    glVertex2f(x0,y0);
    for(i = 0; i <= triangleAmount0;i++) {
    glVertex2f
			(
                x0 + (radius0 * cos(i * twicePi0 / triangleAmount0)),
			    y0 + (radius0 * sin(i * twicePi0 / triangleAmount0))
			);
		}
	glEnd();

     //Antina
     glBegin(GL_QUADS);
     glColor3ub(33,47,61);
     glVertex2f(-0.2,0.705);
     glVertex2f(-0.204,0.705);
     glVertex2f(-0.204,0.8);
     glVertex2f(-0.2,0.8);
     glEnd();

     //MainBase
     glBegin(GL_QUADS);
     glColor3ub(34,139,34);
     glVertex2f(-1,-0.9);
     glVertex2f(-1,-1);
     glVertex2f(1,-1);
     glVertex2f(1,-0.9);
     glEnd();

     //BuildingBase
     glBegin(GL_QUADS);
     glColor3ub(176, 196, 222);
     glVertex2f(-0.23,-0.7);
     glVertex2f(-0.23,-0.9);
     glVertex2f(0.23,-0.9);
     glVertex2f(0.23,-0.7);
     glEnd();

     //FloorBase
     glBegin(GL_QUADS);
     glColor3ub(0,102,204);
     glVertex2f(-0.23,-0.76);
     glVertex2f(-0.23,-0.84);
     glVertex2f(0.23,-0.84);
     glVertex2f(0.23,-0.76);
     glEnd();
    // 1
     glBegin(GL_POLYGON);
     glColor3ub(0,102,204);
     glVertex2f(-0.536,-0.5);
     glVertex2f(-0.435,-0.59);
     glVertex2f(0.435,-0.59);
     glVertex2f(0.536,-0.5);
     glEnd();
  // 2
     glBegin(GL_POLYGON);
     glColor3ub(30,144,255);
     glVertex2f(-0.67,-0.3);
     glVertex2f(-0.615,-0.4);
     glVertex2f(0.615,-0.4);
     glVertex2f(0.67,-0.3);
     glEnd();
// mid
     glBegin(GL_POLYGON);
     glColor3ub(0,191,255);
     glVertex2f(-0.734,-0.02);
     glVertex2f(-0.709,-0.19);
     glVertex2f(0.709,-0.19);
     glVertex2f(0.734,-0.02);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(30,144,255);
     glVertex2f(-0.728,0.1);
     glVertex2f(-0.706,0.2);
     glVertex2f(0.706,0.2);
     glVertex2f(0.728,0.1);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(0,102,204);
     glVertex2f(-0.66,0.32);
     glVertex2f(-0.59,0.44);
     glVertex2f(0.59,0.44);
     glVertex2f(0.66,0.32);
     glEnd();

     glLoadIdentity();
    //STAND_BLACK
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.38f,-1.0f);
    glVertex2f(-0.33f,-1.0f);
    glVertex2f(-0.33f,0.0f);
    glVertex2f(-0.38f,0.0f);
    glEnd();


    //STAND_2
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.24f,-1.0f);
    glVertex2f(-0.19f,-1.0f);
    glVertex2f(-0.19f,0.0f);
    glVertex2f(-0.24f,0.0f);
    glEnd();

    //STAND_3
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.10f,-1.0f);
    glVertex2f(-0.05f,-1.0f);
    glVertex2f(-0.05f,0.1f);
    glVertex2f(-0.10f,0.1f);
    glEnd();

    //STAND_4
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.04f,-1.0f);
    glVertex2f(0.09f,-1.0f);
    glVertex2f(0.09f,0.0f);
    glVertex2f(0.04f,0.0f);
    glEnd();

    //STAND_5
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.18f,-1.0f);
    glVertex2f(0.23f,-1.0f);
    glVertex2f(0.23f,0.0f);
    glVertex2f(0.18f,0.0f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.31f, -0.82f);
    glVertex2f(-0.45f, -0.82f);
    glVertex2f(-0.45f, -0.98f);
    glVertex2f(0.31f, -0.98f);
    glEnd();

    //AIUB
    //A
    glBegin(GL_QUADS);
    glColor3ub(240,248,255);
    glVertex2d(-0.31,-0.84);
    glVertex2d(-0.37,-0.94);
    glVertex2d(-0.34,-0.94);
    glVertex2d(-0.27,-0.84);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(240,248,255);
    glVertex2d(-0.31,-0.84);
    glVertex2d(-0.25,-0.94);
    glVertex2d(-0.21,-0.94);
    glVertex2d(-0.27,-0.84);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(240,248,255);
    glVertex2d(-0.32,-0.90);
    glVertex2d(-0.35,-0.92);
    glVertex2d(-0.22,-0.92);
    glVertex2d(-0.25,-0.90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(240,248,255);
    glVertex2d(-0.14,-0.84);
    glVertex2d(-0.14,-0.94);
    glVertex2d(-0.17,-0.94);
    glVertex2d(-0.17,-0.84);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(240,248,255);
    glVertex2d(-0.06,-0.84);
    glVertex2d(-0.06,-0.94);
    glVertex2d(-0.09,-0.94);
    glVertex2d(-0.09,-0.84);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(240,248,255);
    glVertex2d(0.035,-0.84);
    glVertex2d(0.035,-0.94);
    glVertex2d(0.0,-0.94);
    glVertex2d(0.0,-0.84);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(240,248,255);
    glVertex2d(-0.06,-0.94);
    glVertex2d(0.0,-0.94);
    glVertex2d(0.0,-0.915);
    glVertex2d(-0.06,-0.915);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(240,248,255);
    glVertex2d(0.07,-0.84);
    glVertex2d(0.07,-0.94);
    glVertex2d(0.17,-0.94);
    glVertex2d(0.17,-0.84);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2d(0.095,-0.925);
    glVertex2d(0.145,-0.925);
    glVertex2d(0.145,-0.90);
    glVertex2d(0.095,-0.90);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2d(0.095,-0.885);
    glVertex2d(0.145,-0.885);
    glVertex2d(0.145,-0.86);
    glVertex2d(0.095,-0.86);
    glEnd();

     //FLAG
    glBegin(GL_QUADS);
    glColor3ub(60,179,113);
    glVertex2f(-0.10f,0.1f);
    glVertex2f(-0.10f,-0.2f);
    glVertex2f(0.38f,-0.2f);
    glVertex2f(0.38f,0.1f);
    glEnd();

    int is3;
	GLfloat xs3=0.1f;
	GLfloat ys3=-0.065f;
	GLfloat radiuss3 =.06f;
	int triangleAmounts3 = 100;
	GLfloat twicePis3 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(220,20,60);
    glVertex2f(xs3, ys3);
    for(is3 = 0; is3 <= triangleAmounts3; is3++)
    {
        glVertex2f(xs3+(radiuss3*cos(is3*twicePis3/triangleAmounts3)), ys3+(radiuss3*sin(is3*twicePis3/triangleAmounts3)));
    }
	glEnd();


 glFlush();

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("AIUB C Building");
	glutInitWindowSize(680, 480);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
