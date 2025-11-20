projectName = test

gen: contents.tex
	xelatex -jobname=$(projectName) main.tex
	xelatex -jobname=$(projectName) main.tex
	xelatex -jobname=$(projectName) main.tex

contents.tex:
	python3 build_contents.py > contents.tex


