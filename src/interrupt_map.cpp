#include <cstdint>

#include "default_interrupts.h"

#define ISR_VECTOR_LENGTH 155

//extern void (*_stack)();
//extern "C" void _stack();
extern uint32_t _stack;
//= reinterpret_cast<void ()()>(0x20008000);

void (*const isr_vector[ISR_VECTOR_LENGTH])() __attribute__ ((section(".isr_vector"))) =
{
   //Make a struct instead? Want to show stack start is part of vector in documentation
   __extension__ reinterpret_cast<void (*)()>(&_stack),
   
   reset_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr,
   blocking_isr
};
