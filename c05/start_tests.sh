INTRA="/Users/usomer/Desktop/unittests/c05"

function ex00 {
	dp="${INTRA}/ex00/fif.out"
	python ./scripts/main.py ${dp} 5 120 	
	python ./scripts/main.py ${dp} 0 0	
}
function ex01 {
	dp = "ex01/fif.out"
	python ./scripts/main.py ${dp} 5 120 	
	python ./scripts/main.py ${dp} 0 0	
}
function ex02 {
	dp = "ex02/fif.out"
	python ./scripts/main.py ${dp} 5 120 	
	python ./scripts/main.py ${dp} 0 0	
}



make ft_iterative_factorial
ex00