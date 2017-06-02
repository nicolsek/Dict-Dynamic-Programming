all:
	g++ dynProg.cpp -std=c++11 -o dynProg

out:
	.\dynProg < inSmall.txt
