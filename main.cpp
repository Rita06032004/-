#include <opencv/highgui.h> ///�ϥ� OpenCV 2.1 ���²��, �u�n�� High GUI �Y�i
#include <opencv/cv.h>
#include <GL/glut.h>
#include "CMP3_MCI.h" ///���޸�, �ܹ����e glm.h
CMP3_MCI myMP3; ///�ŧi�@�Ӫ����ܼ�
int id1,id2;
int myTexture(char * filename)
{
    IplImage * img = cvLoadImage(filename); ///OpenCVŪ��
    cvCvtColor(img,img, CV_BGR2RGB); ///OpenCV���m (�ݭncv.h)
    glEnable(GL_TEXTURE_2D); ///1. �}�ҶK�ϥ\��
    GLuint id; ///�ǳƤ@�� unsigned int ���, �s �K��ID
    glGenTextures(1, &id); /// ����Generate �K��ID
    glBindTexture(GL_TEXTURE_2D, id); ///�j�wbind �K��ID
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT); /// �K�ϰѼ�, �W�L�]�˪��d��T, �N���жK��
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT); /// �K�ϰѼ�, �W�L�]�˪��d��S, �N���жK��
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST); /// �K�ϰѼ�, ��j�ɪ�����, �γ̪��I
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); /// �K�ϰѼ�, �Y�p�ɪ�����, �γ̪��I
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, img->width, img->height, 0, GL_RGB, GL_UNSIGNED_BYTE, img->imageData);
    return id;
}
#include <GL/glut.h>
#include "glm.h"
GLMmodel * downbody = NULL;
GLMmodel * topbody = NULL;
GLMmodel * head = NULL;
GLMmodel * pelvis = NULL;
GLMmodel * leftdownhand = NULL;
GLMmodel * leftbornhand = NULL;
GLMmodel * leftbornleg = NULL;
GLMmodel * leftborn = NULL;
GLMmodel * leftdownleg = NULL;
GLMmodel * leftmiddlehand = NULL;
GLMmodel * lefttophand = NULL;
GLMmodel * lefttopleg = NULL;
GLMmodel * rightdownhand = NULL;
GLMmodel * rightbornhand = NULL;
GLMmodel * rightbornleg = NULL;
GLMmodel * rightborn = NULL;
GLMmodel * rightdownleg = NULL;
GLMmodel * rightmiddlehand = NULL;
GLMmodel * righttophand = NULL;
GLMmodel * righttopleg = NULL;

void drawdownbody(void)
{
    if (!downbody) {
	downbody = glmReadOBJ("data/downbody.obj");
	if (!downbody) exit(0);
	glmUnitize(downbody);
	glmFacetNormals(downbody);
	glmVertexNormals(downbody, 90.0);
    }

    glmDraw(downbody, GLM_SMOOTH | GLM_MATERIAL);
}
void drawtopbody(void)
{
    if (!topbody) {
	topbody = glmReadOBJ("data/topbody.obj");
	if (!topbody) exit(0);
	glmUnitize(topbody);
	glmFacetNormals(topbody);
	glmVertexNormals(topbody, 90.0);
    }

    glmDraw(topbody, GLM_SMOOTH | GLM_MATERIAL);
}
void drawhead(void)
{
    if (!head) {
	head = glmReadOBJ("data/head.obj");
	if (!head) exit(0);
	glmUnitize(head);
	glmFacetNormals(head);
	glmVertexNormals(head, 90.0);
    }

    glmDraw(head, GLM_SMOOTH | GLM_MATERIAL);
}
void drawpelvis(void)
{
    if (!pelvis) {
	pelvis = glmReadOBJ("data/pelvis.obj");
	if (!pelvis) exit(0);
	glmUnitize(pelvis);
	glmFacetNormals(pelvis);
	glmVertexNormals(pelvis, 90.0);
    }

    glmDraw(pelvis, GLM_SMOOTH | GLM_MATERIAL);
}
void drawleftdownhand(void)
{
    if (!leftdownhand) {
	leftdownhand = glmReadOBJ("data/leftdownhand.obj");
	if (!leftdownhand) exit(0);
	glmUnitize(leftdownhand);
	glmFacetNormals(leftdownhand);
	glmVertexNormals(leftdownhand, 90.0);
    }

    glmDraw(leftdownhand, GLM_SMOOTH | GLM_MATERIAL);
}

