grafica.png : data.txt data0.txt graph.py
	python graph.py

data.txt data0.txt : backward.cpp ci.cpp
	c++ bw.cpp -o bw
	./bw > data.txt

	c++ ci.cpp -o ci
./ci > data0.txt
