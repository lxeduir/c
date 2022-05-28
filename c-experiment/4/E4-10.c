#include <stdio.h>
#include <stdlib.h>
#define N  5                                                                                                                                     
     typedef struct                                                                                                                           
    {                                                                                                                                           
        int num;                                                                                                                                
        char name[10];                                                                                                                          
        char tel[10];                                                                                                                           
    } STYPE;                                                                                                                                    
    void check();                                                                                                
    int fun(STYPE *std)                                                                                                                       
    {                                                                                                              
        FILE *fp;                                                                                                                            
        int i;                                                                                                                                  
        if ((fp = fopen("myfile2.dat", "wb")) == NULL)                                                                                          
            return (0);                                                                                                                         
        printf("\nOutput data to file !\n");                                                                                                   
        for (i = 0; i < N; i++)                                                                                   
            fwrite(&std[i], sizeof(STYPE), 1, fp);                                                                                         
        fclose(fp);                                                                                                                            
        return (1);                                                                                                                             
    }                                                                                                                                           
    void main()                                                                                                                                 
    {                                                                                                                                           
        STYPE s[10] = {{1, "aaaaa", "111111"}, {2, "bbbbb", "222222"}, {3, "ccccc", "333333"}, {4, "ddddd", "444444"}, {5, "eeeee", "555555"}}; 
        int k;                                                                                                                                  \
        k = fun(s);                                                                                                                             
        if (k == 1)                                                                                                                             
        {                                                                                                                                       
            printf("Succeed!");                                                                                                                 
            check();                                                                                                                            
        }                                                                                                                                       
        else printf("Fail!");
 }
void check()
{
    FILE *fp;
    int i;
    STYPE s[10];
    if ((fp = fopen("myfile2.dat", "rb")) == NULL)
    {
        printf("Fail !!\n");
        exit(0);
    }
    printf("\nRead file and output to screen :\n");
    printf("\n num name tel\n");
    for (i = 0; i < N; i++)
    {
        fread(&s[i], sizeof(STYPE), 1, fp);
        printf("%6d %s %s\n", s[i].num, s[i].name, s[i].tel);
    }
    fclose(fp);
}