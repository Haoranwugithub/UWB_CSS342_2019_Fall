#ifndef A_SHAPE_LISTNODE_H
#define A_SHAPE_LISTNODE_H

class ListNode {
public:
    // val(0) to make valgrind happy
    ListNode() : val(0), next(nullptr) {}

    ListNode(int val) : val(val), next(nullptr) {}

    int getVal() const {
        return val;
    }

    void setVal(int val) {
        ListNode::val = val;
    }

    ListNode *getNext() const {
        return next;
    }

    void setNext(ListNode *next) {
        ListNode::next = next;
    }

private:
    int val;
    ListNode * next;
};

#endif //A_SHAPE_LISTNODE_H
