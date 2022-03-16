# Automata_simulator
Implementation of Automata simulator
There is project file in CMake format.
After running
User must input 
  Input Alphabet
  Output Alphabet
  States
  Table with Lambda and Delta values
Following is the format of valid input
  a1, a2, a3, a4
  b1, b2
  q0, q1, q2

  b1,q0 | b2,q2 | b1,q0 | b2,q1
  b1,q1 | b2,q2 | b1,q1 | b2,q1
  b1,q2 | b2,q2 | b1,q0 | b2,q1
After it User must input size for set of Input 
  For ex:
  5
  a1, a3, a4, a2, a1, a3
After it program will 
  if inputs are valid : return Results set 
  otherwise : ABORT