void drawleftbornhand(void)
{
    if (!leftbornhand) {
	leftbornhand = glmReadOBJ("data/leftbornhand.obj");
	if (!leftbornhand) exit(0);
	glmUnitize(leftbornhand);
	glmFacetNormals(leftbornhand);
	glmVertexNormals(leftbornhand, 90.0);
    }

    glmDraw(leftbornhand, GLM_SMOOTH | GLM_MATERIAL);
}

void drawleftbornleg(void)
{
    if (!leftbornleg) {
	leftbornleg = glmReadOBJ("data/leftbornleg.obj");
	if (!leftbornleg) exit(0);
	glmUnitize(leftbornleg);
	glmFacetNormals(leftbornleg);
	glmVertexNormals(leftbornleg, 90.0);
    }

    glmDraw(leftbornleg, GLM_SMOOTH | GLM_MATERIAL);
}

void drawleftborn(void)
{
    if (!leftborn) {
	leftborn = glmReadOBJ("data/leftborn.obj");
	if (!leftborn) exit(0);
	glmUnitize(leftborn);
	glmFacetNormals(leftborn);
	glmVertexNormals(leftborn, 90.0);
    }

    glmDraw(leftborn, GLM_SMOOTH | GLM_MATERIAL);
}

void drawleftdownleg(void)
{
    if (!leftdownleg) {
	leftdownleg = glmReadOBJ("data/leftdownleg.obj");
	if (!leftdownleg) exit(0);
	glmUnitize(leftdownleg);
	glmFacetNormals(leftdownleg);
	glmVertexNormals(leftdownleg, 90.0);
    }

    glmDraw(leftdownleg, GLM_SMOOTH | GLM_MATERIAL);
}

void drawleftmiddlehand(void)
{
    if (!leftmiddlehand) {
	leftmiddlehand = glmReadOBJ("data/leftmiddlehand.obj");
	if (!leftmiddlehand) exit(0);
	glmUnitize(leftmiddlehand);
	glmFacetNormals(leftmiddlehand);
	glmVertexNormals(leftmiddlehand, 90.0);
    }

    glmDraw(leftmiddlehand, GLM_SMOOTH | GLM_MATERIAL);
}

void drawlefttophand(void)
{
    if (!lefttophand) {
	lefttophand = glmReadOBJ("data/lefttophand.obj");
	if (!lefttophand) exit(0);
	glmUnitize(lefttophand);
	glmFacetNormals(lefttophand);
	glmVertexNormals(lefttophand, 90.0);
    }

    glmDraw(lefttophand, GLM_SMOOTH | GLM_MATERIAL);
}

void drawlefttopleg(void)
{
    if (!lefttopleg) {
	lefttopleg = glmReadOBJ("data/lefttopleg.obj");
	if (!lefttopleg) exit(0);
	glmUnitize(lefttopleg);
	glmFacetNormals(lefttopleg);
	glmVertexNormals(lefttopleg, 90.0);
    }

    glmDraw(lefttopleg, GLM_SMOOTH | GLM_MATERIAL);
}


void drawrightdownhand(void)
{
    if (!rightdownhand) {
	rightdownhand = glmReadOBJ("data/rightdownhand.obj");
	if (!rightdownhand) exit(0);
	glmUnitize(rightdownhand);
	glmFacetNormals(rightdownhand);
	glmVertexNormals(rightdownhand, 90.0);
    }

    glmDraw(rightdownhand, GLM_SMOOTH | GLM_MATERIAL);
}

void drawrightbornhand(void)
{
    if (!rightbornhand) {
	rightbornhand = glmReadOBJ("data/rightbornhand.obj");
	if (!rightbornhand) exit(0);
	glmUnitize(rightbornhand);
	glmFacetNormals(rightbornhand);
	glmVertexNormals(rightbornhand, 90.0);
    }

    glmDraw(rightbornhand, GLM_SMOOTH | GLM_MATERIAL);
}

void drawrightbornleg(void)
{
    if (!rightbornleg) {
	rightbornleg = glmReadOBJ("data/rightbornleg.obj");
	if (!rightbornleg) exit(0);
	glmUnitize(rightbornleg);
	glmFacetNormals(rightbornleg);
	glmVertexNormals(rightbornleg, 90.0);
    }

    glmDraw(rightbornleg, GLM_SMOOTH | GLM_MATERIAL);
}

