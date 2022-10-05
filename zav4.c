#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, n=5, sw, index, tempnum, tempsize, tempindex=0;
  int *mass=(int*)calloc(n, sizeof(int));
  int *tempmass;
  while(1){
    printf("1)Add\n2)Insert\n3)Size\n4)Remove\n5)Set\n6)Get\n0)Print\n");
    scanf("%d", &sw);
    switch(sw){
      case 0:
        for(i=0; i<n; i++){
          printf("%d: %d\n", i, mass[i]);
        }
      break;
      case 1:
        printf("Enter an integer value\n");
        scanf("%d", &tempnum);
        for(i=0; i<n; i++){
          if(i == n-1 && mass[i] != 0){
            n=n*2;
            tempmass=(int*)calloc(n, sizeof(int));
            for(i=0; i<n/2; i++){
              tempmass[i] = mass[i];
            }
            mass=(int*)calloc(n, sizeof(int));
            for(i=0; i<n; i++){
              mass[i] = tempmass[i];
            }
            break;
          }
        }
        for(i = 0; i < n; i++){
          if(mass[i]==0 && i>=tempindex){
            mass[i]=tempnum;
            tempindex=i;
            break;
          }
        }
        break;
      case 2:
        printf("Enter Index\n");
        scanf("%d", &index);
        printf("Enter an integer value\n");
        scanf("%d", &tempnum);
        int tempsize;
        for(i = 0; i < n; i++){
          if(i == n-1 && mass[i] != 0){
            n=n*2;
            tempmass=(int*)calloc(n, sizeof(int));
            for(i=0; i<n/2; i++){
              tempmass[i] = mass[i];
            }
            mass=(int*)calloc(n, sizeof(int));
            for(i=0; i<n; i++){
              mass[i] = tempmass[i];
            }
            break;
          }
        }
        for(i=n; i>index; i--){
          mass[i]=mass[i-1];
        }
        mass[index]=tempnum;
        break;
      case 3:
        printf("ArrayList size: %d\n", n);
        break;
      case 4:
        printf("Enter Index\n");
        scanf("%d", &index);
        mass[index]=0;
        break;
      case 5:
        printf("Enter Index\n");
        scanf("%d", &index);
        printf("Enter an integer value\n");
        scanf("%d", &tempnum);
        mass[index]=tempnum;
        break;
      case 6:
        printf("Enter Index\n");
        scanf("%d", &index);
        printf("%d: %d\n", index, mass[index]);
        break;
      
      default: printf("From 0 to 6");
    }
  }
  return 0;
}
