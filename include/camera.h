#ifndef _GEOMETRIA_PROYECTIVA_CAMERA_H_
#define _GEOMETRIA_PROYECTIVA_CAMERA_H_

#include "math3d.h"

typedef struct {
    VECTOR3D position;
    VECTOR3D direction;
    VECTOR3D up;
    
    double aperture;    // in degrees
    int screenwidth,screenheight;
    
} CAMERA;


typedef struct {
    double left;
    double right;
    double bottom;
    double top;
    double nearValue;
    double farValue;
} FRUSTUM;

FRUSTUM makeFrustum(double fovX, double aspectRatio, double nearValue, double farValue);

// TODO
MATRIX4 lookAt(VECTOR3D eyePosition, VECTOR3D target, VECTOR3D upVector);


#endif
