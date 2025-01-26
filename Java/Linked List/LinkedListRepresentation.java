class Node{
    int data;
    Node next;
}
class Main {
    public static void main(String[] args) {
        Node head = new Node();
        head.data = 4;
        head.next = null;
        Node temp = new Node();
        temp.data = 6;
        temp.next = null;
        head.next = temp;
       System.out.println(head.data);
       System.out.println(head.next.data);
    }
}
