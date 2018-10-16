/*
	Object Class - Abstract
*/

#pragma once

#include "src/core/math/TMatrix.h"
#include "src/core/math/Vertex3f.h"
#include "src/core/color/Color.h"
#include "src/core/material/Material.h"

class Object
{

public:
	Object();
	~Object();

	virtual void applyTransform(const TMatrix & param)=0;
	virtual float hitObject(Vertex3f & ray)=0;
	virtual float hitObject(Vertex3f & ray, Vertex3f & normal)=0;
	virtual float hitObject(Vertex3f & ray, Vertex3f & ret_n, Material * & ret_mat)=0;

	virtual Material* getMaterial()=0;
	virtual void print()=0;
};
