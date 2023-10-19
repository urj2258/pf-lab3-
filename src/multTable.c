/**
 * Author: 
 * Date: 
 *
 * This program generates a multiplication table
 * of the size given as a command line argument.
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    printf("Error: provide an integer\n");
    exit(1);
  }

  int n = atoi(argv[1]);
  if(n <= 0) {
    printf("empty table!\n");
    exit(0);
  }

  //TODO: place your code here
int i,j,n;
  printf("      ");
  printf("enter the number you want the tables up to ");
    scanf("%4d", &n);

    for(j=1;j<=n;j++)
    {
      printf("%d", j);
    }
    printf("\n");

  return 0;
}