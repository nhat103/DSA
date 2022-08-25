# Algorithms for stack
# isEmpty()
if top < 1
    return true
 else
    return false
end procedure
# isFull()
using array if top = maxzise 
using linked list has no isfull()
#push()
begin
 if stack is full
    return
 endif
else
 increment top
 stack[top] assign value
end else
end procedure
# pop()
begin
 if stack is empty
    return
 endif
else
 store value of stack[top]
 decrement top
 return value
end else
end procedure


# peek() -> stakk[top]
# using Linked list
#Declare
	Node
	topNode
# isEmpty() 
	if topNode == Null 
# push() 
Node new_node 
if() 
	topNode = null -> topNode = new_node
else 
	new_node->next = topNode
	topNode = new_node
# pop()
# using Array
#Declare
int top
int maxsize = 10
int array[10]
#isfull()
	top = maxsize;
#isEmpty()
	top<1
#push(int data)
	if(!isfull()){
	top++
	array[top] = data
	}else{
	print("stack Overflow");
	}
# pop()
if(!isEmpty()){
top--
}else{
print("stack Underflow")
}
#peek()
if(!isEmpty){
print(array[top])
}else{
print("stack Underflow")
}
# push(), pop(), isEmpty() and peek() all take O(1) time. We do not run any loop in any of these operations.
