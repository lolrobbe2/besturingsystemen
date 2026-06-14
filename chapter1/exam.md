# exam questions

## 1 Programmed I/O vs Intterupt based I/O

> [!NOTE] Programmed I/O vs Intterupt based I/O
> 
> Vergelijk `geprogrammeerde I/O` met `interruptgestuurde I/O`. Leg uit wat een interrupt precies is, hoe
> de processor daarop reageert en waarom DMA daar nog een extra efficiëntiewinst bovenop kan
> geven
>
> ```
> Programmed IO is very heavy on the CPU as it the cpu constantly needs to send commands the output device using OUT,IN commands (X86),intterupt based IO can raise an interrupt to let the CPU the IO device is ready.

DMA(Direct Memory Access) is even more efficient as DMA directly allows the CPU to read from a memory region as if it where ram (MMIO) wich mean the device can write its data in the DMA region and raise an intterupt wich is allot faster then constantly having to INNTERUPT the CPU.

DMA also can talk to devices accross the memory BUS, without needing intervention of the CPU
> ```


## 2 Waarom zijn interrupts onmisbaar voor moderne besturingssystemen?

Omdat anders het OS constant alles moeten POLLEN, kijken of er iets gebeurt is. interups maken true MultiTasking mogelijk door iedere Timer intterupt een ander Process te laaten draaien.

## 3 Wat is het verschil tussen symmetrische en asymmetrische multiprocessing?

zie OPERATING SYSTEM.