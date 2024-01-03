module m_control_alu(
    input clk,
    input nrst,
    output busy,

    input[31:0] a,
    input[31:0] b,
    input s_control control,
    input[4:0] rd_in,

    output reg[31:0] out,
    output reg[4:0] rd_out
);
    wire alu_out;
    assign busy = 0;
    m_alu alu(a, b, control, alu_out);

    always @(posedge clk) begin
        out <= alu_out;
        rd_out <= rd_in;
    end
endmodule