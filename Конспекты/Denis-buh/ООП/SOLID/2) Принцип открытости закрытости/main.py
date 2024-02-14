



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
    
    
class SuperUser(User):
    """Класс супер юзера"""
    
    def __init__(self, name: str, super_name:str) -> None:
        """Инициализатор класса

        Args:
            name (str): имя
            super_name (str): супер имя супер юзера
        """
        User().__init__(self, name)
        self.super_name = super_name
    
    
# Принцип открытости закрытости говорит о том что 
#   для модификации самостоятельного класса необходим класс модификатор который будет наследовать модифицируемый класс
