projectName = test

gen: content
	xelatex -jobname=$(projectName) main.tex
	xelatex -jobname=$(projectName) main.tex
	xelatex -jobname=$(projectName) main.tex

content: 
	python3 build_contents.py > contents.tex


