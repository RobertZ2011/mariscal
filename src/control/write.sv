module m_control_write(
    input clk,
    input nrst,
    output reg stall,

    input[4:0] rd_in,
    input[31:0] value,

    output reg[4:0] rd_out,
    output reg[31:0] out
);

    @always(posedge clk or negedge nrst) begin
    end
endmodule