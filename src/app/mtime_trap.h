/*
 * m模式下 time trap 的入口handler函数
 */
#ifndef MTIME_TRAP_H
#define MTIME_TRAP_H


extern void time_trap_normal();

extern void mtime_trap();
// 你应该把 mtvec的值填为 mtime_trap

extern uint64 m_scratch[CPUS][3];
// 将mscratch的值填为 m_scratch的地址


#endif



