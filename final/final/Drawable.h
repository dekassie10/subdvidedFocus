#ifndef __DRAWABLE_H__
#define __DRAWABLE_H__
#include "Angel.h"
#include "Camera.h"
#include "Light.h"
#include <vector>

using namespace std;

class Drawable {
protected:
	GLuint program;
	GLuint VAO;
	GLuint VBO;
	mat4 modelmatrix;
	
public:
	virtual void draw(Camera, vector<Light>)=0;
	void setModelMatrix(mat4 mm) { modelmatrix = mm; }
	static unsigned char* ppmRead(char* filename, int* width, int* height);
	virtual ~Drawable() = 0;
};

#endif