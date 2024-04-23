



class User:
    """Класс юзер"""
    
    def __init__(self, name:str) -> None:
        """Инициализатор класса

        Args:
            name (str): имя
        """
        self.name = name
        
    def get_name(self) -> str:
        return self.name
    
    
class Command:
    """Класс команды"""
    def __init__(self, name:str) -> None:
        """Инициализатор класса

        Args:
            name (str): название команды
        """
        self.name = name
        
    def get_name(self) -> str:
        return self.name
    
    def get_users(self):
        """Получение информации о юзерах"""
    
    
# Принцип единой ответственности говорит о том что 
#   для класса Command должен быть определен только его функционал
#   для класса User должен быть определен только его функционал