

#include "../include/maths.h"




void addVec3(float v1[], float v2[])
{
    v1[0] + v2[0];
    v1[1] + v2[1];
    v1[2] + v2[2];
}

float* translate(float v1[], float m14x4[]) 
{
    m14x4[12] = v1[0];
    m14x4[13] = v1[1];
    m14x4[14] = v1[2];
    

    return m14x4;
}

float* scale(float v1[], float m14x4[])
{
    m14x4[0] = v1[0];
    m14x4[5] = v1[1];
    m14x4[10] = v1[2];

    return m14x4;
}


float* rotateX(float m14x4[], float radians)
{
    //x
    m14x4[5] = cosf(radians);
    m14x4[6] = -sinf(radians);
    m14x4[9] = sinf(radians);
    m14x4[10] = cosf(radians);
    

    return m14x4;
}

float* rotateY(float m14x4[], float radians)
{
    // y
    m14x4[0] = cosf(radians);
    m14x4[2] = sinf(radians);
    m14x4[8] = -sinf(radians);
    m14x4[10] = cosf(radians);

    return m14x4;
}

float* rotateZ(float m14x4[], float radians)
{
    // z
    m14x4[0] = cosf(radians);
    m14x4[1] = -sinf(radians);
    m14x4[4] = sinf(radians);
    m14x4[5] = cosf(radians);

    return m14x4;
    
}


float* frustamRH(float near, float far, float top, float bottom, float left, float right) // right handed frustam
{
    float* m14x4;

    m14x4[0]  = (2 * near) / (right - left);
    m14x4[2]  = (right + left) / (right - left);
    m14x4[5]  = (2 * near) / (top - bottom);
    m14x4[6]  = (top + bottom) / (top - bottom);
    m14x4[10] = -(far + near) / (far - near);
    m14x4[11] = -(2 * far * near) / (far - near);
    m14x4[14] = -1;


    return m14x4;
}

//todo: fix the issue with this function check the other functions, because the Z, X or Y coordnates ha to be placed differently
// ...than what they should've, so check that and check back here.
float* perspectiveRH(float fov, float aspect, float near, float far) 
{
    float* m14x4;

    m14x4[0] = 1 / (aspect * tanf(fov/2));
    m14x4[5] = 1 / (tanf(fov / 2));
    m14x4[10] = -(far + near) / (far - near);
    m14x4[11] = -((2 * far * near) / (near - far));
    m14x4[14] = -1;


    return m14x4;
}


float* orthographic(float near, float far, float top, float bottom, float left, float right)
{
    float* m14x4;

    // todo: create ortho matrix




    return m14x4;
}

