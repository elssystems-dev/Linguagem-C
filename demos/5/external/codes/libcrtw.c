/* Código da biblioteca CRTW
 * O código 'tuiCalculator.c' poderia muito bem usar este arquivo para buscar as funções do header definido (crtw.h)
 * No entanto, em meu caso, isso não se vê necessário. Estou usando um subsistema Linux, que já suporta ANSI nativamente.
 * O autor gostaria de demonstrar que, com o crossplatform, é necessário adaptar a programação de acordo com o SO.  
 */

#include <stdio.h>
#include <windows.h>

/* Função: Limpa Tela */
void clear(void)
{
    HANDLE tela;
    DWORD escrita = 0;
    COORD pos;
    tela = GetStdHandle(STD_OUTPUT_HANDLE);
    pos.X = 0;
    pos.Y = 0;
    FillConsoleOutputCharacter(tela, 32, 80 * 25, pos, &escrita);
    return;
}

/* Função: Posiciona Cursor */
void position(int line, int row)
{
    HANDLE tela;
    COORD pos;
    tela = GetStdHandle(STD_OUTPUT_HANDLE);
    pos.X = row - 1;
    pos.Y = line - 1;
    SetConsoleCursorPosition(tela, pos);
    return;
}

/* Função: Limpa Linha a partir da posição do cursor */
void clearline(void)
{
    HANDLE tela;
    CONSOLE_SCREEN_BUFFER_INFO video;
    DWORD escrita = 0;
    COORD pos;
    tela = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(tela, &video);
    pos.X = video.dwCursorPosition.X;
    pos.Y = video.dwCursorPosition.Y;
    FillConsoleOutputCharacter(tela, 32, 80 - pos.X, pos, &escrita);
    return;
}
