function ListNode(val, next) {
    this.val = val ? val : 0;
    this.next = next ? next : null;
}

function reverse_kNodes(list, k) {
    // initialize variables.
    let current = list;

    let HEAD = null;
    let TAIL = null;

    // O(n) - iterate through the list.
    while (current) {
        let i = 0;
        let ahead = current;
        let first = current; // the first sub-node. (Will become new TAIL)

        // bring ahead pointers to the Kth nodes.
        while (i < k && ahead) {
            ahead = ahead.next;
            i++;
        }

        // pre-maturely got to the end of list.
        if (!ahead && i < k) {
            if (TAIL) {
                TAIL.next = first;
            }
            break;
        }

        // reverse the list from current to ahead.
        let prev = null;
        let next = null;
        while (current != ahead) {
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }
        // if the HEAD and TAIL are valid pointers, it must be updated.
        if (HEAD && TAIL) {
            TAIL.next = prev;
        }
        // new head of the list.
        if (!HEAD) {
            HEAD = prev;
        }
        TAIL = first;
    }

    return HEAD;
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
console.log(print_list(reverse_kNodes(link_list([1,2,3,4,5,6]), 7)));