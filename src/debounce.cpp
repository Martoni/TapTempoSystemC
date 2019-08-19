#include "systemc.h"

// Module parameters
#define DEB_CLK_FREQ_KHZ 20000
#define DEBOUNCE_PER_MS 20

SC_MODULE(debounce) {
	// Input/output Ports
	sc_in<bool>	clk;
	sc_in<bool>	reset;
	sc_in<bool>	btn_in;
	sc_out<bool>	btn_db;

	// local variables
	sc_uint<16>	



}; // End of debounce module
