/**
 * Definition for a Node.
 * type Node struct {
 *     Val int
 *     Next *Node
 *     Random *Node
 * }
 */
func createDummyNode(head *Node){
    temp:=head
    for temp!=nil{
        copyNode:=&Node{Val:temp.Val}
        copyNode.Next=temp.Next
        temp.Next=copyNode
        temp=temp.Next.Next
    }
}
func fixRandomPtr(head *Node){
    temp:=head;
    for temp!=nil{
        copyNode:=temp.Next
        if(temp.Random!=nil){
            copyNode.Random=temp.Random.Next
        }else{
            copyNode.Random=nil;
        }
        temp=temp.Next.Next
    }
}
func fixNextPtr(head *Node)* Node{
    dummyNode:=&Node{Val:-1}
    res:=dummyNode
    temp:=head
    for temp!=nil{
        res.Next=temp.Next;
        temp.Next=temp.Next.Next
        
        res=res.Next;
        temp=temp.Next
    }
    return dummyNode.Next;
}
func copyRandomList(head *Node) *Node {
    createDummyNode(head)
    fixRandomPtr(head)
    return fixNextPtr(head)
}