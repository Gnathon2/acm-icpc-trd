projectName = test

gen: contents.tex
	xelatex -jobname=$(projectName) main.tex
	xelatex -jobname=$(projectName) main.tex
	xelatex -jobname=$(projectName) main.tex

contents.tex: build_contents.py src/
	python3 build_contents.py > contents.tex


