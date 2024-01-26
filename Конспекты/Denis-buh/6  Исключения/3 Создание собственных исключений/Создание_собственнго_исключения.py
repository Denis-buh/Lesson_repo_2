



class MyBaseError(Exception):
    """Дазовый класс для моих исключений"""
    def __init__(self, *args):
        if args:
            self.message = args[0]
        else:
            self.message = None

    def __str__(self):
        if self.message:
            return 'MyBaseError, {0} '.format(self.message)
        else:
            return 'MyBaseError была вызвана'
        
class NegError(MyBaseError):
    """Мой класс для уско специализированных исключений"""
        

# Подымаем собственное исключение с коментарием 
try:
    raise MyBaseError("Мое исключение")
except MyBaseError as error:
    print(f"Была поднято исключение с коментарием: {error}")

# Подымаем собственное исключение без коментария
try:
    raise MyBaseError
except MyBaseError as error:
    print(f"Была поднято исключение без коментария: {error}")