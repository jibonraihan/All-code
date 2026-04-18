#include <stdio.h>

int main()
{
    int r, c, i, j;
    scanf("%d%d", &r, &c);

    int ar[r][c];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &ar[i][j]);
    
    int idx1,idx2;
    scanf("%d%d", &idx1, &idx2);

    int dx[4]={-1, -1, 1, 1}; // konakuni
    int dy[4]={-1, 1, -1, 1}; //konakuni
    // int dx[4]={0,0,-1,1}; //up down right left
    // int dy[4]={1,-1,0,0}; // up down right left

    int sum=0;
    for(i=0; i<4; i++)
    {
        int new_r=idx1+dx[i];
        int new_c=idx2+dy[i];

        if((new_r>=0 && new_r<5) && (new_c>=0 && new_c<5))
        sum+=ar[new_r][new_c];
    
    }
    printf("%d", sum);
    return 0;
}