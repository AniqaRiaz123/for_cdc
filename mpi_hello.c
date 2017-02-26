#include <stdio.h>
#include <mpi.h>

int main(int argc, char** argv) {
    int myrank, nprocs, namelen;
    char processorName[10];


    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &nprocs);
    MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
    MPI_Get_processor_name(processorName, &namelen);

    
    printf("Hello from process running on processor %s having rank %d of %d\n", processorName, myrank, nprocs);

    MPI_Finalize();
    return 0;
}
