# Process Switching 

> [!NOTE]
> When does the Operating System Gain Control?
>
> On INTERRUPT

## Interrupt types

1) timer interrupts
2) IO
3) traps
4) syscalls
5) Page Faults (page is not in process memory)

## SYS-CALL

![sys-call](sys-call.png)
![modern-sys-call](modern-sys-call.png)


## SWITCHING (3)

- CONTEXT
- PROCESS

#### **`Context` Switch**

- happens after QUANTUM passed.

![context switch](context-switch.png)

#### **`Process` Switch**

![process switch](process-switch.png)

## OS-functions

Does the operating system exist out of processes

### **Monolith Kernel**

![monolith](monolith.png)

