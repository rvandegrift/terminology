#!/bin/sh
printf 'normal\n'
printf '\033[0mabcdefghijklmnopqrstuvwxyz\n\033[0m'
printf '\033[0mABCDEFGHIJKLMNOPQRSTUVWXYZ\n\033[0m'

printf '\nbold\n'
printf '\033[1mabcdefghijklmnopqrstuvwxyz\n\033[0m'
printf '\033[1mABCDEFGHIJKLMNOPQRSTUVWXYZ\n\033[0m'

printf '\nitalic\n'
printf '\033[3mabcdefghijklmnopqrstuvwxyz\n\033[0m'
printf '\033[3mABCDEFGHIJKLMNOPQRSTUVWXYZ\n\033[0m'

printf '\nbolditalic\n'
printf '\033[3;1mabcdefghijklmnopqrstuvwxyz\n\033[0m'
printf '\033[3;1mABCDEFGHIJKLMNOPQRSTUVWXYZ\n\033[0m'

printf '\nfraktur\n'
printf '\033[20mabcdefghijklmnopqrstuvwxyz\n\033[0m'
printf '\033[20mABCDEFGHIJKLMNOPQRSTUVWXYZ\n\033[0m'

printf '\nencircled\n'
printf '\033[52ma b c d e f g h i j k l m n o p q r s t u v w x y z 0 1 2 3 4\n\033[0m'
printf '\033[52mA B C D E F G H I J K L M N O P Q R S T U V W X Y Z 5 6 7 8 9\n\033[0m'
