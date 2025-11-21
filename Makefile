projectName = test

gen: content
	xelatex -jobname=$(projectName) main.tex
	xelatex -jobname=$(projectName) main.tex
	xelatex -jobname=$(projectName) main.tex

content: build_contents.py src/
	python3 build_contents.py > contents.tex


