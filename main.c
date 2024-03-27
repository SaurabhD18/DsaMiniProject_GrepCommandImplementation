#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include"grep.h"


int cflag = 0, hflag = 0, iflag = 0, lflag = 0, nflag = 0, vflag = 0, fflag = 0, wflag = 0, oflag = 0, dflag = 0, eflag = 0, xflag = 0;

int main(int argc, char*argv[]){
    int opt;
    int i_f = 0, i_p = 0, len_f = 0, len_p = 0;
    char* patterns[10];
    char* filenames[10];
    if(strcmp(argv[2], "--help") == 0){
            print_usage();
    }
    else if (argc < 3){
        printf("GREP: Improper number of arguments\nType grep--help for usage instructions\n");
        return 1;
    }
    else{
        while((opt = getopt(argc, argv, "dchilnvwox?d:e"))!= -1){
            switch(opt){
            case 'd':
                dflag = 1;
                break;
            case 'c':
                cflag = 1;
                break;
            case 'h':
                hflag = 1;
                break;
            case 'i':
                iflag = 1;
                break;
            case 'l':
                lflag = 1;
                break;
            case 'n':
                nflag = 1;
                break;
            case 'v':
                vflag = 1;
                break;
            case 'w':
                wflag = 1;
                break;
            case 'o':
                oflag = 1;
                break;
            case 'e':
                eflag = 1;
                break;
            case 'x':
                xflag = 1;
                break;
            case '?':
                printf("Unknown Command: grep\nType grep--help for usage instructions\n\n");
                cflag++;
                break;
            default:
                printf("Unknown option\nType grep--help for usage instructions\n ");
            }
        }

        for(; optind < argc; optind++){
            char* argument = argv[optind];
            if(isFile(argument)){
                filenames[i_f] = argument;
                i_f++;
            }
            else{
                patterns[i_p] = argument;
                i_p++;
            }
        }
        //Length of Pattern and File arrays
        len_f = i_f;
        len_p = i_p;

        //-d = default grep command
        if(dflag != 0){
            i_p = i_f = 0;
            printf("\n-d : Default Grep Command\n");
            while(i_p < len_p){
                i_f = 0;
                while(i_f < len_f){
                    printf("\nOccurrence of '%s' in file: %s -\n", patterns[i_p], filenames[i_f]);
                    d_grep(filenames[i_f], patterns[i_p]);
                    i_f++;
                }
                i_p++;
                printf("\n");
            }
        }
        return 0;
    }

}
