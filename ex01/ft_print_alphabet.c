# include <unistd.h>

void ft_print_alphabet(void){
    char letter = 'a';

    for(int i=0; i<26; i++) {
        char letter_to_print = letter + i;
        write(1, &letter_to_print, 1);
    }
}