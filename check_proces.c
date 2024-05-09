// abrir directorio proc y recorrer todos los subcomandos
#include <stdio.h>
#include <stdlib.h>
// ctype.h
// dirent.h

void get_process_cmd(char *directory, char *proc_name);
int main()
{
    char proc_dir[] = "/proc";
    char cmdline[] = "";
    struct dirent *pDirent;
    DIR *pDir = opendir(proc_dir);

    while(entry=readdir(pDir)!=NULL){
        if(!isdigit(entry->d_name[0])){
            get_process_cmd(entry->dname, cmdline);
            printf("%s: %s", entry->d_name, cmdline);
        }
    }
}

void get_process_cmd(char *directory, *pname){
    FILE *fp;
}