#include <stdio.h>
int main(){
int blank_num = 0;
int tab_num = 0;
int newline_num = 0;

char c;
//press control+D to get out of while loop!
while ((c = getchar()) != EOF)
{
    if (c == ' ')
    {
        blank_num++;
    }
    else if (c == '\t')
    {
        tab_num++;
    }
    else if (c == '\n')
    {
        newline_num++;
    }


}
    printf("blanks_nr: %d\ntabs_nr: %d\nnewlines_nr: %d\n",
         blank_num, tab_num, newline_num);
  return 0;
}

