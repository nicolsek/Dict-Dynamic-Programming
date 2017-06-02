all:
	g++ dynProg.cpp -o dynProg

out:
	.\dynProg < inSmall.txt
