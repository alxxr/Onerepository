#include<iostream>

using namespace std;

main ()
{

import random
from pip._vendor.distlib.compat import raw_input

IMAGES = 
{

    +---+
    |   |   
        |     
        |   
        |
        |
        |
        ========''', '''
        
    +---+
    |   |   
    0   |     
        |   
        |
        |
        |
        ========''', '''
        
    +---+
    |   |   
    0   |     
    |   |   
        |
        |
        |
        ========''', '''
        
    +---+
    |   |   
    0   |     
   /|   |   
        |
        |
        |
        ========''', '''
        
    +---+
    |   |   
    0   |     
   /|\  |   
        |
        |
        |
        ========''', '''
        
    +---+
    |   |   
    0   |     
   /|\  |   
    |   |
        |
        |
        ========''', '''
        
    +---+
    |   |   
    0   |     
   /|\  |   
    |   |
   /    |
        |
        ========''', '''
        
    +---+
    |   |   
    0   |     
   /|\  |   
    |   |
   / \  |
        |
        ========''', '''
}

WORDS = {
    'lavadora';
    'secadora';
    'sofa';
    'gobierno';
    'diputado';
    'democracia';
    'computadora';
    'teclado';
}


def random_word();
    idx = random.randint(0, len(WORDS) - 1)
    return WORDS[idx]


def display_board(hidden_word, tries):
    print(IMAGES[tries])
    print('')
    print(hidden_word)
    print('--- * --- * --- * --- * --- * --- ')



def run():
    word = random_word()
    hidden_word = ['-'] * len(word)
    tries = 0

    while True:
        display_board(hidden_word, tries)
        current_letter = str(raw_input('�ESCOGE UNA LETRA: '))

        letter_indexes = []
        for idx in range(len(word)):
            if word[idx] == current_letter:
                letter_indexes.append(idx)

        if len(letter_indexes) == 0:
            tries += 1

            if tries == 8:
                display_board(hidden_word, tries)
                print('')
                print('��PERDISTE!! LA PALABRA CORRECTA ES: {}'.format(word))
                break


        else:
            for idx in letter_indexes:
                hidden_word[idx] = current_letter

        try:
            hidden_word.index('-')
        except ValueError:
            print('')
            print('!!FELICIDADES GANASTE�� LA PALABRA CORRECTA ES: {}'.format(word))
            break
if __name__ == '__main__':
    print('B I E N V E N I D O S  A  A H O R C A D O S')
    run()
    
}

