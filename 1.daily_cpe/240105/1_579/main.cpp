#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
  int H, M;
  float H_angle, M_angle, angle;
  while( scanf( "%d:%d", &H, &M ) != EOF && (H || M) ){
    H_angle = H*30.0 + M/60.0 * 30.0;
    M_angle = M*6.0;
    angle = fabs( H_angle-M_angle );
    printf( "%.3f\n", (angle > 180.0)? 360.0 - angle : angle );
  }
  return 0;
}
