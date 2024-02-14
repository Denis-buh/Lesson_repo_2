



class Transport:
    """Класс транспорт"""
    def __init__(self, name:str, speed:float) -> None:
        """Инициализатор

        Args:
            name (str): Имя транспорта
            speed (float): Скорость транспорта
        """
        self.name = name
        self.speed = speed
    
    def get_name(self): return self.name
    
    def get_speed(self): return self.speed
    
    
class TransportWithEngine(Transport):
    """Клас транспорта с мотором"""
    def start_engine(self): pass
    
    
class TransportWithnoEngine(Transport):
    """Клас транспорта без мотора"""
    def start(self): pass
    
    
class Car(TransportWithEngine):
    """Класс машины"""
    

class Bicycle(TransportWithEngine):
    """Класс велосипеда"""
    
# Принцип подстановки говорит о том что 
#   дочерний класс может заменить базовый класс 
#   наследник только дополняет поведение базового класса 
#   поведение базового класса не меняется