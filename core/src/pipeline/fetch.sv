module m_control_fetch(
    input clk,
    input nrst,
    output reg busy,

    input[31:0] pc,
    output reg[31:0] instruction,

    output reg[31:0] mem_addr,
    input[31:0] mem_data,
    output enable,
    input ready,
);
    assign enable = busy;

    always @(posedge clk or negedge nrst) begin
        if (!nrst) begin
            mem_addr <= 32'b0;
            instruction <= 32'b0;
            busy <= 0;
        end
        else begin
            if (!busy) begin
                busy <= 1;
                mem_addr <= pc;
            end
            else if (ready) begin
                    instruction <= mem_data;
                    busy <= 0;
            end
        end
    end
endmodule