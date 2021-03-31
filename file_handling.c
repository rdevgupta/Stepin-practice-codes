#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void Reading_File(){
    FILE *fp=NULL;
    fp=fopen("D:\\Stepin practice codes\\file_dev.csv","r");
    if(fp==NULL){
        printf("File is not present\n");
        exit(-1);

    }
    else{
        char read[1024];
        int row=0;
        int column=0;
        while (fgets(read,1024,fp))
        {
            column=0;
            row++;
            if(row==1){
                continue;
            }
            char* value=strtok(read,",");
            while(value){
                if (column == 0) { 
                    printf("Name :"); 
                } 
  
                if (column == 1) { 
                    printf("\tEmail_ID :"); 
                } 
  
                if (column == 2) { 
                    printf("\tGithub_Link:"); 
                } 
  
                printf("%s", value); 
                value = strtok(NULL, ","); 
                column++; 
            }
        }
        printf("\n");  
    }
    fclose(fp);

}
int main(){
    Reading_File();
return 0;

}
