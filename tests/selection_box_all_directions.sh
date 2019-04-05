#!/bin/sh

# char width: 7
# char height: 15

# clear screen
printf '\033[2J'

# set color
printf '\033[46;31;3m'

#move to 2,0
printf '\033[2H'

# set text
printf "The path of the righteous man is beset on all sides by the iniquities of the selfish and the tyranny of evil men. Blessed is he who, in the name of charity and good will, shepherds the weak through the valley of darkness, for he is truly his brother's keeper and the finder of lost children. And I will strike down upon thee with great vengeance and furious anger those who would attempt to poison and destroy My brothers. And you will know My name is the Lord when I lay My vengeance upon thee.\n"

##
# Mouse selection from top-left to down-right
# (x:2,y:2) to (x:6, y:3)
# -> (16, 35) to (44, 50)
##

# mouse down to start selection
printf '\033}td;16;35;1;4;0\0'

# mouse move
printf '\033}tm;44;50;4\0'

# mouse up
printf '\033}tu;44;50;1;4;0\0'

# force render
printf '\033}tr\0'

# selection is
printf '\033}tssh an\nod wi\0'

# remove selection
printf '\033}td;0;0;1;0;0\0\033}tu;0;0;1;0;0\0'

# force render
printf '\033}tr\0'

# no more selection
printf '\033}tn\0'


##
# Mouse selection from down-right to top-left
# (x:6,y:3) to (x:2, y:2)
# -> (44, 50) to (16, 35)
##

# mouse down to start selection
printf '\033}td;44;50;1;4;0\0'

# mouse move
printf '\033}tm;16;35;4\0'

# mouse up
printf '\033}tu;16;35;1;4;0\0'

# force render
printf '\033}tr\0'

# selection is
printf '\033}tssh an\nod wi\0'

# remove selection
printf '\033}td;0;0;1;0;0\0\033}tu;0;0;1;0;0\0'

# force render
printf '\033}tr\0'

# no more selection
printf '\033}tn\0'



##
# Mouse selection from top-right to down-left
# (x:6,y:2) to (x:2, y:3)
# -> (44, 35) to (16, 50)
##

# mouse down to start selection
printf '\033}td;44;35;1;4;0\0'

# mouse move
printf '\033}tm;16;50;4\0'

# mouse up
printf '\033}tu;16;50;1;4;0\0'

# force render
printf '\033}tr\0'

# selection is
printf '\033}tssh an\nod wi\0'

# remove selection
printf '\033}td;0;0;1;0;0\0\033}tu;0;0;1;0;0\0'

# force render
printf '\033}tr\0'

# no more selection
printf '\033}tn\0'



##
# Mouse selection from down-left to top-right
# (x:2,y:3) to (x:6, y:2)
# -> (16, 50) to (44, 35)
##

# mouse down to start selection
printf '\033}td;16;50;1;4;0\0'

# mouse move
printf '\033}tm;44;35;4\0'

# mouse up
printf '\033}tu;44;35;1;4;0\0'

# force render
printf '\033}tr\0'

# selection is
printf '\033}tssh an\nod wi\0'

# remove selection
printf '\033}td;0;0;1;0;0\0\033}tu;0;0;1;0;0\0'

# force render
printf '\033}tr\0'

# no more selection
printf '\033}tn\0'