void drawrightborn(void)
{
    if (!rightborn) {
	rightborn = glmReadOBJ("data/rightborn.obj");
	if (!rightborn) exit(0);
	glmUnitize(rightborn);
	glmFacetNormals(rightborn);
	glmVertexNormals(rightborn, 90.0);
    }

    glmDraw(rightborn, GLM_SMOOTH | GLM_MATERIAL);
}

void drawrightdownleg(void)
{
    if (!rightdownleg) {
	rightdownleg = glmReadOBJ("data/rightdownleg.obj");
	if (!rightdownleg) exit(0);
	glmUnitize(rightdownleg);
	glmFacetNormals(rightdownleg);
	glmVertexNormals(rightdownleg, 90.0);
    }

    glmDraw(rightdownleg, GLM_SMOOTH | GLM_MATERIAL);
}

void drawrightmiddlehand(void)
{
    if (!rightmiddlehand) {
	rightmiddlehand = glmReadOBJ("data/rightmiddlehand.obj");
	if (!rightmiddlehand) exit(0);
	glmUnitize(rightmiddlehand);
	glmFacetNormals(rightmiddlehand);
	glmVertexNormals(rightmiddlehand, 90.0);
    }

    glmDraw(rightmiddlehand, GLM_SMOOTH | GLM_MATERIAL);
}

void drawrighttophand(void)
{
    if (!righttophand) {
	righttophand = glmReadOBJ("data/righttophand.obj");
	if (!righttophand) exit(0);
	glmUnitize(righttophand);
	glmFacetNormals(righttophand);
	glmVertexNormals(righttophand, 90.0);
    }

    glmDraw(righttophand, GLM_SMOOTH | GLM_MATERIAL);
}

void drawrighttopleg(void)
{
    if (!righttopleg) {
	righttopleg = glmReadOBJ("data/righttopleg.obj");
	if (!righttopleg) exit(0);
	glmUnitize(righttopleg);
	glmFacetNormals(righttopleg);
	glmVertexNormals(righttopleg, 90.0);
    }

    glmDraw(righttopleg, GLM_SMOOTH | GLM_MATERIAL);
}

