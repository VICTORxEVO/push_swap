#!/bin/bash
read -p "enter numbers of tests: " loop_count
read -p "enter stack size: " num

GREEN='\033[0;32m'
END='\033[0m'


rm -rf push_swap_tester
make re
make clean
git clone https://github.com/LeoFu9487/push_swap_tester.git && cd push_swap_tester
echo -e "${GREEN}\t\tSTARTING...${END}"
sleep 1.3
bash loop.sh $num $loop_count
