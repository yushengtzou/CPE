#include<iostream>
#include<cstdio>
#include<cmath>
#define ERROR 1e-8
using namespace std;

int main(){
  int N, temp, sqrt_N, product, sum, single;
  bool composite[60005] = { true, true };

  for( int i = 2 ; i <= 60000 ; i++ )
    if( !composite[i] )
      for( int j = i+i ; j <= 60000 ; j += i )
        composite[j] = true;


  printf( "PERFECTION OUTPUT\n" );
  while( scanf( "%d", &N ) != EOF && N != 0 ){
    int divisor[60005] = {0};
    temp = N;
    sqrt_N = (int)(sqrt(N) + ERROR);

    for( int i = 2 ; i <= sqrt_N ; i++ )
      if( !composite[i] )
        while( temp % i == 0 ){
          temp /= i;
          divisor[i]++;
        }

    product = 1;
    for( int i = 2 ; i <= sqrt_N ; i++ )
      if( divisor[i] ){
        sum = 1;
        single = 1;
        for( int j = 1 ; j <= divisor[i] ; j++ ){
          single *= i;
          sum += single;
        }
        product *= sum;
      }
    if( temp != 1 ) product *= temp+1;

    product -= N;
    printf( "%5d  ", N );
    if( product == N ) printf( "PERFECT\n" );
    else if( product > N ) printf( "ABUNDANT\n" );
    else printf( "DEFICIENT\n" );
  }
  printf( "END OF OUTPUT\n" );

  return 0;
}
