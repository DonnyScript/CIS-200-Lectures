.so macros
.TL 
Linked Lists 
.AU 
Donovan McCathy 
.AI 
University of Michigan Dearborn 
.NH
What you need: 
.RS 
.BP
A class is defined to represent each list item
.BP 
for an int class you need a node to pointer to the next node and a int data value 
.BP
You need a constructor that takes the data value in, and sets nextNodePtr to nullptr
.BP 
Then a function that inserts the current node after the previous one 
.RE
.NH 
How to make the fucntions 
.RS
.BP 
To make the linker function you need to make the next pointer a parameter, make a temporary pointer that stores the current node, then set the current pointer to the next node, then 
.RE 
.NH
How to use?
.RS 
.BP 
Declare the list, when you do call the first node headObj
.BP 
Decalre headObj with value 
.BP 
declare next object as such, then call the last objects InsertAfter function and put the node after that as an parameter and repeat.
.RE 
*

headObj = new IntNode(-1);

nodeObj1 = new IntNode(555);
headObj->InsertAfter(nodeObj1);

*
