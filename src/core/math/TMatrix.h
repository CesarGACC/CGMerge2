/*
	TMatrix Class - Transformation Matrix

	This class implements the matrices used to apply transformations on data structures.
	TODO:
	- Check whether a implementation using only one rotation (as done in OpenGL) is better
	than a rotation to each axis (as done now);
	- Implement Shear operation?
	- Check whether a implementation using stack-like transformations as done in OpenGL is
	better;

*/

#pragma once

#include <math.h>
#include <iostream>

class Vertex3f;
#include "src/core/math/Vertex3f.h"

class TMatrix
{

	void identity();
	float convertToRadians(float theta);
public:
	float matrix[4][4];

	TMatrix();
	~TMatrix();

	void scale(float x, float y, float z);
	void translate(float x, float y, float z);
	void rotateX(float theta);
	void rotateY(float theta);
	void rotateZ(float theta);
	void worldBasisToCoord(Vertex3f & coord_x, Vertex3f & coord_y, Vertex3f & coord_z, Vertex3f & coord_o);
	void coordBasisToWorld(Vertex3f & coord_x, Vertex3f & coord_y, Vertex3f & coord_z, Vertex3f & coord_o);

	TMatrix operator * (const TMatrix & param);

	void print();

};
