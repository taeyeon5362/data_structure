#include<stdio.h>

struct node{
	int player_id;
	struct node *next;
};
struct node* start, *ptr, *new_nodes;

int main() {
        int n, k, i, count;
        printf("\n Enter the number of players: ");
        scanf("%d", &n);
        printf("\n Enter the value of k (every kth player gets eliminated): ");
        scanf( "%d", &k);

        start = malloc(sizeof(struct node));
        start->player_id = 1;
        ptr = start;

        for(i = 2; i <= n; i++) {
                new_node = malloc(sizeof(struct node));
                ptr->next = new_node;
                new_node->player_id = i;
                new_node->next = start;
                ptr = new_node;
        }
        for(count = n; count > 1; count--) {
                for(i = 0; i < k - 1; ++i)
                        ptr = ptr->next;
                ptr->next = ptr->next->next;
        }
        printf("\n The winner is player %d", ptr->player_id);
        getch();
        return 0;
}
