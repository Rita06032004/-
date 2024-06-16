#include <opencv/highgui.h>
#include <opencv/cv.h>
#include <GL/glut.h>
#include "CMP3_MCI.txt" ///雙引號, 很像之前 glm.h
CMP3_MCI myMP3; ///宣告一個物件變數
int id1, id2;
int myTexture(char * filename)
{
    IplImage * img = cvLoadImage(filename);
    cvCvtColor(img,img, CV_BGR2RGB);
    glEnable(GL_TEXTURE_2D);
    GLuint id;
    glGenTextures(1, &id);
    glBindTexture(GL_TEXTURE_2D, id);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, img->width, img->height, 0, GL_RGB, GL_UNSIGNED_BYTE, img->imageData);
    return id;
}
#include <GL/glut.h>
#include "glm.h"
GLMmodel * head = NULL;
GLMmodel * neck = NULL;
GLMmodel * body = NULL;
GLMmodel * butt = NULL;
GLMmodel * aa = NULL;
GLMmodel * bb = NULL;
GLMmodel * cc = NULL;
GLMmodel * dd = NULL;
GLMmodel * ee = NULL;
GLMmodel * ff = NULL;
GLMmodel * gg = NULL;
GLMmodel * hh = NULL;
GLMmodel * ii = NULL;
GLMmodel * jj = NULL;
GLMmodel * kk = NULL;
GLMmodel * ll = NULL;
GLMmodel * mm = NULL;
GLMmodel * nn = NULL;
GLMmodel * oo = NULL;
GLMmodel * pp = NULL;
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
void drawneck(void)
{
    if (!neck) {
	neck = glmReadOBJ("data/neck.obj");
	if (!neck) exit(0);
	glmUnitize(neck);
	glmFacetNormals(neck);
	glmVertexNormals(neck, 90.0);
    }

    glmDraw(neck, GLM_SMOOTH | GLM_MATERIAL);
}
void drawbody(void)
{
    if (!body) {
	body = glmReadOBJ("data/body.obj");
	if (!body) exit(0);
	glmUnitize(body);
	glmFacetNormals(body);
	glmVertexNormals(body, 90.0);
    }

    glmDraw(body, GLM_SMOOTH | GLM_MATERIAL);
}
void drawbutt(void)
{
    if (!butt) {
	butt = glmReadOBJ("data/butt.obj");
	if (!butt) exit(0);
	glmUnitize(butt);
	glmFacetNormals(butt);
	glmVertexNormals(butt, 90.0);
    }

    glmDraw(butt, GLM_SMOOTH | GLM_MATERIAL);
}
void drawaa(void)
{
    if (!aa) {
	aa = glmReadOBJ("data/aa.obj");
	if (!aa) exit(0);
	glmUnitize(aa);
	glmFacetNormals(aa);
	glmVertexNormals(aa, 90.0);
    }

    glmDraw(aa, GLM_SMOOTH | GLM_MATERIAL);
}
void drawbb(void)
{
    if (!bb) {
	bb = glmReadOBJ("data/bb.obj");
	if (!bb) exit(0);
	glmUnitize(bb);
	glmFacetNormals(bb);
	glmVertexNormals(bb, 90.0);
    }

    glmDraw(bb, GLM_SMOOTH | GLM_MATERIAL);
}
void drawcc(void)
{
    if (!cc) {
	cc = glmReadOBJ("data/cc.obj");
	if (!cc) exit(0);
	glmUnitize(cc);
	glmFacetNormals(cc);
	glmVertexNormals(cc, 90.0);
    }

    glmDraw(cc, GLM_SMOOTH | GLM_MATERIAL);
}
void drawdd(void)
{
    if (!dd) {
	dd = glmReadOBJ("data/dd.obj");
	if (!dd) exit(0);
	glmUnitize(dd);
	glmFacetNormals(dd);
	glmVertexNormals(dd, 90.0);
    }

    glmDraw(dd, GLM_SMOOTH | GLM_MATERIAL);
}
void drawee(void)
{
    if (!ee) {
	ee = glmReadOBJ("data/ee.obj");
	if (!ee) exit(0);
	glmUnitize(ee);
	glmFacetNormals(ee);
	glmVertexNormals(ee, 90.0);
    }

    glmDraw(ee, GLM_SMOOTH | GLM_MATERIAL);
}
void drawff(void)
{
    if (!ff) {
	ff = glmReadOBJ("data/ff.obj");
	if (!ff) exit(0);
	glmUnitize(ff);
	glmFacetNormals(ff);
	glmVertexNormals(ff, 90.0);
    }

    glmDraw(ff, GLM_SMOOTH | GLM_MATERIAL);
}
void drawgg(void)
{
    if (!gg) {
	gg = glmReadOBJ("data/gg.obj");
	if (!gg) exit(0);
	glmUnitize(gg);
	glmFacetNormals(gg);
	glmVertexNormals(gg, 90.0);
    }

    glmDraw(gg, GLM_SMOOTH | GLM_MATERIAL);
}
void drawhh(void)
{
    if (!hh) {
	hh = glmReadOBJ("data/hh.obj");
	if (!hh) exit(0);
	glmUnitize(hh);
	glmFacetNormals(hh);
	glmVertexNormals(hh, 90.0);
    }

    glmDraw(hh, GLM_SMOOTH | GLM_MATERIAL);
}
void drawii(void)
{
    if (!ii) {
	ii = glmReadOBJ("data/ii.obj");
	if (!ii) exit(0);
	glmUnitize(ii);
	glmFacetNormals(ii);
	glmVertexNormals(ii, 90.0);
    }

    glmDraw(ii, GLM_SMOOTH | GLM_MATERIAL);
}
void drawjj(void)
{
    if (!jj) {
	jj = glmReadOBJ("data/jj.obj");
	if (!jj) exit(0);
	glmUnitize(jj);
	glmFacetNormals(jj);
	glmVertexNormals(jj, 90.0);
    }

    glmDraw(jj, GLM_SMOOTH | GLM_MATERIAL);
}
void drawkk(void)
{
    if (!kk) {
	kk = glmReadOBJ("data/kk.obj");
	if (!kk) exit(0);
	glmUnitize(kk);
	glmFacetNormals(kk);
	glmVertexNormals(kk, 90.0);
    }

    glmDraw(kk, GLM_SMOOTH | GLM_MATERIAL);
}
void drawll(void)
{
    if (!ll) {
	ll = glmReadOBJ("data/ll.obj");
	if (!ll) exit(0);
	glmUnitize(ll);
	glmFacetNormals(ll);
	glmVertexNormals(ll, 90.0);
    }

    glmDraw(ll, GLM_SMOOTH | GLM_MATERIAL);
}
void drawmm(void)
{
    if (!mm) {
	mm = glmReadOBJ("data/mm.obj");
	if (!mm) exit(0);
	glmUnitize(mm);
	glmFacetNormals(mm);
	glmVertexNormals(mm, 90.0);
    }

    glmDraw(mm, GLM_SMOOTH | GLM_MATERIAL);
}
void drawnn(void)
{
    if (!nn) {
	nn = glmReadOBJ("data/nn.obj");
	if (!nn) exit(0);
	glmUnitize(nn);
	glmFacetNormals(nn);
	glmVertexNormals(nn, 90.0);
    }

    glmDraw(nn, GLM_SMOOTH | GLM_MATERIAL);
}
void drawoo(void)
{
    if (!oo) {
	oo = glmReadOBJ("data/oo.obj");
	if (!oo) exit(0);
	glmUnitize(oo);
	glmFacetNormals(oo);
	glmVertexNormals(oo, 90.0);
    }

    glmDraw(oo, GLM_SMOOTH | GLM_MATERIAL);
}
void drawpp(void)
{
    if (!pp) {
	pp = glmReadOBJ("data/pp.obj");
	if (!pp) exit(0);
	glmUnitize(pp);
	glmFacetNormals(pp);
	glmVertexNormals(pp, 90.0);
    }

    glmDraw(pp, GLM_SMOOTH | GLM_MATERIAL);
}
///float angle = 0, da = 1; ///加這行, 讓它轉動
float angleX [20] = {}; ///20個角度都設成0
float angleY [20] = {};
int angleID = 0; ///可以是角度0、角度1、角度2、......
int oldX = 0, oldY = 0;
#include <stdio.h>
FILE * fin = NULL;
FILE * fout = NULL;
void motion(int x, int y){ ///加入mouse motion 對應的函式
        angleX [angleID] += y - oldY;
        angleY [angleID] -= x - oldX;
        oldX = x;
        oldY = y;
        glutPostRedisplay(); ///要重畫畫面

    }

