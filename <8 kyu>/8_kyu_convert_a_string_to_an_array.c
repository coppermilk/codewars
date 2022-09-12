//{to do
#include <stdlib.h>
#include <string.h>


size_t count_words (const char *words)
{

    int i = 0;
    int wrd = 1;
    if(!words){
        return 0;
    }
    while (words[i]){
        if(words[i] == ' ' || words[i] == '\n' || words[i] == '\t'){
            ++wrd;

        }
        ++i;
    }
// count the number of words
// this function will be used to allocate the right amount of memory so it has to be correct !
    return wrd;
}

void words_to_array (char *words, char *words_array[])
{
    printf("%s\n", words);
    if(!words[0]){
        //memset(words_array, 0, 1);
        words_array[0] = NULL;
        return;
    }

    char * token = strtok(words, " ");

    int i=0;
    int w = count_words(words);
    int w_i = 0;
//walk through other tokens
    while(token != NULL && w_i < w) {

        words_array[i] = calloc(1, strlen(token) + 1);
        strncpy(words_array[i], token, strlen(token));
        i++;
        token = strtok(NULL, " ");
        w_i++;
    }

}
int main(){
    char* k[1];
    words_to_array("", k);
}