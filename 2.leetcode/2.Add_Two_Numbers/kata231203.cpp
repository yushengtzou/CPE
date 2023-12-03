// 鄒雨笙 Leetcode 2023/12/03
//
// Problem 2. Add Two Numbers


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 *
*/


class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            // 宣告一個名為 dummyHead 的虛擬頭結點
            ListNode dummyHead;
            // 宣告一個指標 curr 指向 dummyHead
            ListNode* curr = &dummyHead;

            int carry = 0;  // 進位

            // 遍歷兩個鏈表
            while (l1 != nullptr || l2 != nullptr) {
                // 獲取當前節點的值
                int x = (l1 != nullptr) ? l1->val : 0;
                int y = (l2 != nullptr) ? l2->val : 0;

                // 計算總和並更新進位
                int sum = carry + x + y;
                carry = sum / 10;

                // 創建一個新節點儲存個位數
                curr->next = new ListNode(sum % 10);
                curr = curr->next;

                // 移動到 l1 和 l2 的下一個節點
                if (l1 != nullptr) l1 = l1->next;
                if (l2 != nullptr) l2 = l2->next;
            }

            // 檢查最後是否有進位
            if (carry > 0) {
                curr->next = new ListNode(carry);
            }

            // 返回結果鏈表的真實頭節點，跳過虛擬頭節點
            return dummyHead.next;
        }
    };

