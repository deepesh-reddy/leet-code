/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dummy=new ListNode;
        dummy->next=head;
        ListNode *prev=dummy;
        ListNode *current=head;
        while(current!=0)
        {
            while(current->next!=0 && prev->next->val == current ->next->val)
            {
                current=current->next;
            }
            if(prev->next==current)
            {
                prev=prev->next;
            }
            else
            {
                prev->next=current->next;
            }
            current=current->next;
        }
        head=dummy->next;
        return head;
    }
};
int main()
{
    cout<<"Hello World";

    return 0;
}