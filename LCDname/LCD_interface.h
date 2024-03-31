#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H

void LCD_voidInit(void);
void LCD_voidClear(void);
void LCD_voidSendCmd(u8 Copy_u8Cmd);
void LCD_voidSendChar(u8 Copy_u8Char);
void LCD_voidSendString(u8 *Copy_up8Arr);







#endif
