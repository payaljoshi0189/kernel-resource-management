header Main
 —- <PAYAl PRADEEP JOSHI>

  uses Kernel
  
  const
     BUFFER_SIZE = 5
 
  functions
    main ()
  
  -------------------- Hoare Semantics Testing Class -------------------
  class BoundedBufferMonitor
    superclass Object

    fields
    nextIn, nextOut: int
    cntFull: int
    notEmpty: Condition1
    notFull: Condition1
    monitorMutex: HoareMutex
    buffer: array [BUFFER_SIZE] of char

    methods
      Init ()
      Producer (p: int)
      Consumer (c: int)
  endClass

endHeader
