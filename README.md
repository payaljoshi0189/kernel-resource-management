This project is implemented to understand the concept of monitors in concurrent programming.
Additionally, it also includes mutex implementation with Hoare semantics.

Hoare semantics algorithm comprises of following methods:
```Give(t: ptr to Thread)``` : Give away the mutex lock to the siganlled thread so that the if any other thread tries to acquire the lock on monitor's entry method, it would wait on the waiting list of mutex. Memory invariance is preserved across signal to wakeup from wait.

```Lock()```: Acquire the mutex if free, otherwise wait until the mutex is free and then get it.

```Unlock()``` :Release the mutex.  If other threads are waiting, then wake up the oldest one and give it the lock.

```Init()``` :Each mutex must be initialized.

```IsHeldByCurrentThread()```:  Return TRUE iff the current (invoking) thread holds a lock on the mutex.

Monitors implemented are:
```1. ThreadManager``` : This class monitors allocation and deallocation of resource threads.

```2. ProcessManager```: This class is monitor implmentation of Process manager which manages allocation and deallocation of ProcessControlBlocks to requesting threads

```3. FrameManager```: This class manages allocation and deallocation of frames to threads.

All the monitors demonstrate the concept of resource allocation and de-allocation.