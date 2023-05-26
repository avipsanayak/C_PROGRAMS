#include <stdio.h>
#include <stdlib.h>
#define new_node_2105708 (struct node_2105708*)malloc(sizeof(struct node_2105708))

struct node_2105708 {
    int vertex_2105708;
    struct node_2105708 *next_2105708;
};
void main() {
    int ch_2105708;
    do {
        printf("\n GRAPH ");
        printf("\n 1. Directed Graph ");
        printf("\n 2. Un-Directed Graph ");
        printf("\n 3. Exit ");
        printf("\n\n Select a proper option : ");
        scanf("%d", &ch_2105708);
        switch (ch_2105708) {
            case 1:
                dirgraph_2105708();
                break;
            case 2:
                undirgraph_2105708();
                break;
            case 3:
                exit(0);
        }
    } while (1);
}
int dirgraph_2105708() {
    struct node_2105708 *neighbour_2105708[10], *p_2105708;
    int n_2105708, indeg_2105708, outdeg_2105708, i_2105708, j_2105708;
    printf("\n How Many Vertices ? : ");
    scanf("%d", &n_2105708);
    for (i_2105708 = 1; i_2105708 <= n_2105708; i_2105708++)
        neighbour_2105708[i_2105708] = NULL;
    read_graph_2105708(neighbour_2105708, n_2105708);
    printf("\n Vertex \t In_Degree \t Out_Degree \t Total_Degree ");
    for (i_2105708 = 1; i_2105708 <= n_2105708; i_2105708++) {
        indeg_2105708 = outdeg_2105708 = 0;
        p_2105708 = neighbour_2105708[i_2105708];
        while (p_2105708 != NULL) {
            outdeg_2105708++;
            p_2105708 = p_2105708 -> next_2105708;
        }
        for (j_2105708 = 1; j_2105708 <= n_2105708; j_2105708++) {
            p_2105708 = neighbour_2105708[j_2105708];
            while (p_2105708 != NULL) {
                if (p_2105708 -> vertex_2105708 == i_2105708)
                    indeg_2105708++;
                p_2105708 = p_2105708 -> next_2105708;
                }
        }
        printf("\n %5d\t\t\t%d\t\t%d\t\t%d\n", i_2105708, indeg_2105708, outdeg_2105708,
                indeg_2105708 + outdeg_2105708);
    }
    return 0;
}
int undirgraph_2105708() {
    struct node_2105708 *neighbour_2105708[10], *p_2105708;
    int deg_2105708, i_2105708, j_2105708, n_2105708;
    printf("\n How Many Vertices ? : ");
    scanf("%d", &n_2105708);
    for (i_2105708 = 1; i_2105708 <= n_2105708; i_2105708++)
        neighbour_2105708[i_2105708] = NULL;
    read_graph_2105708(neighbour_2105708, n_2105708);
    printf("\n Vertex \t Degree ");
    for (i_2105708 = 1; i_2105708 <= n_2105708; i_2105708++) {
        deg_2105708 = 0;
        p_2105708 = neighbour_2105708[i_2105708];
        while (p_2105708 != NULL) {
            deg_2105708++;
            p_2105708 = p_2105708 -> next_2105708;
        }
        printf("\n %5d \t\t %d\n", i_2105708, deg_2105708);
    }
    return 0;
}
int read_graph_2105708(struct node *neighbour_2105708[10], int n_2105708) {
    int i_2105708, j_2105708;
    char reply_2105708;
    struct node_2105708 *p_2105708, *c_2105708;
    for (i_2105708 = 1; i_2105708 <= n_2105708; i_2105708++) {
        for (j_2105708 = 1; j_2105708 <= n_2105708; j_2105708++) {
            if (i_2105708 == j_2105708)
                continue;
            printf("\n Vertices %d & %d are Adjacent ? (Y/N) :", i_2105708, j_2105708);
            scanf("%c", &reply_2105708);
            if (reply_2105708 == 'y' || reply_2105708 == 'Y') {
                c_2105708 = new_node_2105708;
                c_2105708 -> vertex_2105708 = j_2105708;
                c_2105708 -> next_2105708 = NULL;
                if (neighbour_2105708[i_2105708] == NULL)
                  neighbour_2105708[i_2105708] = c_2105708;
                else {
                    p_2105708 = neighbour_2105708[i_2105708];
                    while (p_2105708 -> next_2105708 != NULL)
                        p_2105708 = p_2105708 -> next_2105708;
                    p_2105708 -> next_2105708 = c_2105708;
                }
            }
        }
    }
    return 0;
}