/* 		Instructions:
** This kata is about multiplying a given number by eight if it is an even number and by nine otherwise. */

int simpleMultiplication(int a){
    //Your code
  return (a * (8 + (a % 2)));
}