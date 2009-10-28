//
// Table/constant generation for mathematical transcendentals:
//
// qtype_loglogbesseli0:
//      qtype_loglogbesseli0_r1     :   region 1 boundary
//      qtype_loglogbesseli0_r2     :   region 2 boundary
//      qtype_loglogbesseli0_p1[4]  :   polynomial, region 1
//      qtype_loglogbesseli0_p2[4]  :   polynomial, region 2
//      qtype_loglogbesseli0_p3[4]  :   polynomial, region 3
//

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#include "liquidfpm.h"

#define Q(name)     LIQUIDFPM_CONCAT(q32,name)

int main() {
    FILE * fid = stdout;
    char qtype[] = "q32";

    fprintf(fid,"// auto-generated file : do not edit\n");
    fprintf(fid,"\n");
    fprintf(fid,"#include \"liquidfpm.internal.h\"\n");
    fprintf(fid,"\n");

    // 
    // qtype_loglogbesseli0
    //
    float loglogbesseli0_r1 = -0.5f;
    float loglogbesseli0_r2 =  2.3f;
    float loglogbesseli0_p1[4] = {-7.04705162125710e-04f, -9.42874618538680e-03f, 1.95971055243802e+00f,-1.52624072974733e+00};
    float loglogbesseli0_p2[4] = {-0.0133336423648824f,   -0.0797229969889246f,   1.8935752640799495f,  -1.5530587194031322};
    float loglogbesseli0_p3[4] = { 0.00634111260763038f,  -0.11754582272034697f,  1.76929064812301462f, -1.29581201808317714};
    fprintf(fid,"// qtype_loglogbesseli0\n");
    fprintf(fid,"const %s_t %s_loglogbesseli0_r1 = 0x%.8x;\n", qtype,qtype, Q(_float_to_fixed)(loglogbesseli0_r1));
    fprintf(fid,"const %s_t %s_loglogbesseli0_r2 = 0x%.8x;\n", qtype,qtype, Q(_float_to_fixed)(loglogbesseli0_r2));
    fprintf(fid,"%s_t %s_loglogbesseli0_p1[4] = {0x%.8x, 0x%.8x, 0x%.8x, 0x%.8x};\n",
            qtype,qtype,
            Q(_float_to_fixed)(loglogbesseli0_p1[0]),
            Q(_float_to_fixed)(loglogbesseli0_p1[1]),
            Q(_float_to_fixed)(loglogbesseli0_p1[2]),
            Q(_float_to_fixed)(loglogbesseli0_p1[3]));
    fprintf(fid,"%s_t %s_loglogbesseli0_p2[4] = {0x%.8x, 0x%.8x, 0x%.8x, 0x%.8x};\n",
            qtype,qtype,
            Q(_float_to_fixed)(loglogbesseli0_p2[0]),
            Q(_float_to_fixed)(loglogbesseli0_p2[1]),
            Q(_float_to_fixed)(loglogbesseli0_p2[2]),
            Q(_float_to_fixed)(loglogbesseli0_p2[3]));
    fprintf(fid,"%s_t %s_loglogbesseli0_p3[4] = {0x%.8x, 0x%.8x, 0x%.8x, 0x%.8x};\n",
            qtype,qtype,
            Q(_float_to_fixed)(loglogbesseli0_p3[0]),
            Q(_float_to_fixed)(loglogbesseli0_p3[1]),
            Q(_float_to_fixed)(loglogbesseli0_p3[2]),
            Q(_float_to_fixed)(loglogbesseli0_p3[3]));


    return 0;
}
