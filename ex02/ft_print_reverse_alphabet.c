# include <unistd.h>

void ft_print_reverse_alphabet(void){
    char last_letter = 'z';

    for(int i=0; i<26; i++) {
        char letter_to_display = last_letter - i;
        write(1, &letter_to_display, 1);
    }

    char newline = '\n';
    write(1, &newline, 1);
}