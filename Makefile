OPT = -std=c++20
BIN = ./bin
INC = -I ./include -I ./tasks

vmcache:
	g++ $(INC) -laio ./source/vmcache.cpp -o $(BIN)/vmcache
	$(BIN)/vmcache

tasks/query-%.cpp:
	g++ $(OPT) $(INC) $@ -lfmt -o $(BIN)/query-gen
	$(BIN)/query-gen > tasks/query.cpp

query:
	g++ -g $(OPT) $(INC) resources/queryFrame.cpp -laio -lfmt -o $(BIN)/query
	$(BIN)/query