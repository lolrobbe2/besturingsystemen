# interrupts

> an `interrupt` is a request for the processor to `interrupt currently executing code` (when permitted), so that the **event** can be **processed** in a **timely manner**

![intterupt cycle](./interrupts/interrupt_cycle.png)

## ISR (intterupt service routine)

SAVE => EXECUTE => RESTORE

<!-- tabs:start -->

### **step 1**

- store PCR register (Program Counter) in PCB (Process Control Block)
- store STACK POINTER in Control Stack

![step1](./interrupts/isr_step1.png)

### **step 2**

- store PCR on control stack (kernel)
- store registers on control stack (kernel)

![step2](./interrupts/isr_step2.png)

### **step 3**

- set PCR to start of ISR
- update stack pointer

![step3](./interrupts/isr_step3.png)

### **step 4**

- execute the ISR

![step4](./interrupts/isr_step4.png)

### **step 5**

- restore Registers from Control Stack
- restore Stack Pointer

![step5](./interrupts/isr_step5.png)

### **step 6**

- restore program counter
- resume previous execution

![step5](./interrupts/isr_step6.png)
<!-- tabs:end -->

## Comparison

> [!NOTE] the CPU is not sitting IDLE

![interrupt comparison](./interrupts/interrupt_comparison.png)

