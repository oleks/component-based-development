open System.Runtime.InteropServices

module InteropStack =
  [<DllImport(@"stack10", CallingConvention = CallingConvention.Cdecl)>]
  extern int stack_push(int value)

  [<DllImport(@"stack10", CallingConvention = CallingConvention.Cdecl)>]
  extern int stack_pop(int& value)

printfn "Push: %d" (InteropStack.stack_push(5))
let mutable value = 0
printfn "Pop: %d" (InteropStack.stack_pop(&value))
printfn "Value: %d" value
