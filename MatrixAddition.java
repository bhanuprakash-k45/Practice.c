public class MatrixAddition {
public static void main(String[] args) {
if (args.length != 1) {
System.out.println("Usage: java MatrixAddition N");
System.exit(1);
}

int N = Integer.parseInt(args[0]);

if (N <= 0) {
System.out.println("N must be a positive integer.");
System.exit(1);
}
int[][] matrixA = new int[N][N];
int[][] matrixB = new int[N][N];
int[][] result = new int[N][N];

// Fill matrixA and matrixB with values (you can modify this part)
fillMatrix(matrixA, N);
fillMatrix(matrixB, N);

// Add the matrices
addMatrices(matrixA, matrixB, result, N);

// Display the matrices
System.out.println("Matrix A:");
printMatrix(matrixA);

System.out.println("Matrix B:");
printMatrix(matrixB);

System.out.println("Result of Matrix Addition:");
printMatrix(result);
}

// Fill a matrix with random values (you can modify this part)
public static void fillMatrix(int[][] matrix, int N) {
for (int i = 0; i < N; i++) {
for (int j = 0; j < N; j++) {
matrix[i][j] = i + j; // You can change this to your desired values
}
}

}

// Add two matrices
public static void addMatrices(int[][] A, int[][] B, int[][] result, int N) {
for (int i = 0; i < N; i++) {
for (int j = 0; j < N; j++) {
result[i][j] = A[i][j] + B[i][j];
}
}
}

// Print a matrix
public static void printMatrix(int[][] matrix) {
for (int[] row : matrix) {
for (int value : row) {
System.out.print(value + " ");
}
System.out.println();
}
}
}
