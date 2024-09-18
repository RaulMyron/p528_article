#include "../../include/p676.h"

/*=============================================================================
 |
 |       Author:  William Kozma Jr
 |                wkozma@ntia.gov
 |                US Dept of Commerce, NTIA/ITS
 |                May/June 2022 : Geneva Study Group 3 Meetings
 |
 *===========================================================================*/

// Spectroscopic data for oxygen attenuation (Table 1)

// 
const vector<double> OxygenData::f_0 =
{
     50.474214,  50.987745,  51.503360,  52.021429,  52.542418,  53.066934,  53.595775,
     54.130025,  54.671180,  55.221384,  55.783815,  56.264774,  56.363399,  56.968211,
     57.612486,  58.323877,  58.446588,  59.164204,  59.590983,  60.306056,  60.434778,
     61.150562,  61.800158,  62.411220,  62.486253,  62.997984,  63.568526,  64.127775,
     64.678910,  65.224078,  65.764779,  66.302096,  66.836834,  67.369601,  67.900868,
     68.431006,  68.960312, 118.750334, 368.498246, 424.763020, 487.249273,
    715.392902, 773.839490, 834.145546
};

const vector<double> OxygenData::a_1 =
{
       0.975,    2.529,    6.193,   14.320,   31.240,   64.290,  124.600,  227.300,
     389.700,  627.100,  945.300,  543.400, 1331.800, 1746.600, 2120.100, 2363.700,
    1442.100, 2379.900, 2090.700, 2103.400, 2438.000, 2479.500, 2275.900, 1915.400,
    1503.000, 1490.200, 1078.000,  728.700,  461.300,  274.000,  153.000,   80.400,
      39.800,   18.560,    8.172,    3.397,    1.334,  940.300,   67.400,  637.700,
     237.400,   98.100,  572.300,  183.100
};

const vector<double> OxygenData::a_2 =
{
    9.651, 8.653, 7.709, 6.819, 5.983, 5.201, 4.474, 3.800, 3.182, 2.618, 2.109,
    0.014, 1.654, 1.255, 0.910, 0.621, 0.083, 0.387, 0.207, 0.207, 0.386, 0.621,
    0.910, 1.255, 0.083, 1.654, 2.108, 2.617, 3.181, 3.800, 4.473, 5.200, 5.982,
    6.818, 7.708, 8.652, 9.650, 0.010, 0.048, 0.044, 0.049, 0.145, 0.141, 0.145
};

const vector<double> OxygenData::a_3 =
{
     6.690,  7.170,  7.640,  8.110,  8.580,  9.060,  9.550,  9.960, 10.370,
    10.890, 11.340, 17.030, 11.890, 12.230, 12.620, 12.950, 14.910, 13.530,
    14.080, 14.150, 13.390, 12.920, 12.630, 12.170, 15.130, 11.740, 11.340,
    10.880, 10.380,  9.960,  9.550,  9.060,  8.580,  8.110,  7.640,  7.170,
     6.690, 16.640, 16.400, 16.400, 16.000, 16.000, 16.200, 14.700
};

const vector<double> OxygenData::a_4 =
{
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0
};

const vector<double> OxygenData::a_5 =
{
     2.566,  2.246,  1.947,  1.667,  1.388,  1.349,  2.227,  3.170,  3.558,  2.560,
    -1.172,  3.525, -2.378, -3.545, -5.416, -1.932,  6.768, -6.561,  6.957, -6.395,
     6.342,  1.014,  5.014,  3.029, -4.499,  1.856,  0.658, -3.036, -3.968, -3.528,
    -2.548, -1.660, -1.680, -1.956, -2.216, -2.492, -2.773, -0.439,  0.000,  0.000,
     0.000,  0.000,  0.000,  0.000
};

const vector<double> OxygenData::a_6 =
{
     6.850,  6.800,  6.729,  6.640,  6.526,  6.206,  5.085,  3.750,  2.654,  2.952,
     6.135, -0.978,  6.547,  6.451,  6.056,  0.436, -1.273,  2.309, -0.776,  0.699,
    -2.825, -0.584, -6.619, -6.759,  0.844, -6.675, -6.139, -2.895, -2.590, -3.680,
    -5.002, -6.091, -6.393, -6.475, -6.545, -6.600, -6.650,  0.079,  0.000,  0.000,
     0.000,  0.000,  0.000,  0.000
};