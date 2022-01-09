#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int* twoSum(int* nums, int numsSize, int target, int* returnSize)//力扣第一题：两数之和
//{
//    int i = 0;
//    int j = 0;
//    int* a;
//    a = (int*)malloc(sizeof(int) * 2);
//    for (i = 0;i < numsSize - 1;i++)
//    {
//        for (j = i + 1;j < numsSize;j++)
//        {
//            if (nums[j] == target - nums[i])
//            {
//                a[0] = i;
//                a[1] = j;
//                *returnSize = 2;
//                return a;
//            }
//        }
//    }
//    return 0;
//}
//
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     struct ListNode *next;
// * };
// */   
////力扣第二题：链表两数相加
//int c = 0;
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
//{
//    if (l1 == NULL && l2 == NULL && c == 0)
//    {
//        return NULL;
//    }
//    l1 = ((l1 != NULL) ? (c += l1->val, l1->next) : (c += 0, l1));
//    l2 = ((l2 != NULL) ? (c += l2->val, l2->next) : (c += 0, l2));
//    struct ListNode* mix = (struct ListNode*)malloc(sizeof(struct ListNode));
//    mix->val = c % 10;
//    c = c / 10;
//    mix->next = addTwoNumbers(l1, l2);
//    return mix;
//}

