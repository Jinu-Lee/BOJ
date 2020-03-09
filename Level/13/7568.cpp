#include <iostream>

using namespace std;

typedef struct
{
    int weight, height, rank = 1;
} Person;

int compare(const Person &A, const Person &B)
{
    if (A.weight < B.weight && A.height < B.height) // A < B
        return 1;
    else
        return 0;
}

int main()
{
    int N;
    scanf("%d", &N);

    Person *persons = new Person[N];
    for (int i = 0; i < N; i++)
        scanf("%d %d", &persons[i].weight, &persons[i].height);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (i == j)
                continue;
            else if (compare(persons[i], persons[j]))
                persons[i].rank++;

    for (int i = 0; i < N; i++)
        printf("%d ", persons[i].rank);

    free(persons);
    return 0;
}