#pragma once

#include <list>

#include "src/core/math/Vertex3f.h"
#include "src/core/math/TMatrix.h"
#include "src/core/objects/Object.h"
#include "src/core/objects/geometric/GSphere.h"
#include "src/core/intersect/intersect.h"

class SnowMan : public Object
{
  std::list<Object*> objs;
  Material* snow;
  Material* rock;
public:
  SnowMan(float x, float y, float z);
  ~SnowMan();

  void applyTransform(const TMatrix & param);

  float hitObject(Vertex3f & ray);
  float hitObject(Vertex3f & ray, Vertex3f & normal);
  float hitObject(Vertex3f & ray, Vertex3f & ret_n, Material * & ret_mat);

  Material* getMaterial();

  void print();
};
