nameFile = exercicio1

init:
	gcc $(nameFile).c -o $(nameFile) && ./$(nameFile)
clear:
	rm $(nameFile)