
#include<stdio.h>

int main()

{

int x,y,m,n,p,c = 0; 

printf("Enter number of rows \n");
scanf("%d", &m);

printf("Enter number of columns \n");
scanf("%d", &n);

int arr[m][n];

printf("Enter elments\n");
for (x = 0; x < m; x++)
{
    for (y = 0; y < n; y++)
    {
      scanf("%d", &arr[x][y]);
    }
}

printf("What letter are you lookiong for? ");
scanf("%d", &p);


for (x = 0; x < m; x++)
{
    for (y = 0; y < n; y++)
    {
        if (arr[x][y] == p)
        {
           printf("%d is present at (%d , %d) times in array.\n", p, x, y);
           c = 1;
        }
    }
}

if (c == 0)
    printf("%d is not present in array.\n", p);

return 0;
}

