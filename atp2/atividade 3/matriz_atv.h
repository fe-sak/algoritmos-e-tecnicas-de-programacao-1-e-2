
// Matriz armazenada em ponteiro duplo
typedef struct
{
  int lin, col; // linhas e colunas
  float **data; // dados
} mtz;

mtz new_mtz(int lin, int col, float init);
void free_mtz(mtz *m);
void mtz_read(mtz m);
void mtz_print(mtz m);
mtz soma_mtz(mtz A, mtz B);
mtz ppscalar_mtz(mtz A, int m);
mtz transposta_mtz(mtz A);
mtz soma_mtz(mtz A, mtz B);
mtz mul_mtz(mtz A, mtz B);