void mouse (int button, int state, int x, int y){
    oldX = x;
    oldY = y;
}
float oldAngleX[20] = {}, newAngleX[20] = {};
float oldAngleY[20] = {}, newAngleY[20] = {};
void timer(int t) {
    glutTimerFunc(50, timer, t+1);
    if(t%20==0) {
        if(fin==NULL) fin = fopen("angle.txt", "r");
        for(int i=0; i<20; i++){ ///針對20個關節
            ///oldAngle[i] = newAngle[i];
            oldAngleX[i] = newAngleX[i];
            oldAngleY[i] = newAngleY[i];
            ///fscanf(fin, "%f", & newAngle[i] );
            fscanf(fin, "%f", & newAngleX[i] );
            fscanf(fin, "%f", & newAngleY[i] );
        }
    }
    float alpha = (t%20) / 20.0;
    for(int i=0; i<20; i++){ ///針對20個關節
        angleX[i] = newAngleX[i]*alpha + oldAngleX[i]*(1-alpha);
        angleY[i] = newAngleY[i]*alpha + oldAngleY[i]*(1-alpha);
    }
    glutPostRedisplay();
}
void keyboard (unsigned char key, int x, int y){
    if(key=='p')
    { ///Play播放
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
    ///新加
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

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glEnable(GL_TEXTURE_2D);
    glBegin(GL_POLYGON);
        glTexCoord2f(0, 0); glVertex3f(-1, +1, 0.5);
        glTexCoord2f(0, 1); glVertex3f(-1, -1, 0.5);
        glTexCoord2f(1, 1); glVertex3f(+1, -1, 0.5);
        glTexCoord2f(1, 0); glVertex3f(+1, +1, 0.5);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    glPushMatrix();///head
        glRotatef(angleY[0], 0, 1, 0);
        glRotatef(180, 0, 1, 0);
        glScaled(1,1,1);
        glTranslatef(0,0.8,0);
        drawhead();
        glPushMatrix();///neck
            glTranslatef(0,-0.87,0);
            glRotatef(angleY[1], 0, 1, 0);
            glScaled(0.9,0.9,0.9);
            glTranslatef(0,0.8,0);
            drawneck();
            glPushMatrix();///body
                glTranslatef(0,-0.85,0);
                glRotatef(angleX[1], 0, 1, 0);
                glScaled(0.8,0.8,0.8);
                glTranslatef(0,0.8,0);
                drawbody();
                glPushMatrix();///aa
                    glTranslatef(-0.3,0.115,0);
                    glRotatef(angleX[2], 1, 0, 0);
                    glScaled(0.9,0.9,0.9);
                    glTranslatef(0,-0.05,0);
                    drawaa();
                    glPushMatrix();///bb
                        glTranslatef(-0.14,-0.1,0);
                        glRotatef(angleX[3], 0, 1, 0);
                        glScaled(0.9,0.9,0.9);
                        glTranslatef(0,-0.05,0);
                        drawbb();
                        glPushMatrix();///cc
                            glTranslatef(-0.08,-0.07,0);
                            glRotatef(angleY[4], 1, 0, 0);
                            glScaled(0.7,0.7,0.7);
                            glTranslatef(0,-0.18,0);
                            drawcc();
                            glPushMatrix();///dd
                                glTranslatef(-0.1,-1,0);
                                glRotatef(angleX[5], 0, 1, 0);
                                glScaled(0.9,0.9,0.9);
                                glTranslatef(0,0.8,0);
                                drawdd();
                            glPopMatrix();///dd
                        glPopMatrix();///cc
                    glPopMatrix();///bb
                glPopMatrix();///aa
                glPushMatrix();///butt
                    glTranslatef(0,-0.95,0);
                    glRotatef(angleX[0], 0, 1, 0);
                    glScaled(0.9,0.9,0.9);
                    glTranslatef(0,0.8,0);
                    drawbutt();
                    glPushMatrix();///mm
                        glTranslatef(0.15,-0.7,0);
                        glRotatef(angleY[8], 0, 1, 0);
                        glScaled(0.6,0.6,0.6);
                        glTranslatef(0.1,0.6,0);
                        drawmm();
                        glPushMatrix();///nn
                            glTranslatef(0.14,-0.9,0);
                            glRotatef(angleX[9], 0, 1, 0);
                            glScaled(0.6,0.6,0.6);
                            glTranslatef(0,0.8,0);
                            drawnn();
                            glPushMatrix();///oo
                                glTranslatef(0, -0.25,0);
                                glRotatef(angleX[6], 1, 0, 0);
                                glScaled(0.5,0.8,0.5);
                                glTranslatef(0,-0.8,0);
                                drawoo();
                                glPushMatrix();///pp
                                    glTranslatef(0.1,-1.8,0);
                                    glRotatef(angleX[7], 0, 1, 0);
                                    glScaled(1.5,0.9,0.9);
                                    glTranslatef(0.1,0.8,0);
                                    drawpp();
                                glPopMatrix();///pp
                            glPopMatrix();///oo
                        glPopMatrix();///nn
                    glPopMatrix();///mm
                    glPushMatrix();///ii
                        glTranslatef(-0.15,-0.7,0);
                        glRotatef(angleX[8], 0, 1, 0);
                        glScaled(0.6,0.6,0.6);
                        glTranslatef(-0.1,0.6,0);
                        drawii();
                        glPushMatrix();///jj
                            glTranslatef(-0.14,-0.9,0);
                            glRotatef(angleX[9], 0, 1, 0);
                            glScaled(0.6,0.6,0.6);
                            glTranslatef(0,0.8,0);
                            drawjj();
                            glPushMatrix();///kk
                                glTranslatef(0,-1.5,0);
                                glRotatef(angleY[6], 0, 1, 0);
                                glScaled(0.5,0.8,0.5);
                                glTranslatef(0,0.8,0);
                                drawkk();
                                glPushMatrix();///ll
                                    glTranslatef(-0.1,-1.8,0);
                                    glRotatef(angleX[7], 0, 1, 0);
                                    glScaled(1.5,0.9,0.9);
                                    glTranslatef(-0.1,0.8,0);
                                    drawll();
                                glPopMatrix();///ll
                            glPopMatrix();///kk
                        glPopMatrix();///jj
                    glPopMatrix();///ii
                glPopMatrix();///butt
                glPushMatrix();///ee
                    glTranslatef(0.3,0.115,0);
                    glRotatef(angleY[2], 1, 0, 0);
                    glScaled(0.9,0.9,0.9);
                    glTranslatef(0,-0.05,0);
                    drawee();
                    glPushMatrix();///ff
                        glTranslatef(0.14,-0.1,0);
                        glRotatef(angleY[3], 1, 0, 0);
                        glScaled(0.9,0.9,0.9);
                        glTranslatef(0,-0.05,0);
                        drawff();
                        glPushMatrix();///gg
                            glTranslatef(0.08,-0.07,0);
                            glRotatef(angleX[4], 1, 0, 0);
                            glScaled(0.7,0.7,0.7);
                            glTranslatef(0,-0.18,0);
                            drawgg();
                            glPushMatrix();///hh
                                glTranslatef(0.1,-1,0);
                                glRotatef(angleY[5], 0, 1, 0);
                                glScaled(0.9,0.9,0.9);
                                glTranslatef(0,0.8,0);
                                drawhh();
                            glPopMatrix();///hh
                        glPopMatrix();///gg
                    glPopMatrix();///ff
                glPopMatrix();///ee
            glPopMatrix();///body
        glPopMatrix();///neck
    glPopMatrix();///head

    glutSwapBuffers();
}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, -5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };
void reshape (int w, int h){
    glViewport(0, 0, w, h); ///設定視窗會看到的區域
    float ar = w / (float) h; ///長寬比、寬長比
    glMatrixMode(GL_PROJECTION); ///切換投影矩陣
    glLoadIdentity();
    gluPerspective( 60, ar, 0.01, 100); ///透視投影

    glMatrixMode(GL_MODELVIEW); ///切換 model view 矩陣
    glLoadIdentity();
    gluLookAt(0, 0, -2,  0, 0, 0,  0, 1, 0);
}
int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutInitWindowSize(1080, 768); ///這行可改視窗長寬
    glutCreateWindow("week13");
    glutDisplayFunc(display);
    id1 = myTexture("data/shop.png");
    glutIdleFunc(display); ///加這行, 讓它轉動
    glutMouseFunc(mouse); ///滑鼠點下去, 滑鼠拖曳, 滑鼠拿起來
    glutMotionFunc(motion); ///滑鼠控制
    glutKeyboardFunc(keyboard); ///week13-1新加的
    glutReshapeFunc(reshape);
    myMP3.Load("song.mp3");
    myMP3.Play();



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