///float angle = 0, da = 1; ///�[�o��, �������
float angleX [20] = {}; ///20�Ө��׳��]��0
float angleY [20] = {};
int angleID = 0; ///�i�H�O����0�B����1�B����2�B......
int oldX = 0, oldY = 0;
#include <stdio.h>
FILE * fin = NULL;
FILE * fout = NULL;
void motion(int x, int y)
{ ///�[�Jmouse motion �������禡
    angleX [angleID] += y - oldY; /// ��ڭ̪� mouse motion ��, y�y�Ъ���������
    angleY [angleID] -= x - oldX;
    oldX = x;
    oldY = y;
    glutPostRedisplay(); ///�n���e�e��


}
void mouse(int button,int state,int x,int y)
{
    oldX=x;
    oldY=y;
}
float oldAngleX[20] = {}, newAngleX[20] = {};
float oldAngleY[20] = {}, newAngleY[20] = {};
void timer(int t) {
    glutTimerFunc(50, timer, t+1);
    if(t%20==0) {
        if(fin==NULL) fin = fopen("angle.txt", "r");
        for(int i=0; i<20; i++){ ///�w��20�����`
            ///oldAngle[i] = newAngle[i];
            oldAngleX[i] = newAngleX[i];
            oldAngleY[i] = newAngleY[i];
            ///fscanf(fin, "%f", & newAngle[i] );
            fscanf(fin, "%f", & newAngleX[i] );
            fscanf(fin, "%f", & newAngleY[i] );
        }
    }
    float alpha = (t%20) / 20.0;
    for(int i=0; i<20; i++){ ///�w��20�����`
        angleX[i] = newAngleX[i]*alpha + oldAngleX[i]*(1-alpha);
        angleY[i] = newAngleY[i]*alpha + oldAngleY[i]*(1-alpha);
    }
    glutPostRedisplay();
}
void keyboard (unsigned char key, int x, int y){
    if(key=='p')
    { ///Play����
        glutTimerFunc(0, timer, 0);
    }
    if(key=='r'){
        if(fin==NULL) fin = fopen("angle.txt", "r");
        for(int i=0;i<20;i++){
            fscanf(fin, "%f", & angleX[i]);
            fscanf(fin, "%f", & angleY[i]);
        }
        glutPostRedisplay();
    }
    else if(key=='s')
    {
        if(fout==NULL) fout = fopen("angle.txt", "w+");
        for(int i=0;i<20;i++)
        {
            printf("%.1f ", angleX[i]);
            printf("%.1f ", angleY[i]);
            fprintf(fout, "%.1f ", angleX[i]);
            fprintf(fout, "%.1f ", angleY[i]);
        }
        printf("\n");
        fprintf(fout, "\n");
    }

    if(key=='0') angleID = 0;
    if(key=='1') angleID = 1;
    if(key=='2') angleID = 2;
    if(key=='3') angleID = 3;
    if(key=='4') angleID = 4;
    if(key=='5') angleID = 5;
    if(key=='6') angleID = 6;
    if(key=='7') angleID = 7;
    if(key=='8') angleID = 8;
    if(key=='9') angleID = 9;
}
void display()
{
    glClearColor(1,1,1,0);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    ///glEnable(GL_DEPTH_TEST);
    glBindTexture(GL_TEXTURE_2D, id1); ///�I��
    glBegin(GL_POLYGON);
        glTexCoord2f(0, 0); glVertex3f(-3, +2, 0.5);
        glTexCoord2f(0, 1); glVertex3f(-3, -2, 0.5);
        glTexCoord2f(1, 1); glVertex3f(+3, -2, 0.5);
        glTexCoord2f(1, 0); glVertex3f(+3, +2, 0.5);
        glTranslatef(0,0,1);
        glScaled(0,0,0);
    glEnd();

    glPushMatrix();
        glRotatef(angleX[0], 0, 1, 0);
        glScaled(1,1,1);
        glTranslatef(0,0.4,0);
        drawhead();
        ///glutSolidSphere(0.1, 30, 30); ///�[�@�Ӷ�y��N����ʤ���
        glEnable(GL_TEXTURE_2D);
        glColor3f(1, 1, 1);

        glPushMatrix();
            glTranslatef(0, -0.15, 0);
            glRotatef(angleX[1], 0, 1, 0);
            glTranslatef(0, 0, 0);
            drawtopbody();
            glPushMatrix();
                glTranslatef(0.125,+0.05,0);
                glRotatef(angleX[6], 0, 0, 1);
                glRotatef(180,0,1,0);
                glTranslatef(-0.05, 0, 0);
                drawlefttophand();
                glPushMatrix();
                    glTranslatef(0,-0.05,0);
                    glRotatef(angleX[7], 1, 0, 0);
                    glTranslatef(0, -0.05, 0);
                    drawleftmiddlehand();
                    glPushMatrix();
                        glTranslatef(-0.005,-0.1,0);
                        glRotatef(angleX[8], 0, 1, 0);
                        glTranslatef(0, 0, 0);
                        glScalef(0.8,0.8,0.8);
                        drawleftbornhand();
                        glPushMatrix();
                            glTranslatef(+0.01,-0.05,0);
                            glRotatef(angleX[9], 1, 0, 0);
                            glTranslatef(0, -0.15, +0.05);
                            drawleftdownhand();
                        glPopMatrix();
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();
            glPushMatrix();
                glTranslatef(-0.125,+0.05,0);
                glRotatef(angleY[6], 0, 0, 1);
                glRotatef(180,0,1,0);
                glTranslatef(+0.05, 0, 0);
                drawrighttophand();
                glPushMatrix();
                    glTranslatef(0,-0.05,0);
                    glRotatef(angleY[7], 1, 0, 0);
                    glTranslatef(0, -0.05, 0);
                    drawleftmiddlehand();
                    glPushMatrix();
                        glTranslatef(+0.005,-0.1,0);
                        glRotatef(angleY[8], 0, 1, 0);
                        glTranslatef(0, 0, 0);
                        glScalef(0.8,0.8,0.8);
                        drawrightbornhand();
                        glPushMatrix();
                            glTranslatef(+0.01,-0.05,0);
                            glRotatef(angleY[9], 1, 0, 0);
                            glTranslatef(0, -0.15, +0.05);
                            drawrightdownhand();
                        glPopMatrix();
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();
            glPushMatrix();
                glTranslatef(0, -0.15, 0);
                glRotatef(angleY[1], 1, 0, 0);
                glTranslatef(0, 0, 0);
                drawdownbody();
                glPushMatrix();
                    glTranslatef(0, -0.1, 0);
                    glRotatef(angleY[0], 1, 0, 0);
                    glTranslatef(0, 0, 0);
                    drawpelvis();
                    glPushMatrix();
                        glTranslatef(-0.05, -0.05, 0);
                        glRotatef(angleY[2], 1, 0, 0);
                        glTranslatef(0, 0, 0);
                        drawleftborn();
                        glPushMatrix();
                            glScaled(0.5,0.5,0.5);
                            glTranslatef(0, -0.35, 0);
                            glRotatef(angleX[3], 0, 1, 0);
                            glTranslatef(0, 0, 0);
                            drawrighttopleg();
                            glPushMatrix();
                                glScaled(0.9,0.82,0.8);
                                glTranslatef(-0.02, -0.5, 0);
                                glRotatef(angleX[4], 0, 1, 0);
                                glTranslatef(0, 0, 0);
                                drawrightbornleg();
                                glPushMatrix();
                                    glScaled(0.5,0.5,0.5);
                                    glTranslatef(0.02, -0.1, 0);
                                    glRotatef(angleX[5], 1, 0, 0);
                                    glTranslatef(0, -1, 0);
                                    drawrightdownleg();
                                glPopMatrix();
                            glPopMatrix();
                        glPopMatrix();
                    glPopMatrix();
                    glPushMatrix();
                        glTranslatef(0.05,-0.05, 0);
                        glRotatef(angleX[2], 1, 0, 0);
                        glTranslatef(0, 0, 0);
                        drawrightborn();
                        glPushMatrix();
                            glScaled(0.5,0.5,0.5);
                            glTranslatef(0, -0.35, 0);
                            glRotatef(angleY[3], 0, 1, 0);
                            glTranslatef(0, 0, 0);
                            drawlefttopleg();
                            glPushMatrix();
                                glScaled(0.9,0.82,0.8);
                                glTranslatef(0.02, -0.51, 0);
                                glRotatef(angleY[4], 0, 1, 0);
                                glTranslatef(0, 0, 0);
                                drawleftbornleg();
                                glPushMatrix();
                                    glScaled(0.5,0.5,0.5);
                                    glTranslatef(0.02, -0.1, 0);
                                    glRotatef(angleY[5], 1, 0, 0);
                                    glTranslatef(0, -1, 0);
                                    drawleftdownleg();
                                glPopMatrix();
                            glPopMatrix();
                        glPopMatrix();
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();

        glPopMatrix();

    glPopMatrix();

    glutSwapBuffers();
}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, -5.0f, 0.0f };///�[�o��, �������

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

void reshape (int w, int h){
    glViewport(0, 0, w, h); ///�]�w�����|�ݨ쪺�ϰ�
    float ar = w / (float) h; ///���e��B�e����
    glMatrixMode(GL_PROJECTION); ///������v�x�}
    glLoadIdentity();
    gluPerspective( 60, ar, 0.01, 100); ///�z����v
    glMatrixMode(GL_MODELVIEW); ///���� model view �x�}
    glLoadIdentity();
    gluLookAt(0, 0, -2,  0, 0, 0,  0, 1, 0);
}
int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutInitWindowSize(1024, 768); ///�o��i��������e
    glutCreateWindow("week13");
    glutDisplayFunc(display);
    id1 = myTexture("data/background.jpeg");
    glutIdleFunc(display); ///�[�o��, �������
    glutMouseFunc(mouse); ///�ƹ��I�U�h, �ƹ��즲, �ƹ����_��
    glutMotionFunc(motion); ///�ƹ�����
    glutKeyboardFunc(keyboard); ///week13-1�s�[��
    glutReshapeFunc(reshape);
    myMP3.Load("song.mp3");
    myMP3.Play();

    ///myTexture("data/Front0000.png");

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    glutMainLoop();
}
