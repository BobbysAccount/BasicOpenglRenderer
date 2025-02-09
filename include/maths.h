#include <math.h>


void addVec3(float v1[], float v2[]);
void subtractVec3(float v1[], float v2[]);
void timesVec3(float v1[], float v2[]);
void divideVec3(float v1[], float v2[]);
float* translate(float v1[], float m14x4[]);
float* scale(float v1[], float m14x4[]);
float* rotateX(float m14x4[], float radians);
float* rotateY(float m14x4[], float radians);
float* rotateZ(float m14x4[], float radians);
float* frustamRH(float near, float far, float top, float bottom, float left, float right);
float* perspectiveRH(float fov, float aspect, float near, float far);
float* orthographic(float near, float far, float top, float bottom, float left, float right);