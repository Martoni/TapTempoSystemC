CXX=g++
SYSTEMC_HOME=/opt/systemc-2.3.3/

MODULE_NAME=first_counter

all: $(MODULE_NAME)_tb

$(MODULE_NAME)_tb: $(MODULE_NAME)_tb.cpp
	$(CXX) -I. -I$(SYSTEMC_HOME)/include -L. -L$(SYSTEMC_HOME)/lib-linux64\
		-o $(MODULE_NAME)_tb $(MODULE_NAME)_tb.cpp -lsystemc -lm
