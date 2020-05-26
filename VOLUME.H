/* Volume.h. A header file to calculate some volumes */

#define PI 3.14
#define V_CUBE(side)    ((side)*(side)*(side))
#define V_BALL(rad)     (4*PI*(rad)*(rad)*(rad)/3)
#define V_CYL(rad,hi)   (PI*(rad)*(rad)*(hi))
#define V_CONE(rad,hi)  (V_CYL(rad,hi)/3)
