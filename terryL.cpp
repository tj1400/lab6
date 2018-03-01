//
//
//
//
//program: asteroids.cpp
//author:  Gordon Griesel
//date:    2014 - 2018
//mod spring 2015: added constructors
//mod spring 2018: X11 wrapper class
//This program is a game starting point for a 3350 project.
//
#include "fonts.h"
#include <GL/glx.h>


void showName(const char *name, int x, int y)
{
    Rect r;
    r.bot = y;
    r.left = x;
    r.center = 1;
    ggprint8b(&r, 16, 0x00ffffff, "Terry Langhardt");
}

void drawBox(int xres, int yres)
{
    //draw the box
    static float angle = 0.0;
    glColor3ub(255, 0, 0);
    glPushMatrix();
    glTranslatef(xres/2, yres/2, 0);
    glRotatef(angle, 0.0f, 0.0f, 1.0f);
    glTranslatef(-50, -50, 0); 
    angle = angle + 1.5;
    glBegin(GL_QUADS);
    glVertex2f(0, 0);
    glVertex2f(0, 100);
    glVertex2f(100, 100);
    glVertex2f(100, 0);
    glEnd();

    showName("Terry Langhardt", 50, 50);
    glPopMatrix();
}
