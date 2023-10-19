/**
 * Author(s):
 * Date:
 *
 * This is a series of exercises to introduce loop
 * control structures.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    fprintf(stderr, "Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1]);

  // A simple for loop that prints 0 thru 9
  for(int i=0; i<10; i++) {
    printf("%d\n", i);
  }

  //1. Rewrite the given for loop as an equivalent while loop
  int i = 1;
  while(i <= 20) {
    
    printf("%d ", i);
    i+=3;
  }
  printf("\n");

  //2. Rewrite the given while loop as an equivalent for loop
  for(int k = 3;k> -4;k--){
    printf("%d ", k);
    k--;
  }
  printf("\n");

  //3. Print numbers 1 thru n separated by a comma except for
  //   the last one; example: 1, 2, 3, 4, 5
  for(int l = 1; l <=n; l++){
    printf("%d",l);
    if(l!=n){
      printf(",");
    }
  }

  //4. Print squares of numbers 1 thru n separated by a comma
  //   except for the last one; example: 1, 4, 9, 16, 25
  for(int m = 1; m<=n; m++){
    m*=m;
    printf("%d",m);
    if (m!=n){
      printf(",");
    }
  }
  //5. Compute the summation of numbers 1 thru n and print
  //   the result; example: 1 + 2 + 3 + 4 + 5 = 15
  for (int o = 1; o <= n; o++){
    int p = 0;
    p += o;
    printf("%d",o);
  }

  //6. Compute the summation of squares of numbers 1 thru n
  //   and print the result; example: 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55
  int j;
       printf("enter a number:");
        scanf("%d", &j);

      for(int i=1;i<=j;i++)
      {
        int sum=0;
        sum=sum+(i*i);
        printf("sum=%d", sum);
      }
  //7. Compute the summation of even numbers 1 thru n and print
  //   the result; example (n=5): 2 + 4 = 6
int h;
 printf("enter a number:");
    scanf("%d", &h);

    for(int i=0;i<=h;i+=2)
    {
      int sum=0;
      sum=sum+i;
      printf("sum=%d", sum);
    }
  //8. Write a solution to the following variation of the FizzBuzz
  //   problem.  Print out integers 1 thru n, one to a line, except
  //   that if the integer is divisible by 7 print "Foo" instead.
  //   If the integer is divisible by 11 print "Bar" instead.  If
  //   the integer is divisible by both 7 and 11, print "FooBar"
  //   instead.
int g;
 printf("enter a number:");
    scanf("%d", &g);

    for(int i=1;i<=g;i++)
    {
      if(i%7==0)
      {
        printf("foo\n");
      }
      else if(i%11==0)
      {
        printf("bar\n");
      }
      else if(i%7==0 && i%11==0)
      {
        printf("foo bar\n");
      }
      else printf("%d", i);


    }
  return 0;
}
