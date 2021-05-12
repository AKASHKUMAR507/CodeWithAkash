from random import *
player_score = 0
computer_score = 0


def hangedman(hangman):
    graphic = [“””
               +-------+
               |
               |
               |
               |
               |
               == == == == == == == “””,
               “””
               def start():
               print “Let’s play a game of Linux Hangman.”
               while game():
               pass
               scores()

               def game():
               dictionary = [“gnu”, ”kernel”, ”linux”, ”mageia”, ”penguin”, ”ubuntu”]
               word= choice(dictionary)
               word_length= len(word)
               clue= word_length * [“_”]
               tries= 6
               letters_tried= “”
               guesses= 0
               letters_right= 0
               letters_wrong= 0
               global computer_score, player_score
               while (letters_wrong != tries) and (“”.join(clue) != word):
               letter= guess_letter()
               if len(letter) == 1 and letter.isalpha():
               if letters_tried.find(letter) != -1:
               print “You’ve already picked”, letter
