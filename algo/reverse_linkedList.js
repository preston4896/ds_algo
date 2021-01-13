function ListNode(val, next) {
    this.val = val ? val : 0;
    this.next = next ? next : null;
}

function reverse(head) {
    let prev = null;
    let next = null;
    let curr = head;
    while (curr) {
        next = curr.next;
        curr.next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}

function link_list(arr) {
    let list = new ListNode();
    let temp = list;
    for (let num of arr) {
        temp.next = new ListNode(num);
        temp = temp.next;
    }
    return list.next;
}

function print_list(linked_list) {
    let res = [];
    while (linked_list) {
        res.push(linked_list.val);
        linked_list = linked_list.next;
    }
    return res;
} 
console.log(print_list(reverse(link_list([9,8,1,8,8,7,2,9]))));